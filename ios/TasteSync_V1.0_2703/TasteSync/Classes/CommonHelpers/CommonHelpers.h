//
//  CommonHelpers.h
//  Pizza
//
//  Created by Victor on 12/14/12.
//  Copyright (c) 2012 Mobioneer. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Messages.h"
//#import "GDataXMLNode.h"
#import "AppDelegate.h"
#import "GlobalVariables.h"
#import "UserDefault.h"
#import "ResShareView.h"
//#import "ResShareFB.h"


@interface CommonHelpers : NSObject


void debug(NSString *format, ...);

+(NSString*) trim:(NSString *)stringInput;

+(BOOL) isPhone5;

+(BOOL) isiOS6;


+ (void) setBackgroudImageForView:(UIView *)view;

+ (void) setBackgroudImageForViewRestaurant:(UIView *)view;

+ (void) showConfirmAlertWithTitle:(NSString *)title message:(NSString *)message delegate:(id)delegate tag:(NSInteger) tag;

+ (void) showInfoAlertWithTitle:(NSString *)title message:(NSString *)message delegate:(id<UIAlertViewDelegate>)delegate tag:(NSInteger)tag;

+ (void) setBackgroundImage:(UIImage *)image forButton:(UIButton *)button;

+ (AppDelegate*) appDelegate;

+ (BOOL) validateEmail: (NSString *) email;

+ (void) clearUserDefault;

+ (void) showShareView:(id<ResShareViewDelegate>) delegate andObj:(id) obj;

+ (NSDictionary*)getJSONUserObj:(UserObj*)user;

+ (NSString*)commonUntilNull:(NSString*)data;

+ (NSNumber*)getBoolValue:(NSString*)value;

+ (NSString*)getStringValue:(NSNumber*)value;
@end
