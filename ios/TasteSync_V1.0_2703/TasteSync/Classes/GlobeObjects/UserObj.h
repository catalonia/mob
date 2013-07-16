//
//  UserObj.h
//  TasteSync
//
//  Created by Victor on 2/19/13.
//  Copyright (c) 2013 Mobioneer. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface UserObj : NSObject

typedef enum _UserStatus {
    UserStatusFollower = 1,
    UserStatusFollow  =   2,
    UserStatusFriend  =   3
    
} UserStatus;

typedef enum _UserStatusAvatar {
    UserAvatarStatusNotLoad = 0,
    UserAvatarStatusLoading  =   1,
    UserAvatarStatusLoaded  =   2
    
} UserStatusAvatar;

@property (nonatomic, assign) long uid;
@property (nonatomic, strong) NSString *firstname, *lastname,*email,*city,*state;
@property (nonatomic, strong) NSString *password;
@property (nonatomic, strong) NSString *avatarUrl;
@property (nonatomic, assign) int gender;
@property (nonatomic, strong) UIImage *avatar;
@property (nonatomic, assign) int status_avatar; // 0 not load, 1 loading , 2 loaded
@property (nonatomic, assign) BOOL isTasteSyncUser;
@property (nonatomic, assign) int status;
@property (nonatomic, assign) BOOL isSelected;
@property (nonatomic, assign) BOOL flag;

@end
