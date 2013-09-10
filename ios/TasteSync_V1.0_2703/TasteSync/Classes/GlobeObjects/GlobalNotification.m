//
//  GlobalNotification.m
//  TasteSync
//
//  Created by Victor on 1/29/13.
//  Copyright (c) 2013 Mobioneer. All rights reserved.
//

#import "GlobalNotification.h"
#import "UserDefault.h"
#import "JSONKit.h"
@interface GlobalNotification ()
{
    int indexLoad;
}

@end

@implementation GlobalNotification


- (id)initWithALlType
{
    self = [super init];
    if (self) {
               
        self.arrData = [[NSMutableArray alloc] init];
        self.arrDataRead = [[NSMutableArray alloc] init ];
        self.arrDataUnread = [[NSMutableArray alloc]init];
    }
    return self;
}

-(void)requestData
{
    NSString* link = [NSString stringWithFormat:@"recolist?userid=%@&paginationid=1",[UserDefault userDefault].userID];
    CRequest* request = [[CRequest alloc]initWithURL:link RQType:RequestTypeGet RQData:RequestDataAsk RQCategory:ApplicationForm withKey:1];
    request.delegate = self;
    [request startFormRequest];
    
    NSString* link2 = [NSString stringWithFormat:@"recolist?userid=%@&paginationid=2",[UserDefault userDefault].userID];
    CRequest* request2 = [[CRequest alloc]initWithURL:link2 RQType:RequestTypeGet RQData:RequestDataAsk RQCategory:ApplicationForm withKey:4];
    request2.delegate = self;
    [request2 startFormRequest];
}

-(void)reloadUpData:(int)index
{
    NSString* link = [NSString stringWithFormat:@"recolist?userid=%@&paginationid=1",[UserDefault userDefault].userID];
    CRequest* request = [[CRequest alloc]initWithURL:link RQType:RequestTypeGet RQData:RequestDataAsk RQCategory:ApplicationForm withKey:2];
    request.delegate = self;
    [request startFormRequest];
}
-(void)reloadDownData:(int)index
{
    NSString* link = [NSString stringWithFormat:@"recolist?userid=%@&paginationid=%d",[UserDefault userDefault].userID, index];
    CRequest* request = [[CRequest alloc]initWithURL:link RQType:RequestTypeGet RQData:RequestDataAsk RQCategory:ApplicationForm withKey:3];
    request.delegate = self;
    [request startFormRequest];
}
- (void) addObject:(NotificationObj *) obj
{
    [self.arrData addObject:obj];
    for (int i= 0; i< _arrData.count; i++) {
        
                
        
        NotificationObj *notifObj = [_arrData objectAtIndex:i];
        
        if (notifObj.read) {
            [self.arrData insertObject:obj atIndex:i];
            break;
        }
        
        if (notifObj.type>obj.type) {
            [self.arrData insertObject:obj atIndex:i];
            break;
        }
        
    }
    self.total ++;
    self.unread ++;
    
}


- (void) reOrder
{
    int count = 0;
    
    NSMutableArray *arrTmpRead = [[NSMutableArray alloc] init];
    NSMutableArray *arrTmpUnRead = [[NSMutableArray alloc] init];


    for (NotificationObj *obj in self.arrData) {
        if (obj.read) {
            count++;
            int i ;
            
            for (i=0; i< arrTmpRead.count; i++) {
                NotificationObj *aObj =  [arrTmpRead objectAtIndex:i];
                if (aObj.type >= obj.type) {
                    break;
                }
            }
            
            
            [arrTmpRead insertObject:obj atIndex:i];

            
        }
        else{
            [arrTmpUnRead addObject:obj];
        }
    }
    
    
    [arrTmpUnRead addObjectsFromArray:arrTmpRead];
    self.arrData = arrTmpUnRead;
    
    arrTmpRead= nil; arrTmpUnRead = nil;
    
    self.read = count;
    self.unread = self.total - self.read;
    self.index = 0;

}



- (NotificationObj *) gotoNextNotification
{
    self.index ++;
    if (self.index<self.unread) {
        self.isSend = TRUE;
        return [self.arrData objectAtIndex:self.index];
    
    }
    else
    {
        self.index = 0;
        self.isSend = FALSE;
    }
    return nil;
}

-(void)responseData:(NSData *)data WithKey:(int)key UserData:(id)userData
{
    //1: Recorequest Needed; 2: Recommendations for You (Recorequest Answer); 3: Follow-up question for you (Restaurant ASK related questions); 4: Message For You; 5: Someone Liked your Recommendation; 6: Did You Like any of these recommendations; 7: Deal
    if (key == 1) {
        NSString* response = [[NSString alloc]initWithData:data encoding:NSUTF8StringEncoding];
        NSLog(@"%@",response);
        NSArray* array = [response objectFromJSONString];
        self.total = [array count];
        self.unread = [array count];
        int i = 0;
        for (NSDictionary* dic in array) {
            NotificationObj *obj = [[NotificationObj alloc] init];
            obj.type = [[dic objectForKey:@"recoNotificationType"] intValue];
            obj.linkId =  [dic objectForKey:@"idBase"];
            UserObj *user = [[UserObj alloc] init];
            
            if (obj.type == NotificationMessageForYou) {
                obj.description = [dic objectForKey:@"message"];
                NSDictionary* dicObj = [dic objectForKey:@"senderUser"];
                user.name = [dicObj objectForKey:@"name"];
                user.avatarUrl = [dicObj objectForKey:@"photo"];
                user.uid = [dicObj objectForKey:@"userId"];
                
            }
            if (obj.type == NotificationFollowUpQuestion) {
                obj.description = [dic objectForKey:@"questionText"];
                NSDictionary* dicObj = [dic objectForKey:@"questionUser"];
                user.name = [dicObj objectForKey:@"name"];
                user.avatarUrl = [dicObj objectForKey:@"photo"];
                user.uid = [dicObj objectForKey:@"userId"];
            }
            obj.user = user;
            
            indexLoad = i;
            [self.arrData addObject:obj];
            [NSThread detachNewThreadSelector:@selector(loadImage) toTarget:self withObject:nil];
            if (i == 0) {
                self.notifObj = obj;
            }
            i++;
        }
    }
    if (key == 2) {
        [self.arrDataRead removeAllObjects];
        NSString* response = [[NSString alloc]initWithData:data encoding:NSUTF8StringEncoding];
        NSLog(@"%@",response);
        NSArray* array = [response objectFromJSONString];
        
        self.total = [array count];
        self.unread = [array count];
        //self.read = 0;
        int i = 0;
        for (NSDictionary* dic in array) {
            NotificationObj *obj = [[NotificationObj alloc] init];
            obj.type = [[dic objectForKey:@"recoNotificationType"] intValue];
            obj.linkId =  [dic objectForKey:@"idBase"];
            UserObj *user = [[UserObj alloc] init];
            
            if (obj.type == NotificationMessageForYou) {
                obj.description = [dic objectForKey:@"message"];
                NSDictionary* dicObj = [dic objectForKey:@"senderUser"];
                user.name = [dicObj objectForKey:@"name"];
                user.avatarUrl = [dicObj objectForKey:@"photo"];
                user.uid = [dicObj objectForKey:@"userId"];
                
            }
            if (obj.type == NotificationFollowUpQuestion) {
                obj.description = [dic objectForKey:@"questionText"];
                NSDictionary* dicObj = [dic objectForKey:@"questionUser"];
                user.name = [dicObj objectForKey:@"name"];
                user.avatarUrl = [dicObj objectForKey:@"photo"];
                user.uid = [dicObj objectForKey:@"userId"];
            }
            obj.user = user;
            
            indexLoad = i;
            [self.arrDataRead addObject:obj];
            [NSThread detachNewThreadSelector:@selector(loadImageData) toTarget:self withObject:nil];
            i++;
        }
        
        NotificationObj* objData = [self.arrData objectAtIndex:0];
        i = 0;
        for (NotificationObj*obj in self.arrDataRead) {
            if (![obj.linkId isEqualToString:objData.linkId]) {
                [self.arrData insertObject:obj atIndex:i];
                i++;
            }
        }
        
    }
    if (key == 3) {
        NSString* response = [[NSString alloc]initWithData:data encoding:NSUTF8StringEncoding];
        NSLog(@"%@",response);
        NSArray* array = [response objectFromJSONString];
        self.total = [array count];
        self.unread = [array count];
        //self.read = 0;
        int i = 0;
        for (NSDictionary* dic in array) {
            NotificationObj *obj = [[NotificationObj alloc] init];
            obj.type = [[dic objectForKey:@"recoNotificationType"] intValue];
            obj.linkId =  [dic objectForKey:@"idBase"];
            UserObj *user = [[UserObj alloc] init];
            
            if (obj.type == NotificationMessageForYou) {
                obj.description = [dic objectForKey:@"message"];
                NSDictionary* dicObj = [dic objectForKey:@"senderUser"];
                user.name = [dicObj objectForKey:@"name"];
                user.avatarUrl = [dicObj objectForKey:@"photo"];
                user.uid = [dicObj objectForKey:@"userId"];
                
            }
            if (obj.type == NotificationFollowUpQuestion) {
                obj.description = [dic objectForKey:@"questionText"];
                NSDictionary* dicObj = [dic objectForKey:@"questionUser"];
                user.name = [dicObj objectForKey:@"name"];
                user.avatarUrl = [dicObj objectForKey:@"photo"];
                user.uid = [dicObj objectForKey:@"userId"];
            }
            obj.user = user;
            
            indexLoad = i;
            [self.arrData addObject:obj];
            [NSThread detachNewThreadSelector:@selector(loadImage) toTarget:self withObject:nil];
            i++;
        }
        
    }
    
    if (key == 4) {
        [self.arrDataUnread removeAllObjects];
        NSString* response = [[NSString alloc]initWithData:data encoding:NSUTF8StringEncoding];
        NSLog(@"%@",response);
        NSArray* array = [response objectFromJSONString];
        int i = 0;
        for (NSDictionary* dic in array) {
            NotificationObj *obj = [[NotificationObj alloc] init];
            obj.type = [[dic objectForKey:@"recoNotificationType"] intValue];
            obj.linkId =  [dic objectForKey:@"idBase"];
            UserObj *user = [[UserObj alloc] init];
            
            if (obj.type == NotificationMessageForYou) {
                obj.description = [dic objectForKey:@"message"];
                NSDictionary* dicObj = [dic objectForKey:@"senderUser"];
                user.name = [dicObj objectForKey:@"name"];
                user.avatarUrl = [dicObj objectForKey:@"photo"];
                user.uid = [dicObj objectForKey:@"userId"];
                
            }
            if (obj.type == NotificationFollowUpQuestion) {
                obj.description = [dic objectForKey:@"questionText"];
                NSDictionary* dicObj = [dic objectForKey:@"questionUser"];
                user.name = [dicObj objectForKey:@"name"];
                user.avatarUrl = [dicObj objectForKey:@"photo"];
                user.uid = [dicObj objectForKey:@"userId"];
            }
            obj.user = user;
            
            indexLoad = i;
            [self.arrDataUnread addObject:obj];
            [NSThread detachNewThreadSelector:@selector(loadImageUndata) toTarget:self withObject:nil];
            i++;
        }
        if ([self.arrDataUnread count] != 0) {
            self.read = 1;
        }
        else
            self.read = 0;
    }
}

-(void)loadImage
{
    int n = indexLoad;
    NotificationObj* notiObj = [self.arrData objectAtIndex:n];
    UserObj* obj = notiObj.user;
    obj.avatar = [[UIImage alloc] initWithData:[NSData dataWithContentsOfURL:[NSURL URLWithString:obj.avatarUrl]]];
    
}

-(void)loadImageData
{
    int n = indexLoad;
    NotificationObj* notiObj = [self.arrDataRead objectAtIndex:n];
    UserObj* obj = notiObj.user;
    obj.avatar = [[UIImage alloc] initWithData:[NSData dataWithContentsOfURL:[NSURL URLWithString:obj.avatarUrl]]];
    
}
-(void)loadImageUndata
{
    int n = indexLoad;
    NotificationObj* notiObj = [self.arrDataUnread objectAtIndex:n];
    UserObj* obj = notiObj.user;
    obj.avatar = [[UIImage alloc] initWithData:[NSData dataWithContentsOfURL:[NSURL URLWithString:obj.avatarUrl]]];
    
}
@end
