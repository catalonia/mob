//
//  RestaurantRecommendationCell.h
//  TasteSync
//
//  Created by Victor on 3/14/13.
//  Copyright (c) 2013 Mobioneer. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Recommend2Obj.h"

@interface RestaurantRecommendationCell : UITableViewCell
{
    __weak IBOutlet UILabel *lbRestaurantName, *lbDetail;
    __weak IBOutlet UILabel *lbRecommend1, *lbRecommend2, *lbRecommend3;
    __weak IBOutlet UIImageView *iv1, *iv2, *iv3;
    __weak IBOutlet UIView *view1, *view2, *view3;
    __weak IBOutlet UIButton *btMore;

}

//- (void) initCell:(Recommend2Obj *) aRecommend2Obj;
- (IBAction)actionMore:(id)sender;
- (IBAction)actionAvatar:(id)sender;
- (IBAction)actionSelect:(id)sender;
- (void) initCellTest1;
- (void) initCellTest2;
- (void) initCellTest3;


@end
