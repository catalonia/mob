//
//  RestaurantRecommendationCell.m
//  TasteSync
//
//  Created by Victor on 3/14/13.
//  Copyright (c) 2013 Mobioneer. All rights reserved.
//

#import "RestaurantRecommendationCell.h"
#import "CommonHelpers.h"
@interface RestaurantRecommendationCell ()

@end

@implementation RestaurantRecommendationCell

- (void) initCellTest1
{
    view1.hidden = NO;
    view2.hidden = YES;
    view3.hidden = YES;
    iv1.image = [UIImage imageNamed:@"avatar.png"];
    lbRecommend1.text = @"Victor N recommends somethings...";
    
}
- (void) initCellTest2
{
    view1.hidden = NO;
    view2.hidden = NO;
    view3.hidden = YES;
    iv1.image = [UIImage imageNamed:@"avatar.png"];
    lbRecommend1.text = @"Penny N recommends somethings...";
    iv2.image = [UIImage imageNamed:@"avatar.png"];
    lbRecommend2.text = @"Penny N recommends somethings...";
    
}
- (void) initCellTest3
{
    view1.hidden = NO;
    view2.hidden = NO;
    view3.hidden = NO;
    iv1.image = [UIImage imageNamed:@"avatar.png"];
    lbRecommend1.text = @"Victor N recommends somethings...";
    iv2.image = [UIImage imageNamed:@"avatar.png"];
    lbRecommend2.text = @"Penny N recommends somethings...";
    iv3.image = [UIImage imageNamed:@"avatar.png"];
    lbRecommend3.text = @"Nhan T recommends somethings...";
}

- (IBAction)actionMore:(id)sender
{
    debug(@"RestaurantRecommendationCell - > actionMore");
    [[[CommonHelpers appDelegate] tabbarBaseVC] actionRecommendationsShowMore];
}

- (IBAction)actionAvatar:(id)sender
{
    UIButton *bt = (UIButton *) sender;
    switch (bt.tag) {
        case 1:
        {
            debug(@"RestaurantRecommendationCell -> actionAvatar -> btTag 1 ");
            UserObj *user = [[UserObj alloc] init];
            user.firstname  = @"Victor";
            user.lastname = @"Ngo";
            user.avatar = [UIImage imageNamed:@"avatar.png"];
            user.uid = 1;
            
            [[[CommonHelpers appDelegate] tabbarBaseVC] actionProfile:user];
        }
            break;
        case 2:
        {
            debug(@"RestaurantRecommendationCell -> actionAvatar -> btTag 2 ");
            UserObj *user = [[UserObj alloc] init];
            user.firstname  = @"Penny";
            user.lastname = @"Ngo";
            user.avatar = [UIImage imageNamed:@"avatar.png"];
            user.uid = 1;
            
            [[[CommonHelpers appDelegate] tabbarBaseVC] actionProfile:user];
        }
            break;
        case 3:
        {
            debug(@"RestaurantRecommendationCell -> actionAvatar -> btTag 3 ");
            UserObj *user = [[UserObj alloc] init];
            user.firstname  = @"Robin";
            user.lastname = @"Trinh";
            user.avatar = [UIImage imageNamed:@"avatar.png"];
            user.uid = 1;
            
            [[[CommonHelpers appDelegate] tabbarBaseVC] actionProfile:user];
        }
            break;
            
        default:
        {
            debug(@"RestaurantRecommendationCell -> actionAvatar -> btTag default ");

        }
            break;
    }
}

- (IBAction)actionSelect:(id)sender
{
    RestaurantObj *testObj = [[RestaurantObj alloc] init];
    testObj.name = @"Nanking";
    [[[CommonHelpers appDelegate] tabbarBaseVC] actionSelectRestaurant:testObj selectedIndex:1];
}
@end
