//
//  TabbarBaseVC.h
//  TasteSync
//
//  Created by Victor on 12/19/12.
//  Copyright (c) 2012 Mobioneer. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UserObj.h"
#import "RestaurantObj.h"


@interface TabbarBaseVC : UITabBarController

- (id) init;

- (void) actionAsk;
- (void) actionRecommendations;
- (void) actionRestaurant;
- (void) actionRestaurantViaAskTab;
- (void) actionOthers;
- (void) actionNewsfeed;
- (void) actionProfile:(UserObj *) user;
//- (void) actionDeal:(RestaurantObj *) aRestaurantObj;
- (void) actionSelectRestaurant:(RestaurantObj *) aRestaurantObj selectedIndex:(int)aSelectedIndex;
- (void)hideTabBar;
- (void)showTabBar;
- (void) actionRecommendationsShowMore;

- (void) actionBackToSelectedIndex:(int) aSelectedIndex;

@end
