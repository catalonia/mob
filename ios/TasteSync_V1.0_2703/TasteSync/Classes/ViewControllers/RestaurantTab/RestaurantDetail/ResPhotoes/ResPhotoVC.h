//
//  ResPhotoVC.h
//  TasteSync
//
//  Created by Victor on 1/10/13.
//  Copyright (c) 2013 Mobioneer. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ResPhotoCell.h"
#import "RestaurantObj.h"

@interface ResPhotoVC : UIViewController

@property (nonatomic, strong) NSMutableArray *arrData;
@property (nonatomic, strong) RestaurantObj *restaurantObj;


-(id)initWithArrayPhoto:(NSMutableArray*)array RestaurantObj:(RestaurantObj*)restaurant;
@end
