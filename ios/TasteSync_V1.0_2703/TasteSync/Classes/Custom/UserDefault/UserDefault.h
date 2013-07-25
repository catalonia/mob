//
//  UserDefault.h
//  TasteSync
//
//  Created by Victor on 12/21/12.
//  Copyright (c) 2012 Mobioneer. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "UserObj.h"

#define IS_LOGIN    @"defaultIsLogin"
#define IS_NOTIFICATION    @"defaultIsNotification"
#define IS_LOCATION    @"defaultIsLogin"
#define CITY            @"city"
#define STATE           @"state"
#define EMAIL_ID    @"emailID"
#define PASSWORD    @"password"
#define User_EMAIL  @"User_EMAIL"
#define User_PASSWORD   @"User_PASSWORD"
#define User_FIRST_NAME @"User_FIRST_NAME"
#define User_LAST_NAME  @"User_LAST_NAME"
#define User_CITY   @"User_CITY"
#define User_STATE  @"User_STATE"
#define User_GENDER @"User_GENDER"
#define User_AVATAR @"User_AVATAR"
#define LOGIN_STATUS    @"LOGIN_STATUS"
#define UserLogID @"User_LOG_ID"
#define UserID @"User_ID"


@interface UserDefault : NSObject<NSCoding>
{
 
}

typedef enum _LoginStatus
{
    NotLogin            =   0,
    LoginViaFacebook    =   1,
    LoginViaEmailId     =   2
    
} LoginStatus;

@property (nonatomic, assign) int loginStatus;
@property (nonatomic, assign) BOOL isNotification;
@property (nonatomic, assign) BOOL isLocation;
@property (nonatomic, strong) NSString *emailID;
@property (nonatomic, strong) NSString *password;
@property (nonatomic, strong) NSString *city,*state;
@property (nonatomic, strong) UserObj *user;
@property (nonatomic, strong) NSString *userLogID, *userID;



+ (UserDefault *) userDefault;
- (void) update;
+ (void) update;
+ (void) resetValue;

@end
