//
//  CommonHelpers.m
//  Pizza
//
//  Created by Victor on 12/14/12.
//  Copyright (c) 2012 Mobioneer. All rights reserved.
//

#import "CommonHelpers.h"

@implementation CommonHelpers



void debug(NSString *format, ...)
{
#ifdef DEBUG
    va_list args;
    va_start(args, format);
    NSString *msg = [[NSString alloc] initWithFormat:format arguments:args];
    NSLog(@"%@", msg);
    va_end(args);
#endif
    
}

+(BOOL) isPhone5{
    
    if([[UIDevice currentDevice] userInterfaceIdiom] == UIUserInterfaceIdiomPhone && [[UIScreen mainScreen] bounds].size.height > 500){
#ifdef DEBUG
        NSLog(@"Height of s : %f",[[UIScreen mainScreen] bounds].size.height);
#endif
        return YES;
    }
    return NO;
}

+(BOOL) isiOS6{
    float currentVersion = 6.0;
    if ([[[UIDevice currentDevice] systemVersion] floatValue] >= currentVersion)
    {
        return TRUE;
    }
    return  FALSE;
    
}

+(NSString *) trim:(NSString *)stringInput{
    NSString *stringOutput = [stringInput stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceCharacterSet]];
    return stringOutput;
}

+(void) setBackgroudImageForView:(UIView *)view
{
    
    CGRect frame ;
    if (IS_IPHONE_5) {
        frame = CGRectMake(0, 0, 320, 568);
    }else
    {
        frame = CGRectMake(0, 0, 320, 480);
    }
    UIImageView *imgview=[[UIImageView alloc]initWithFrame:frame] ;
    imgview.image=(![ CommonHelpers isPhone5]) ? [UIImage imageNamed: BG_IMAGE_5] : [UIImage imageNamed: BG_IMAGE] ;
    [view addSubview:imgview];
    [view sendSubviewToBack: imgview];
    view.backgroundColor = [UIColor clearColor];
}

+ (void) setBackgroudImageForViewRestaurant:(UIView *)view
{
    CGRect frame ;
    if (IS_IPHONE_5) {
        frame = CGRectMake(0, 0, 320, 568);
    }else
    {
        frame = CGRectMake(0, 0, 320, 480);
    }
    UIImageView *imgview=[[UIImageView alloc]initWithFrame:frame] ;
    imgview.image=(![ CommonHelpers isPhone5]) ? [UIImage imageNamed: BG_RESTAURANT_IMAGE_5] : [UIImage imageNamed: BG_RESTAURANT_IMAGE] ;
    [view addSubview:imgview];
    [view sendSubviewToBack: imgview];
    view.backgroundColor = [UIColor clearColor];
}

+ (void) showConfirmAlertWithTitle:(NSString *)title message:(NSString *)message delegate:(id)delegate tag:(NSInteger)tag
{
    UIAlertView *alert = [[UIAlertView alloc] initWithTitle:title message:message delegate:delegate cancelButtonTitle:@"Cancel" otherButtonTitles:@"OK", nil];
    alert.tag = tag;
    [alert show];
    alert =nil;
}

+ (void) showInfoAlertWithTitle:(NSString *)title message:(NSString *)message delegate:(id<UIAlertViewDelegate>)delegate tag:(NSInteger)tag
{
    UIAlertView *alrt = [[UIAlertView alloc] initWithTitle:title message:message delegate:delegate cancelButtonTitle:@"OK" otherButtonTitles: nil];
    alrt.tag = tag;
    [alrt show];
    alrt = nil;
}

+ (void) setBackgroundImage:(UIImage *)image forButton:(UIButton *)button
{
    [button setBackgroundImage:image forState:UIControlStateNormal];
    [button setBackgroundImage:image forState:UIControlStateHighlighted];
}

+ (AppDelegate*) appDelegate
{
    AppDelegate *appDelegate =(AppDelegate *) [[UIApplication sharedApplication] delegate];
    return appDelegate;
}

+ (BOOL) validateEmail: (NSString *) email
{
    NSString *emailRegex = @"[A-Z0-9a-z._%+-]+@[A-Za-z0-9.-]+\\.[A-Za-z]{2,4}";
    NSPredicate *emailTest = [NSPredicate predicateWithFormat:@"SELF MATCHES %@", emailRegex];
    BOOL isValid = [emailTest evaluateWithObject:email];
    return isValid;
}

+ (void)clearUserDefault
{
    [[NSUserDefaults standardUserDefaults] setBool:FALSE forKey:kUserDefault];
    //    [[NSUserDefaults standardUserDefaults] setBool:FALSE forKey:UPDATED_USER];
    
    [[NSUserDefaults standardUserDefaults] synchronize];
    UserDefault *user = [UserDefault userDefault];
    user.user = nil;
    user.loginStatus = 0;
    [UserDefault update];
}



+ (void) showShareView:(id<ResShareViewDelegate>) delegate andObj:(id) obj;
{
    ResShareView *shareView = [[ResShareView alloc] initWithFrame:CGRectZero];
    [shareView shareRestaurant:obj andDelegate:delegate];
}

+ (NSDictionary*)getJSONUserObj:(UserObj*)user
{
    NSMutableDictionary* dic = [NSMutableDictionary dictionary];
    [dic setValue:[NSString stringWithFormat:@"%lu", user.uid]  forKey:@"id"];
    [dic setValue:[CommonHelpers commonUntilNull:user.firstname]            forKey:@"firstName"];
    [dic setValue:[CommonHelpers commonUntilNull:user.lastname]             forKey:@"lastName"];
    [dic setValue:[CommonHelpers commonUntilNull:user.email]                forKey:@"email"];
    [dic setValue:[CommonHelpers commonUntilNull:user.avatarUrl]            forKey:@"picture"];
    [dic setValue:[CommonHelpers commonUntilNull:[NSString stringWithFormat:@"%d", user.friend_count]]         forKey:@"gender"];
    
    [dic setValue:[CommonHelpers commonUntilNull:user.name]                 forKey:@"name"];
    [dic setValue:[CommonHelpers commonUntilNull:user.middle_name]          forKey:@"middleName"];
    [dic setValue:[CommonHelpers commonUntilNull:user.username]             forKey:@"userName"];
    [dic setValue:[CommonHelpers commonUntilNull:user.birthday_date]        forKey:@"birthday"];
    [dic setValue:[CommonHelpers commonUntilNull:user.third_party_id]       forKey:@"thirdPartyId"];
    [dic setValue:[CommonHelpers commonUntilNull:user.install_type]         forKey:@"installed"];
    [dic setValue:[CommonHelpers commonUntilNull:user.relationship_status]  forKey:@"relationshipStatus"];
    [dic setValue:[CommonHelpers commonUntilNull:user.locate]               forKey:@"locale"];
    [dic setValue:[CommonHelpers commonUntilNull:user.link]                 forKey:@"link"];
    [dic setValue:[CommonHelpers commonUntilNull:user.age_range]            forKey:@"ageRange"];
    [dic setValue:[CommonHelpers commonUntilNull:user.device]               forKey:@"devices"];
    [dic setValue:[CommonHelpers commonUntilNull:user.hometown_location]    forKey:@"hometown"];
    [dic setValue:[CommonHelpers commonUntilNull:user.location]             forKey:@"location"];
    [dic setValue:[CommonHelpers commonUntilNull:user.checkIn]              forKey:@"checkins"];
    [dic setValue:[CommonHelpers commonUntilNull:user.friends]              forKey:@"friends"];
    [dic setValue:[CommonHelpers commonUntilNull:user.permission]           forKey:@"permissions"];
//    [dic setValue:[CommonHelpers commonUntilNull:user.city]                 forKey:@"city"];
    
    [dic setValue:[NSString stringWithFormat:@"%d", user.friend_count]         forKey:@"friendlists"];
    [dic setValue:[NSString stringWithFormat:@"%d", user.timezone]             forKey:@"timezone"];
    [dic setValue:[NSString stringWithFormat:@"%d",user.likes_count]           forKey:@"likes"];
    [dic setValue:[NSString stringWithFormat:@"%hhu",user.verified]            forKey:@"verified"];
    return dic;
}

+ (NSString*)commonUntilNull:(NSString*)data
{
    if (data == NULL)
        return @"";
    else
        return data;
}

+ (NSNumber*)getBoolValue:(NSString*)value
{
    if ([value isEqualToString:@"1"]) {
        return [NSNumber numberWithBool:YES];
    }
    else
        return [NSNumber numberWithBool:NO];
}

+ (NSString*)getStringValue:(NSNumber*)value
{
    if ([value boolValue] == YES) {
        return @"1";
    }
    else
        return @"0";
}
@end
