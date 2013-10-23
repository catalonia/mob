//
//  RestaurantCell2.m
//  TasteSync
//
//  Created by Victor on 12/24/12.
//  Copyright (c) 2012 Mobioneer. All rights reserved.
//

#import "RestaurantCell.h"
#import "CommonHelpers.h"

@interface RestaurantCell()
{
    __weak IBOutlet UILabel *lbName,*lbYourRate, *lbNameCheckin;
    __weak IBOutlet UILabel *lbDetail;
    __weak IBOutlet UIButton *btDeal;
    __weak IBOutlet UIImageView *ivAvatar;
    
    
    RateCustom *rateCustom;
    RestaurantObj *restaurantObj;
}

//- (IBAction)actionDeal:(id)sender;

@end

@implementation RestaurantCell
@synthesize delegate=_delegate;

# pragma mark - public's method

- (void) initForView :(RestaurantObj *) obj
{
    restaurantObj = obj;
    debug(@"initForView obj.name -> %@, rate: %f",obj.name, obj.rates);
    rateCustom = [[RateCustom alloc] initWithFrame:CGRectMake(20, 40, 120, 20)];
    if (obj.rates != 0) {
        [rateCustom setRateMedium:obj.rates];
        [self addSubview:rateCustom];
        rateCustom.allowedRate = NO;
    }
    else
    {
        lbDetail.frame = CGRectMake(lbDetail.frame.origin.x, 37, lbDetail.frame.size.width, lbDetail.frame.size.height);
        lbName.frame = CGRectMake(lbName.frame.origin.x, 19, lbName.frame.size.width, lbName.frame.size.height);
        [rateCustom removeFromSuperview];
    }
    
    
    if (obj.isDeal) {
        btDeal.hidden = NO;
    }
    else {
        btDeal.hidden = YES;
    }
    if (obj.isCheckin) {
        ivAvatar.hidden = NO;
        lbNameCheckin.hidden = NO;
    }
    else
    {
        ivAvatar.hidden = YES;
        lbNameCheckin.hidden = YES;
    }
    lbName.text = obj.name;
//    add after
    
    lbDetail.text = [CommonHelpers getInformationRestaurant:obj];
}

//- (IBAction)actionDeal:(id)sender
//{
//    [[[CommonHelpers appDelegate] tabbarBaseVC] actionDeal:restaurantObj];
//}


@end
