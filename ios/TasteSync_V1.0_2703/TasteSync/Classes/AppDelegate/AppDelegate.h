//
//  AppDelegate.h
//  TasteSync
//
//  Created by Victor on 12/18/12.
//  Copyright (c) 2012 Mobioneer. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <FacebookSDK/FacebookSDK.h>
#import <AddressBook/AddressBook.h>
#import "TabbarBaseVC.h"
#import "GlobalNotification.h"
#import "CFacebook.h"

@interface AppDelegate : UIResponder <UIApplicationDelegate,CFacebookDelegate,UIAlertViewDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) TabbarBaseVC *tabbarBaseVC;

@property (nonatomic, strong) id<CFacebookDelegate> delegate;

@property (nonatomic, strong) NSMutableArray *arrDataFBFriends;

@property (nonatomic, strong) NSMutableArray *arrWhoAreUWith, *arrOccasion, *arrTypeOfRestaurant, *arrCuisine, *arrPrice, *arrTheme;

@property (nonatomic, strong) NSMutableArray *arrDropdown;


@property (nonatomic, strong) GlobalNotification *globalNotification;

@property (nonatomic, assign) BOOL askSubmited;

- (void) showLogin;

- (void) showAskTab;

- (void) loginFB:(id<CFacebookDelegate>) aDelegate;

- (void) showLoginDialog;

@end
