//
//  RecommendDetail4.h
//  TasteSync
//
//  Created by Victor on 12/27/12.
//  Copyright (c) 2012 Mobioneer. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "NotificationObj.h"

@interface RecommendDetail4 : UIViewController

@property (nonatomic, assign) int indexOfNotification,totalNotification;
@property (nonatomic, strong) NotificationObj *notificationObj;

@property (nonatomic, strong) NSMutableArray *arrData,*arrDataFilter,*arrDataRestaurant,*arrData1;

@end
