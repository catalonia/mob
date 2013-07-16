//
//  UserDefault.m
//  TasteSync
//
//  Created by Victor on 12/21/12.
//  Copyright (c) 2012 Mobioneer. All rights reserved.
//

#import "UserDefault.h"
#import "GlobalVariables.h"


@interface UserDefault ()

@end


static UserDefault *globalObject;

@implementation UserDefault


@synthesize isLocation,isNotification,
user,emailID,password,
loginStatus;

- (id) initWithId:(NSInteger)userID
{
    return self;
}


- (id) initWithCoder:(NSCoder *)aDecoder
{
    self = [super init];
    if (self) {
        
        self.isNotification = [aDecoder decodeBoolForKey:IS_NOTIFICATION];
        self.isLocation = [aDecoder decodeBoolForKey:IS_LOCATION];
        self.emailID = [aDecoder decodeObjectForKey:EMAIL_ID];
        self.password = [aDecoder decodeObjectForKey:PASSWORD];
        self.city = [aDecoder decodeObjectForKey:CITY];
        self.state = [aDecoder decodeObjectForKey:STATE];

        self.loginStatus = [aDecoder decodeIntForKey:LOGIN_STATUS];
        
        self.user = [[UserObj alloc] init];
        
        self.user.email = [aDecoder decodeObjectForKey:User_EMAIL];
        self.user.password = [aDecoder decodeObjectForKey:User_PASSWORD];
        self.user.firstname = [aDecoder decodeObjectForKey:User_FIRST_NAME];
        self.user.lastname = [aDecoder decodeObjectForKey:User_LAST_NAME];
        self.user.city = [aDecoder decodeObjectForKey:User_CITY];
        self.user.state = [aDecoder decodeObjectForKey:User_STATE];
        self.user.gender = [aDecoder decodeIntegerForKey:User_GENDER];
        self.user.avatar = [aDecoder decodeObjectForKey:User_AVATAR];

//        self.zapiUserId = [aDecoder decodeIntegerForKey:@"zapiUserId"];
//        self.dictCart = [aDecoder decodeObjectForKey:@"dictCart"];
    }
    return self;
    
}

- (void) encodeWithCoder:(NSCoder *)aCoder
{
    [aCoder encodeBool:self.isLocation forKey:IS_LOCATION];
    [aCoder encodeBool:self.isNotification forKey:IS_NOTIFICATION];
    [aCoder encodeObject:self.password forKey:PASSWORD];
    [aCoder encodeObject:self.emailID forKey:EMAIL_ID];
    [aCoder encodeObject:self.city forKey:CITY];
    [aCoder encodeObject:self.state forKey:STATE];

    [aCoder encodeInt:self.loginStatus forKey:LOGIN_STATUS];
    [aCoder encodeObject:self.user.email forKey:User_EMAIL];
    [aCoder encodeObject:self.user.password forKey:User_PASSWORD];
    [aCoder encodeObject:self.user.firstname forKey:User_FIRST_NAME];
    [aCoder encodeObject:self.user.lastname forKey:User_LAST_NAME];
    [aCoder encodeObject:self.user.city forKey:User_CITY];
    [aCoder encodeObject:self.user.state forKey:User_STATE];
    [aCoder encodeInteger:self.user.gender forKey:User_GENDER];
    [aCoder encodeObject:self.user.avatar forKey:User_AVATAR];


//    [aCoder encodeInteger:self.zapiAccountId forKey:@"zapiAccountId"];
//    [aCoder encodeObject:self.dictCart forKey:@"dictCart"];
}

- (void) updateUserDefault
{
    NSUserDefaults *userDefault = [NSUserDefaults standardUserDefaults];
    [userDefault setObject:[NSKeyedArchiver archivedDataWithRootObject:self] forKey:kUserDefault];
    [userDefault synchronize];
}

+ (UserDefault *) userDefault
{
    if (!globalObject) {
        NSUserDefaults *userDefault = [NSUserDefaults standardUserDefaults];
        globalObject = [NSKeyedUnarchiver unarchiveObjectWithData:[userDefault dataForKey:kUserDefault]] ;
        if (!globalObject) {
            globalObject = [[UserDefault alloc] init] ;
            [globalObject update];
        }
    }
    
    return globalObject;
}
- (void) update
{
    NSUserDefaults *userDefault = [NSUserDefaults standardUserDefaults];
    [userDefault setObject:[NSKeyedArchiver archivedDataWithRootObject:self]
                    forKey:kUserDefault];
    [userDefault synchronize];
}

+ (void) update
{
    NSUserDefaults *userDefault = [NSUserDefaults standardUserDefaults];
    [userDefault setObject:[NSKeyedArchiver archivedDataWithRootObject:globalObject]
                    forKey:kUserDefault];
    [userDefault synchronize];
}

+ (void) resetValue
{
    UserDefault *userDefault = [UserDefault userDefault];
    userDefault.loginStatus = NotLogin;
    userDefault.user = nil ;
//    userDefault.isNotification = FALSE;    
    [UserDefault update];
    
    }

@end