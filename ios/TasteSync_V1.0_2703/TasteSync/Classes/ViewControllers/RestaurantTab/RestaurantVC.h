//
//  RestaurantVC.h
//  TasteSync
//
//  Created by Victor on 2/19/13.
//  Copyright (c) 2013 Mobioneer. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "RateCustom.h"

@interface RestaurantVC : UIViewController<UITableViewDataSource, UITableViewDelegate,RateCustomDelegate, UIScrollViewDelegate>
{
    __weak IBOutlet UITableView *tbvResult, *tbvFilter;
    __weak IBOutlet UITextField *tfRestaurant, *tfRegion;
    __weak IBOutlet UIView *viewFilter1, *viewFilter2, *viewFilterExtends, *viewFilterSmall, *viewMain;
    __weak IBOutlet UILabel *lbTypingRestaurant, *lbTypeRegions;
    __weak IBOutlet UIScrollView *scrollViewMain;
    
    __weak IBOutlet UIScrollView *scrollViewCuisine, *scrollViewPrice;
    __weak IBOutlet UIButton *btSaved, *btFavs, *btDeals, *btShow, *btHide;
    __weak IBOutlet UISegmentedControl *segCtrCuisine, *segCtrPrice;
    
    NSMutableArray *arrCuisine, *arrPrice;
    int rating;
    BOOL saved, favs , deals, restaurantChains;
    
    RateCustom *rateCustom;
    NSMutableDictionary *filterDict;
    
    __weak IBOutlet UILabel *lbCusine, *lbPrice, *lbRating, *lbShowOnlyThese;
    
}

@property (nonatomic, strong) NSMutableArray *arrData, *arrDataFilter , *arrDataRestaurant , *arrDataRegion;

@property (nonatomic, assign) BOOL notHomeScreen;

- (IBAction)actionOthersTab:(id)sender;
- (IBAction)actionNewsfeed:(id)sender;
- (IBAction)actionHideKeypad:(id)sender;

- (IBAction)actionFilter:(id)sender;
- (IBAction)actionDoneFilter:(id)sender;
- (IBAction)actionSaved:(id)sender;
- (IBAction)actionFavs:(id)sender;
- (IBAction)actionDeals:(id)sender;
- (IBAction)actionShow:(id)sender;
- (IBAction)actionHide:(id)sender;

@end