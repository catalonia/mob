//
//  RestaurantObj.h
//  TasteSync
//
//  Created by Victor on 2/19/13.
//  Copyright (c) 2013 Mobioneer. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TSCityObj.h"

typedef enum
{
    RestaurantTypeNone = 0,
    RestaurantTypeFavorated = 1,
    RestaurantTypeRecomodation = 2,
    RestaurantTypeSaved = 3,
    RestaurantTypeTips = 4
}RestaurantType;

@interface RestaurantObj : NSObject

@property (nonatomic, strong) NSString* uid;
@property (nonatomic, strong) NSString *name,*nation;
@property (nonatomic, assign) float longtitude,lattitude;
@property (nonatomic, assign) int rates;
@property (nonatomic, assign) BOOL isSelected; 
@property (nonatomic, assign) BOOL isDeal;
@property (nonatomic, assign) RestaurantType type;

@property(nonatomic, strong) NSString* deal;
@property (nonatomic, assign) BOOL isOpenNow;
@property (nonatomic, assign) BOOL isMoreInfo;
@property (nonatomic, assign) BOOL isMenuFlag;
@property (nonatomic, assign) BOOL isTipFlag;

@property (nonatomic, assign) BOOL isSaved;
@property (nonatomic, assign) BOOL isFavs;
@property (nonatomic, assign) BOOL isReco;
@property (nonatomic, assign) BOOL isCheckin;
@property (nonatomic, assign) BOOL isLike;
@property (nonatomic, strong) NSString *imageUrl;
@property (nonatomic, assign) int allowSize;

@property(nonatomic,strong)  NSString* factualId, *factualRating, *priceRange, *restaurantHours, *sumVoteCount, *sumVoteValue, *tbdOpenTableId;

@property(nonatomic,strong) NSString* cuisineTier2;
@property (nonatomic, strong) NSString* price;

@property(nonatomic,strong) TSCityObj* cityObj;
@property(nonatomic,strong) NSMutableArray* recommendArray;

@end
