//
//  NSObject_GlobalVariables.h
//  TasteSync
//
//  Created by Victor on 12/18/12.
//  Copyright (c) 2012 Mobioneer. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "UserDefault.h"

@interface NSObject ()

#define IS_IPHONE_5     ( fabs( ( double )[ [ UIScreen mainScreen ] bounds ].size.height - ( double )568 ) < DBL_EPSILON )

#define APP_NAME    @"TasteSync"

#define BG_IMAGE    @"background.png"
#define BG_IMAGE_5  @"background_568h.png"

#define BG_RESTAURANT_IMAGE    @"background.png"
#define BG_RESTAURANT_IMAGE_5  @"background_568h.png"

#define SEGNMENT_COLOR  [UIColor colorWithRed:43.0/255.0 green:155.0/255.0 blue:202.0/255.0 alpha:1]

#define SEGNMENT_COLOR_ON  [UIColor colorWithRed:29.0/255.0 green:109.0/255.0 blue:142.0/255.0 alpha:1]


// define key
#define kUserDefault    @"kUserDefault"
// define url
#define reserveURL  @"http://www.mobioneer.com"
#define TASTESYNC_URL   @"http://signup.tastesync.com"

#define INSETS_DEFAULT UIEdgeInsetsMake(0, boundsSize.width, 0, boundsSize.width)
#define INSETS_LEFT UIEdgeInsetsMake(0, boundsSize.width, 0, 0)
#define INSETS_RIGHT UIEdgeInsetsMake(0, 0, 0, boundsSize.width)
#define OFFSET_DEFAULT CGPointMake(0, 0)

@end
