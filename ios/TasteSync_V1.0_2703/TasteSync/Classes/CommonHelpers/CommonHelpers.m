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

/*
+ (void) showShareFB:(id) obj
{
    ResShareFB *shareFB = [[ResShareFB alloc] initWithFrame:CGRectZero];
    shareFB.restaurantObj = obj;
}

+ (void) saveRestaurantAlert:(UITextView *)tvNote andDelegate:(id<UIAlertViewDelegate>)delegate
{
    UIAlertView *myAlertView = [[UIAlertView alloc] initWithTitle:@"Add Notes" message:@"\n\n\n\n" delegate:delegate cancelButtonTitle:@"Cancel" otherButtonTitles:@"Save",nil];
    myAlertView.delegate = delegate;
    
    if(tvNote == nil)
        tvNote = [[UITextView alloc] initWithFrame:CGRectMake(30, 60, 220, 60)];
    
    tvNote.textColor = [UIColor darkTextColor];
    tvNote.font = [UIFont systemFontOfSize:14.0];
    tvNote.textAlignment = UITextAlignmentLeft;
    tvNote.backgroundColor = [UIColor clearColor];    
    UIImageView *iv= [[UIImageView alloc] initWithFrame:CGRectMake(30,60,220,60)];
    iv.image = [UIImage imageNamed:@"text_bg.png"];
    [myAlertView addSubview:iv];    
    [myAlertView addSubview:tvNote];
    [tvNote becomeFirstResponder];
    //Transform to move AlertView up to show keyboard
    //    CGAffineTransform myTransform = CGAffineTransformMakeTranslation(0.0, 130.0);
    //    [myAlertView setTransform:myTransform];
    
    [myAlertView show];
}


 
+ (NSString *) GDataXMLElementFromElementname:(NSString *)elementName WithInputArray:(NSArray *)arrayInput{
    if (arrayInput.count>0) {
        GDataXMLElement *userElement =  (GDataXMLElement*)[arrayInput objectAtIndex:0];
        NSArray *array =[userElement elementsForName:elementName] ;
        if(array.count == 0){
            return @"";
        }
        return [(GDataXMLElement *) [ array objectAtIndex:0] stringValue];
    }
    return @"";
}

+ (NSString *) GDataXMLElementFromElementname:(NSString *)elementName WithInputGDataXMLElement:(GDataXMLElement *)gDataXMLElementInput{
    NSArray *arrays = [gDataXMLElementInput elementsForName:elementName];
    if (arrays.count > 0) {
        return [(GDataXMLElement *) [arrays objectAtIndex:0]stringValue];
    }
    return @"";
}
 
 */

// add by Quang Tien

/*
+ (NSArray *)arrayItemsUserSetting
{
    return [[NSArray alloc]initWithObjects:@"Search Location", @"Social Networks", @"Notification Settings", @"Privacy Settings", @"About TasteSync", @"Contact TasteSync", @"Rate this App", @"Log Out", nil];
}
+ (NSArray *)arrayItemsAboutTasteSync
{
    return [[NSArray alloc]initWithObjects:@"Frequently Asked", @"Terms of Service", @"Privacy Policy", @"Attribution", nil];
}


*/

@end
