//
//  LoginVC.m
//  TasteSync
//
//  Created by Victor NGO on 12/19/12.
//  Copyright (c) 2012 Mobioneer. All rights reserved.
//

#import "LoginVC.h"
#import "LoginScreenVC.h"
#import "GlobalVariables.h"
#import "CommonHelpers.h"
#import "CFacebook.h"
#import "UserDefault.h"
#import <CoreLocation/CoreLocation.h>
#import "ConfigProfileVC.h"



@interface LoginVC ()<UIAlertViewDelegate,CFacebookDelegate,CLLocationManagerDelegate>
{
    __weak IBOutlet UIView *coverView;
    CLLocationManager *locationManager;
    UserDefault *userDefault;
    CFacebook *facebook;
}


- (IBAction)actionConnectWithFacebook:(id)sender;

- (IBAction)actionCreateProfile:(id)sender;

- (IBAction)actionSkipThis:(id)sender;

@end

@implementation LoginVC

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        // Custom initialization
    }
    return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];
    
    [self.navigationController setNavigationBarHidden:YES];
   
    [CommonHelpers setBackgroudImageForView:self.view];
    [CommonHelpers setBackgroudImageForView:coverView];    
//    [CommonHelpers clearUserDefault];    
    [UserDefault resetValue];
    userDefault = [UserDefault userDefault];
    facebook = [[CFacebook alloc] init];
    // Do any additional setup after loading the view from its nib.
    
}

- (void) viewWillAppear:(BOOL)animated
{
    [super viewWillAppear:animated];
    if (FALSE) {
        coverView.hidden = YES;

    }
    else
    {
        coverView.hidden = NO;
        [self showNotificationAlert];


    }
   

}

- (void)viewDidUnload
{
    [super viewDidUnload];
    
    // Release any retained subviews of the main view.
    // e.g. self.myOutlet = nil;
}



#pragma mark - IBAction define

- (IBAction)actionConnectWithFacebook:(id)sender
{
    
    debug(@"actionConnectWithFacebook");
  
//    [facebook getUserInfo:self tagAction:CFacebookTagActionGetUserInfo];
    
    [facebook getUserFriends:self tagAction:CFacebookTagActionGetFriendsInfo];
    
    
}

- (IBAction)actionCreateProfile:(id)sender
{
    debug(@"actionCreateProfile");
    LoginScreenVC *loginScreenVC = [[LoginScreenVC alloc] initWithNibName:@"LoginScreenVC" bundle:nil];
    [self.navigationController pushViewController:loginScreenVC animated:YES];
    
    debug(@"LoginVC -actionCreateProfile - create test data - remove in UAT ");
    
    NSMutableArray *arr = [[NSMutableArray alloc] init];
    for (int i=0; i<10; i++) {
        UserObj  *obj = [[UserObj alloc] init];
        switch (i) {
            case 0:
            {
                obj.firstname = @"Anna";
                obj.lastname = @"Nguyen";
            }
                break;
            case 1:
            {
                obj.firstname = @"Brea";
                obj.lastname = @"Tran";
            }
                break;
            case 2:
            {
                obj.firstname = @"Chi";
                obj.lastname = @"Le";
            }
                break;
            case 3:
            {
                obj.firstname = @"Duong";
                obj.lastname = @"Thai";
            }
                break;
            case 4:
            {
                obj.firstname = @"Victor";
                obj.lastname = @"Ngo";
            }
                break;
            case 5:
            {
                obj.firstname = @"Flex";
                obj.lastname = @"Alexx";
            }
                break;
                
            default:
            {
                obj.firstname = [NSString stringWithFormat:@"Thuong %d",i];
                obj.lastname = @"Vo";
            }
                break;
                
        }
        obj.avatar = [UIImage imageNamed:@"avatar.png"];
        obj.uid = i+1;

        [arr addObject:obj];
    }
    
    [CommonHelpers appDelegate].arrDataFBFriends = arr;
}

- (IBAction)actionSkipThis:(id)sender
{
    debug(@"actionSkipThis");
    userDefault.loginStatus = NotLogin;
    [UserDefault update];    
    [[CommonHelpers appDelegate] showAskTab];

}

# pragma mark - others

- (void) showNotificationAlert
{
    if (FALSE) {
        [self hideCoverView];
    }
    else
    {
        UIAlertView *alert = [[UIAlertView alloc] initWithTitle:@"TasteSync Would Like to Send You Push Notifications" message:MSG_NOTIFICATION delegate:self cancelButtonTitle:@"Don't Allow" otherButtonTitles:@"OK", nil];
        alert.tag =1;
        [alert show];
    }
  
}

- (void) showLocationAlert
{
    
    if(locationManager==nil){
        locationManager=[[CLLocationManager alloc] init];        
        locationManager.delegate=self;
//        locationManager.purpose = MSG_LOCATION;
        locationManager.desiredAccuracy=kCLLocationAccuracyBest;
        locationManager.distanceFilter=500;
    }
    
    if([CLLocationManager locationServicesEnabled]){
        [locationManager startUpdatingLocation];
    }else
    {
        [CommonHelpers showConfirmAlertWithTitle:APP_NAME message:@"You have to enable Location Service to get your location." delegate:nil tag:100];
    }


}
#pragma mark - UIAlertViewDelegate

- (void)alertView:(UIAlertView *)alertView clickedButtonAtIndex:(NSInteger)buttonIndex
{
    if (alertView.tag ==1) {
        if (buttonIndex==1) {
            userDefault.isNotification = YES;
            [UserDefault update];
            NSLog(@"isNotification = YES");
            
        
        }
        
        [self showLocationAlert];

    }else if(alertView.tag == 100)
    {
        debug(@"Open Settings");
        [[UIApplication sharedApplication] openURL:[NSURL URLWithString:@"prefs:root=TWITTER"]];
    }
    else
    {
        [self hideCoverView];
    }
    
    
}

# pragma mark - Others

- (void) hideCoverView
{
    [UIView animateWithDuration:0.3
                          delay:0
                        options: UIViewAnimationOptionOverrideInheritedCurve
                     animations:^{
                         coverView.frame=CGRectMake(-320, 0, 320, 480);
                     }
                     completion:^(BOOL finished){
                         debug(@"hide done");
                         
                     }];
    
}

#pragma mark - CFacebookDelegate

- (void) cFacebook:(CFacebook *)aCFacebook didFinish:(id)anObj tagAction:(int)aTag
{
    debug(@"LoginVC -> cFacebookDidFinish tag -> %d",aTag);
    switch (aTag) {
        case CFacebookTagActionError:
        {
            debug(@"LoginVC -> CFacebookTagActionError");
            
        }
            break;
            
        case CFacebookTagActionGetUserInfo:
        {
            userDefault.loginStatus = LoginViaFacebook;            
            UserObj *userObj = (UserObj *) anObj;
            userObj.city = userDefault.city;
            userObj.state = userDefault.state;            
            userDefault.user = userObj;
            [UserDefault update];
            
            ConfigProfileVC *vc = [[ConfigProfileVC alloc] initWithNibName:@"ConfigProfileVC" bundle:nil];
            
            [self.navigationController pushViewController:vc animated:YES];
          
            
        }
            break;
            
        case CFacebookTagActionGetFriendsInfo:
        {
            userDefault.loginStatus = LoginViaFacebook;
            
           
            
            ConfigProfileVC *vc = [[ConfigProfileVC alloc] initWithNibName:@"ConfigProfileVC" bundle:nil];
            
            [self.navigationController pushViewController:vc animated:YES];
            
            
        }
            break;
            
            
        default:
            break;
    }

}



#pragma mark - CLLocationManagerDelegate

- (void)locationManager:(CLLocationManager *)manager
	didUpdateToLocation:(CLLocation *)newLocation
           fromLocation:(CLLocation *)oldLocation
{
    

    CLGeocoder *geocoder =[[CLGeocoder alloc] init] ;
    [geocoder reverseGeocodeLocation:locationManager.location completionHandler:^(NSArray *placemarks, NSError *error)
     {
         
         CLPlacemark *placemark = [placemarks objectAtIndex:0];         
         
         NSString *countryISOCode =   placemark.ISOcountryCode;
         debug(@"plark mark - >%@",placemark);
         
         NSString *city = placemark.locality;         
         NSString *state = placemark.administrativeArea;
         
         if (city == nil) {
             city = @"NA";
         }
         
         if (state == nil) {
             state = @"NA";
         }
         
         debug(@"city - >%@, state -> %@",city,state);
         userDefault.city = city;
         userDefault.state = state;
         
         [UserDefault update];
                  
         [locationManager stopUpdatingLocation];

         
         if (countryISOCode!=nil) {
             
             
         }
         else
         {
                      
         }
         
         
     }];
    
}
- (void)locationManager:(CLLocationManager *)manager
       didFailWithError:(NSError *)error
{
    debug(@"locationManager ->didFailWithError");
    userDefault.city = @"NA";
    userDefault.state = @"NA";
    
    [UserDefault update];

}
-(void) locationManager:(CLLocationManager *)manager didChangeAuthorizationStatus:(CLAuthorizationStatus)status
{

    debug(@"locationManager -> didChangeAuthorizationStatus");
    if (status == kCLAuthorizationStatusDenied) {
        
        [CommonHelpers showInfoAlertWithTitle:@"Location Service Disabled" message:@"To re-enable, please go to Settings and turn on Location Service for this app." delegate:self tag:2];
                
    }
    else if (status ==kCLAuthorizationStatusAuthorized)
    {
        [self hideCoverView];
        [manager startUpdatingLocation];

    }
}


@end