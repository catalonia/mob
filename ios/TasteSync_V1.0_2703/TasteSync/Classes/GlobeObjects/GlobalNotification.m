//
//  GlobalNotification.m
//  TasteSync
//
//  Created by Victor on 1/29/13.
//  Copyright (c) 2013 Mobioneer. All rights reserved.
//

#import "GlobalNotification.h"

@implementation GlobalNotification


- (id)initWithALlType
{
    self = [super init];
    if (self) {
               
        self.arrData = [[NSMutableArray alloc] init];
        self.arrDataRead = [[NSMutableArray alloc] init ];
        
        for (int i = 1; i<8; i++) {
            NotificationObj *obj = [[NotificationObj alloc] init];
            obj.type = i;
            UserObj *user = [[UserObj alloc] init];
            //user.uid = i;
            user.firstname = @"Person";
            user.lastname = [NSString stringWithFormat:@"%d",i];
            user.avatar = [UIImage imageNamed:@"avatar.png"];
            obj.user = user;
            obj.restaurantId = i;
            obj.description = @"Person wrote: this message is test for prototype.";
            [self.arrData addObject:obj];
            if (i==1) {
                self.notifObj = obj;
            }
            self.total = 7;
            self.unread = 7;
            self.read = 0;
        }
        
        self.arrDataUnread = self.arrData;
    }
    return self;
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



@end
