//
//  RecommendDetail1.h
//  TasteSync
//
//  Created by Victor on 12/26/12.
//  Copyright (c) 2012 Mobioneer. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "NotificationObj.h"

@interface RecommendDetail1 : UIViewController

@property (nonatomic, strong) NotificationObj *notificationObj;
@property (nonatomic, assign) int indexOfNotification,totalNotification;

@property (nonatomic, strong) NSMutableArray *arrData,*arrDataRestaurant,*arrDataFilter;

@end