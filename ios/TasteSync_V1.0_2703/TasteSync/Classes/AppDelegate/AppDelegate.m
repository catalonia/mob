//
//  AppDelegate.m
//  TasteSync
//
//  Created by Victor on 12/18/12.
//  Copyright (c) 2012 Mobioneer. All rights reserved.
//

#import "AppDelegate.h"
#import "CommonHelpers.h"
#import "LoginVC.h"
#import "TSGlobalObj.h"

NSString *const SessionStateChangedNotification = @"com.facebook.CFacebook:SessionStateChangedNotification";


@implementation AppDelegate

@synthesize tabbarBaseVC,window,delegate,arrDataFBFriends,
globalNotification,
askSubmited=_askSubmited;


#pragma mark - AppDelegate Function

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions
{
    self.window = [[UIWindow alloc] initWithFrame:[[UIScreen mainScreen] bounds]];
    // Override point for customization after application launch.
    if ( [launchOptions objectForKey:UIApplicationLaunchOptionsRemoteNotificationKey] == nil ) {
        
        [[UIApplication sharedApplication] registerForRemoteNotificationTypes: UIRemoteNotificationTypeBadge | UIRemoteNotificationTypeSound | UIRemoteNotificationTypeAlert];
    }
    
    
    
//    [[UIApplication sharedApplication] registerForRemoteNotificationTypes:(UIRemoteNotificationTypeBadge|UIRemoteNotificationTypeSound)];
   
    [self getNotifications];
    [self initData];
    [self showLogin];
//    [self showAskTab];
    self.window.backgroundColor = [UIColor whiteColor];
    [self.window makeKeyAndVisible];
    return YES;
}

- (void)applicationWillResignActive:(UIApplication *)application
{
    
}

- (void)applicationDidEnterBackground:(UIApplication *)application
{
    NSLog(@"12312");
}

- (void)applicationWillEnterForeground:(UIApplication *)application
{
    NSLog(@"abcde");
}

- (void)applicationDidBecomeActive:(UIApplication *)application
{
    

    
    if (FBSession.activeSession.state == FBSessionStateCreatedOpening) {       
//       [FBSession.activeSession close];
    }
}

-(void)initData
{
    self.arrCuisine = [[NSMutableArray alloc] init];
    self.arrOccasion = [[NSMutableArray alloc] init];
    self.arrPrice = [[NSMutableArray alloc] init];
    self.arrTheme = [[NSMutableArray alloc] init];
    self.arrTypeOfRestaurant = [[NSMutableArray alloc] init];
    self.arrWhoAreUWith = [[NSMutableArray alloc] init];
    self.arrDropdown = [[NSMutableArray alloc] init];
}

- (void)applicationWillTerminate:(UIApplication *)application
{
}

-(void)application:(UIApplication *)application didRegisterForRemoteNotificationsWithDeviceToken:(NSData *)deviceToken
{
    //Removing the brackets from the device token
    NSString *tokenString = [[deviceToken description] stringByTrimmingCharactersInSet:[NSCharacterSet characterSetWithCharactersInString:@"<>"]];
    [[NSUserDefaults standardUserDefaults] setObject:tokenString forKey:@"device_token"];
    NSString *tokenStr = [tokenString stringByReplacingOccurrencesOfString:@" " withString:@""];
    NSLog(@"device_token : %@",tokenStr);
    
}

- (BOOL)application:(UIApplication *)application
            openURL:(NSURL *)url
  sourceApplication:(NSString *)sourceApplication
         annotation:(id)annotation {
    
    debug(@"application openURL -> %@ and sourceApplication -> %@ ",url, sourceApplication);
    
    return [FBSession.activeSession handleOpenURL:url];
}


#pragma mark - Init Data

// init static data 


# pragma mark - global's function


- (void) getNotifications
{
    dispatch_async(dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_BACKGROUND, 0), ^{
       
        debug(@"AppDelegate -> getNotifications in background thread");
        self.globalNotification = [[GlobalNotification alloc] initWithALlType];
        
    });
}

- (void) showLogin
{
    LoginVC *loginVC = [[LoginVC alloc] initWithNibName:@"LoginVC" bundle:nil];
    UINavigationController *rootCtr = [[UINavigationController alloc] initWithRootViewController:loginVC];
    
    self.window.rootViewController = rootCtr;
}

- (void) showAskTab
{
    self.tabbarBaseVC = [[TabbarBaseVC alloc] init];
    self.window.rootViewController = self.tabbarBaseVC;
}

- (void) loginFB:(id<CFacebookDelegate>) aDelegate
{

    self.delegate = aDelegate;
    
    if (![self openSessionWithAllowLoginUI:NO]) {
        
        debug(@"begin login with LoginUI");
        [self openSessionWithAllowLoginUI:YES];
    }
}


- (void)sessionStateChanged:(FBSession *)session
                      state:(FBSessionState)state
                      error:(NSError *)error
{
    
    debug(@"sessionStateChanged");
    
    
    switch (state) {
        case FBSessionStateOpen: {
            
            debug(@"FBSessionStateOpen");
            
//            [self.delegate cFacebookDidFinish:nil withTag:CFacebookTagActionLogin];
            [self.delegate cFacebook:nil didFinish:nil tagAction:CFacebookTagActionLogin];
//            [self populateUserDetails];
            FBCacheDescriptor *cacheDescriptor = [FBFriendPickerViewController cacheDescriptor];
            [cacheDescriptor prefetchAndCacheForSession:session];
        }
            break;
        case FBSessionStateClosed:
            debug(@"FBSessionStateClosed");
            
            break;
        case FBSessionStateClosedLoginFailed:
            
            [FBSession.activeSession closeAndClearTokenInformation];
            
            debug(@"FBSessionStateClosedLoginFailed");
            
            [self showLogin];
            
            break;
        default:
            
            debug(@"default");
            
            break;
    }
    
    [[NSNotificationCenter defaultCenter] postNotificationName:SessionStateChangedNotification
                                                        object:session];
    
    if (error) {
        UIAlertView *alertView = [[UIAlertView alloc] initWithTitle:@"Error"
                                                            message:error.localizedDescription
                                                           delegate:nil
                                                  cancelButtonTitle:@"OK"
                                                  otherButtonTitles:nil];
        [alertView show];
    }
}

- (BOOL)openSessionWithAllowLoginUI:(BOOL)allowLoginUI {
    
    
    
    NSArray *permissions = [[NSArray alloc] initWithObjects:
                            @"user_location",
                            @"user_birthday",
                            @"email",
                            @"user_likes",
                            @"user_photos",
                            @"publish_actions",
                            nil];
    
    return [FBSession openActiveSessionWithPermissions:permissions
                                          allowLoginUI:allowLoginUI
                                     completionHandler:^(FBSession *session, FBSessionState state, NSError *error) {
                                         [self sessionStateChanged:session state:state error:error];
                                     }];
}




#pragma mark - CFacebookDelegate

- (void) cFacebook:(CFacebook *)aCFacebook didFinish:(id)anObj tagAction:(int)aTag
{
    switch (aTag) {
        case CFacebookTagActionError:
            debug(@"AppDelegate -> CFacebookTagActionError");
            break;
            
        case CFacebookTagActionLogin:
        {
            debug(@"AppDelegate -> CFacebookTagActionLogin");

            UserDefault *userDefault = [UserDefault userDefault];
            userDefault.loginStatus = LoginViaFacebook;
            [UserDefault update];
           
            
        }
            break;
            
        default:
            break;
    }
}

- (void) showLoginDialog
{
    [CommonHelpers showConfirmAlertWithTitle:APP_NAME message:@"You should login to use this function" delegate:self tag:1];
}

#pragma mark - UIAlertViewDelegate

- (void)alertView:(UIAlertView *)alertView clickedButtonAtIndex:(NSInteger)buttonIndex
{
    switch (buttonIndex) {
        case 0:
        {
            debug(@"AppDelegate ->alertView -> Cancel");
        }
            break;
            
        case 1:
        {
            [self showLogin];
        }
            break;
            
        default:
            break;
    }
}

-(void)responseData:(NSData *)data WithKey:(int)key UserData:(id)userData
{
    
}

@end
