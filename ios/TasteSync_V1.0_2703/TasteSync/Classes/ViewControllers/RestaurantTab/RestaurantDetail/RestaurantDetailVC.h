//
//  RestaurantDetailVC.h
//  TasteSync
//
//  Created by Victor on 12/28/12.
//  Copyright (c) 2012 Mobioneer. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "NotificationObj.h"
#import "RestaurantObj.h"

@interface RestaurantDetailVC : UIViewController

@property (nonatomic, strong) RestaurantObj *restaurantObj;
@property (nonatomic, assign) int selectedIndex;

@end
