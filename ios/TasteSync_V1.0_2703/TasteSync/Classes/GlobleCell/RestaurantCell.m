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
    debug(@"initForView obj.name -> %@",obj.name);
    restaurantObj = obj;
    rateCustom = [[RateCustom alloc] initWithFrame:CGRectMake(20, 40, 120, 20)];
    [self addSubview:rateCustom];
    [rateCustom setRateMedium:obj.rates];
    rateCustom.allowedRate = NO;
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
