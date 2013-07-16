//
//  CFacebook.m
//  TasteSync
//
//  Created by Victor on 1/18/13.
//  Copyright (c) 2013 Mobioneer. All rights reserved.
//

#import "CFacebook.h"
#import "CommonHelpers.h"

@interface CFacebook()
{
}

@end

@implementation CFacebook
@synthesize delegate=_delegate,
tag=_tag,
loadView=_loadView,
done=_done;

- (void) login:(id<CFacebookDelegate>) aDelegate tagAction:(int) aTag
{
    debug(@"login");
    if (!_done) {
        _done = TRUE;
        debug(@"loging in");

        if (![[FBSession activeSession] isOpen]) {
            [[CommonHelpers appDelegate] loginFB:self];
        }
    }

    
    
}

- (void) getUserInfo:(id<CFacebookDelegate>) aDelegate tagAction:(int) aTag
{
    self.delegate = aDelegate;
    self.tag = aTag;
    if (FBSession.activeSession.state == FBSessionStateOpen) {
        NSString *query = @"SELECT uid, first_name, last_name, email,locale, current_location, affiliations, pic_square,sex FROM user WHERE uid = me() ";        
        [self callFQLQuery:query];
    }
    else
    {
        debug(@"invalided session");
        [self login:self tagAction:CFacebookTagActionLogin];
    }
   
}

- (void) getUserFriends:(id<CFacebookDelegate>) aDelegate tagAction:(int)aTag
{
    debug(@"CFacebook -> getUserFriends ");
    self.delegate = aDelegate;
    self.tag = aTag;
    if (FBSession.activeSession.state == FBSessionStateOpen) {
        NSString *query = @"SELECT uid, first_name, last_name, locale, current_location, affiliations, pic_square,sex FROM user WHERE uid = me() OR uid IN (SELECT uid2 FROM friend WHERE uid1 = me()) ";
        
        debug(@"CFacebook -> prepare callFQLQuery");

        [self callFQLQuery:query];
    }
    else
    {
        debug(@"CFacebook -> invalided session");
        [[CommonHelpers appDelegate] loginFB:self];

    }
}

- (void) callFQLQuery:(NSString *) query
{
        
    //    NSString *query = @"SELECT uid, name,username, pic_square, email FROM user WHERE uid = me() OR uid IN (SELECT uid2 FROM friend WHERE uid1 = me()) ";
    
    //    NSString *query = @"SELECT aid, owner, name, object_id FROM album WHERE owner = me()";

    if (_loadView) {
        _loadView.hidden = NO;
    }
    else
    {
        self.loadView = [[LoadView alloc] initWithFrame:CGRectZero];

    }

    [[UIApplication sharedApplication] setNetworkActivityIndicatorVisible:YES];

    if (!_done) {
        
        debug(@"CFacebook -> callFQLQuery");
        
        _done = TRUE;
        NSDictionary *queryParam = [NSDictionary dictionaryWithObjectsAndKeys:
                                    query, @"q", nil];
        [FBRequestConnection startWithGraphPath:@"/fql"
                                     parameters:queryParam
                                     HTTPMethod:@"GET"
                              completionHandler:^(FBRequestConnection *connection,
                                                  id result,
                                                  NSError *error) {
                                  if (error) {
                                      _done = FALSE;
                                      debug(@"callFQLQuery->Error: %@", [error localizedDescription]);
                                      
                                      [[UIApplication sharedApplication] setNetworkActivityIndicatorVisible:NO];
                                      _loadView.hidden = YES;
                                      
                                      [self.delegate cFacebook:self didFinish:nil tagAction:CFacebookTagActionError];
                                      
                                  } else {
                                      debug(@"callFQLQuery->Result: %@", result);
                                      
                                      if ([result isKindOfClass:[NSDictionary class]]) {
                                          
                                          [self parserData:result];
                                      }
                                      
                                  }
                              }];
        
        debug(@"return main thread");

    }
    
       
}

- (void) parserData :(NSDictionary *) dataDict
{
    NSArray *dataArray = [dataDict objectForKey:@"data"];
    switch (_tag) {
        case CFacebookTagActionGetUserInfo:
        {
            debug(@"parser case CFacebookTagActionGetUserInfo");

            UserObj *user = [[UserObj alloc] init];
            
            
            
            for (NSDictionary *objDict in dataArray) {
                user.uid = [[objDict objectForKey:@"uid"] longValue];
                user.firstname = [objDict objectForKey:@"first_name"];
                user.lastname = [objDict objectForKey:@"last_name"];
                user.email = [objDict objectForKey:@"email"];
                user.avatarUrl = [objDict objectForKey:@"pic_square"];
               
                /*
                user.gender = [[objDict objectForKey:@"sex"] isEqualToString:@"male"];
                id locationDict = [objDict objectForKey:@"current_location"];
                debug(@"location class -> %@",[locationDict class]);
                if (![locationDict isKindOfClass:([NSNull class])]) {
                    user.city = [locationDict objectForKey:@"city"];
                    user.state = [locationDict objectForKey:@"state"];
                    debug(@"User Location -> %@",locationDict);
                }
                 
                 
                 */

            }
            
            [self debugUser:user];
            
            user.avatar = [UIImage imageWithData:[NSData dataWithContentsOfURL:[NSURL URLWithString:user.avatarUrl]]];
             
             
            [self.delegate cFacebook:self didFinish:user tagAction:_tag];
            
        }
            break;
            
        case CFacebookTagActionGetFriendsInfo:
        {
            NSMutableArray *arrFriends = [[NSMutableArray alloc] init];
            
            debug(@"parser case CFacebookTagActionGetFriendsInfo");
            int i = 0;
            for (NSDictionary *objDict in dataArray) {
                UserObj *user = [[UserObj alloc] init];
                
                user.uid = [[objDict objectForKey:@"uid"] longValue];
                user.firstname = [objDict objectForKey:@"first_name"];
                user.lastname = [objDict objectForKey:@"last_name"];
                user.avatarUrl = [objDict objectForKey:@"pic_square"];
                if (i== 0) {
                    debug(@"Save user's info to UserDefault");
                    
                    user.email = [objDict objectForKey:@"email"];
                    user.avatar = [UIImage imageWithData:[NSData dataWithContentsOfURL:[NSURL URLWithString:user.avatarUrl]]];

                    [UserDefault userDefault].user = user;
                    [UserDefault update];

                }
                else
                {
//                    random tasteSync User remove in UAT
                    
                    user.isTasteSyncUser = user.uid%2;
//                    end random
                    
                    [arrFriends addObject:user];

                }
                
                i++;

/*
                user.gender = [[objDict objectForKey:@"sex"] isEqualToString:@"male"];
                id locationDict = [objDict objectForKey:@"current_location"];

                if (![locationDict isKindOfClass:([NSNull class])]) {
                    user.city = [locationDict objectForKey:@"city"];
                    user.state = [locationDict objectForKey:@"state"];
                }
 
 */
                
               
            }
           
            debug(@"numberOfFriend -> %d",arrFriends.count);
           
            [CommonHelpers appDelegate].arrDataFBFriends = arrFriends;
            
            [self.delegate cFacebook:self didFinish:arrFriends tagAction:_tag];
        }
            
            break;
            
        default:
            break;
    }
    
    _done = FALSE;

    [[UIApplication sharedApplication] setNetworkActivityIndicatorVisible:NO];
    _loadView.hidden = YES;


}

- (void) debugUser:(UserObj *) user
{
#ifdef DEBUG
    NSLog(@"USER - INFO");
    NSLog(@"uid -> %ld, firstname - > %@ , lastname -> %@",user.uid,user.firstname,user.lastname);
    NSLog(@"email -> %@, city - > %@ , state -> %@ ",user.email,user.city,user.state);


#endif
}

#pragma mark - CFacebookDelegate


- (void) cFacebook:(CFacebook *)aCFacebook didFinish:(id)anObj tagAction:(int)aTag
{
    debug(@"CFacebook -> cFacebookDidFinish");
    _done = FALSE;
    [[UIApplication sharedApplication] setNetworkActivityIndicatorVisible:NO];
    _loadView.hidden = YES;
    
    switch (aTag) {
        case CFacebookTagActionError:
        {

            debug(@"CFacebookTagActionError");
        }
            break;
        case CFacebookTagActionLogin:
        {
//            [self getUserInfo:_delegate tagAction:CFacebookTagActionGetUserInfo];
            [self getUserFriends:_delegate tagAction:_tag];
            
        }
            break;
            
        default:
            break;
    }

}



@end
