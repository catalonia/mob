//
//  ResRecommendObj.h
//  TasteSync
//
//  Created by Victor on 1/4/13.
//  Copyright (c) 2013 Mobioneer. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "UserObj.h"

@interface ResRecommendObj : NSObject

@property (nonatomic, strong) UserObj *user;
@property (nonatomic, strong) NSString *title,*detail;
@property (nonatomic, assign) int numberOfLikes;
@property (nonatomic, assign) int type;
@property (nonatomic, assign) BOOL isLike;


@end
