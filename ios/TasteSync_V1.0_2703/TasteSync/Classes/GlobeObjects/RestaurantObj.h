//
//  RestaurantObj.h
//  TasteSync
//
//  Created by Victor on 2/19/13.
//  Copyright (c) 2013 Mobioneer. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface RestaurantObj : NSObject

@property (nonatomic, assign) int uid;

@property (nonatomic, strong) NSString *name,*nation;

@property (nonatomic, assign) float longtitude,lattitude;

@property (nonatomic, assign) int rates;

@property (nonatomic, assign) BOOL isSelected; 

@property (nonatomic, assign) BOOL isDeal;

@property (nonatomic, assign) BOOL isSaved;

@property (nonatomic, assign) BOOL isFavs;

@property (nonatomic, assign) BOOL isCheckin;

@property (nonatomic, assign) BOOL isLike;


@property (nonatomic, strong) NSString *imageUrl;
@property (nonatomic, assign) int allowSize;

@end
