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

- (void) initData
{
    self.arrCuisine = [[NSMutableArray alloc] initWithObjects:@"Chinese",@"Italian",@"Mexican",@"Mediterranean",@"Thai",@"Asian",@"American",@"Latin American",@"Regional American",@"Indian",@"Vegetarian",@"Organic",@"French",@"Spanish",@"Japanese",@"Middle Eastern",@"European",@"Dessert",@"Seafood",@"Kosher",@"Halal", nil];
    self.arrOccasion = [[NSMutableArray alloc] initWithObjects:@"Anniversary",@"Birthday",@"Date",@"Drinks",@"Dinner",@"Lunch",@"Coffee",@"Quick Bite",@"Brunch",@"Breakfast",@"Liquid Lunch", nil];
    self.arrPrice = [[NSMutableArray alloc] initWithObjects:@"$",@"$$",@"$$$",@"$$$$",@"$$$$$", nil];
    self.arrTheme = [[NSMutableArray alloc] initWithObjects:@"Romantic",@"Fine Dinning",@"Modern",@"Busness Friendly",@"Live Music",@"Bar Scene",@"Casual",@"Outdoor Seating",@"Rooftop",@"Kid Friendly",@"Formal",@"Pet Friendly",@"Group Friendly",@"Family Friendly",@"Traditional", nil];
    self.arrTypeOfRestaurant = [[NSMutableArray alloc] initWithObjects:@"BBQ joint",@"Steakhouse",@"Gourmet restaurant",@"Cafe",@"Bakery",@"Bistro",@"Diner",@"Grill",@"BYOB restaurant",@"Restaurant with Extensive Wine List",@"Teahouse",@"Restaurant with Live kitchen", nil];
    self.arrWhoAreUWith = [[NSMutableArray alloc] initWithObjects:@"My phone",@"A Data",@"Friends",@"Family",@"Kids",@"Teens",@"Pets",@"Colleagues", nil];
   
    
    self.arrDropdown = [[NSMutableArray alloc] initWithObjects:@"Dessert",@"Seafood",@"Arabic",@"Regional American",@"Cajun",@"Barbecue",@"Soul Food",@"Southern",@"Californian",@"Hawaiian",@"Southwestern",@"Tex Mex",@"Creole",@"Italian",@"French",@"Asian",@"Chinese",@"Indian",@"Afghan",@"Bangladeshi",@"Pakistani",@"Japanese",@"Austrailian",@"Korean",@"Pacific Rim",@"Spanish",@"Portuguese",@"Mediterranean",@"Greek",@"Lebanese",@"Turkish",@"Moroccan",@"Asian",@"Cantonese",@"Latin American",@"Caribbean",@"Cuban",@"Brazillian",@"Argentine",@"Latin",@"Colombian",@"Jamaican",@"Peruvian",@"Dominican",@"South American",@"Chilean",@"Puerto Rican",@"Haitian",@"Ecuadorean",@"Savadoran",@"Venezuelan",@"Café",@"Coffee",@"Bakery",@"Grill",@"Bistro",@"Diner",@"Thai",@"Mexican",@"Gluten free",@"Kids Menu",@"Vegan",@"Vegeterian",@"Organic",@"Kosher",@"Halal",@"Continental",@"Egyptian",@"European",@"Fusion",@"Game",@"Indonesian",@"Irish",@"Malaysian",@"Middle Eastern",@"Mongolian",@"Morrocan",@"Nepalese",@"Indian Fusian",@"Oriental",@"Persian",@"Polish",@"Healthy",@"Low Fat",@"Steakhouse",@"Upscale",@"Affordable",@"Hole in the wall",@"Pricey",@"Expensive",@"Budget",@"Medium Priced",@"Traditional",@"stylish",@"Upscale",@"finr dining",@"modern",@"contemporary",@"Romantic",@"Old World",@"Live Music",@"intimate",@"formal",@"informal",@"Homely",@"Friendly",@"Cosy",@"Family Friendly",@"Cool",@"Kid Friendly",@"Group Friendly",@"Takeout",@"outdoor seating",@"Scenic View",@"Roof top",@"Artsy",@"Bar Scene",@"Business friendly",@"Cool",@"Casual",@"Casual fine dining",@"casual Dining",@"Swanky", nil];

}

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


@end
