//
//  RestaurantRecommendationCell.m
//  TasteSync
//
//  Created by Victor on 3/14/13.
//  Copyright (c) 2013 Mobioneer. All rights reserved.
//

#import "RestaurantRecommendationCell.h"
#import "CommonHelpers.h"
#import "ReplyRecomendationObj.h"
@interface RestaurantRecommendationCell ()
{
    RestaurantObj* _restaurantObj;
    __weak IBOutlet UIActivityIndicatorView* activity1;
    __weak IBOutlet UIActivityIndicatorView* activity2;
    __weak IBOutlet UIActivityIndicatorView* activity3;
}
@end

@implementation RestaurantRecommendationCell

- (void) initCellTest1:(RestaurantObj*)restaurantObj
{
    view1.hidden = NO;
    [activity1 startAnimating];
    view2.hidden = YES;
    [activity2 removeFromSuperview];
    view3.hidden = YES;
    [activity3 removeFromSuperview];
    _restaurantObj = restaurantObj;
    
    ReplyRecomendationObj* obj = [restaurantObj.recommendArray objectAtIndex:0];
    lbRestaurantName.text = restaurantObj.name;
    lbDetail.text = [CommonHelpers getInformationRestaurant:restaurantObj];
    if (obj.userObj.avatar != nil)
    {
        iv1.image = obj.userObj.avatar;
        [activity1 stopAnimating];
        [activity1 removeFromSuperview];
    }
    else
         [NSThread detachNewThreadSelector:@selector(loadAvatar1) toTarget:self withObject:nil];
     lbRecommend1.text = [NSString stringWithFormat:@"%@: %@", obj.userObj.name, obj.replyText];
    
}
- (void) initCellTest2:(RestaurantObj*)restaurantObj
{
    view1.hidden = NO;
    [activity1 startAnimating];
    view2.hidden = NO;
    [activity2 startAnimating];
    view3.hidden = YES;
    [activity3 removeFromSuperview];
     _restaurantObj = restaurantObj;
    
    lbRestaurantName.text = restaurantObj.name;
    lbDetail.text = [CommonHelpers getInformationRestaurant:restaurantObj];
    ReplyRecomendationObj* obj1 = [restaurantObj.recommendArray objectAtIndex:0];
    if (obj1.userObj.avatar != nil)
    {
        iv1.image = obj1.userObj.avatar;
        [activity1 stopAnimating];
        [activity1 removeFromSuperview];
    }
    else
        [NSThread detachNewThreadSelector:@selector(loadAvatar1) toTarget:self withObject:nil];
    lbRecommend1.text = [NSString stringWithFormat:@"%@: %@", obj1.userObj.name, obj1.replyText];
    
    ReplyRecomendationObj* obj2 = [restaurantObj.recommendArray objectAtIndex:1];
    if (obj2.userObj.avatar != nil)
    {
        iv2.image = obj2.userObj.avatar;
        [activity2 stopAnimating];
        [activity2 removeFromSuperview];
    }
    else
        [NSThread detachNewThreadSelector:@selector(loadAvatar2) toTarget:self withObject:nil];
    lbRecommend2.text = [NSString stringWithFormat:@"%@: %@", obj2.userObj.name, obj2.replyText];
    
}
- (void) initCellTest3:(RestaurantObj*)restaurantObj
{
    view1.hidden = NO;
    [activity1 startAnimating];
    [NSThread detachNewThreadSelector:@selector(loadAvatar1) toTarget:self withObject:nil];
    view2.hidden = NO;
    [activity2 startAnimating];
    [NSThread detachNewThreadSelector:@selector(loadAvatar2) toTarget:self withObject:nil];
    view3.hidden = NO;
    [activity3 startAnimating];
    [NSThread detachNewThreadSelector:@selector(loadAvatar3) toTarget:self withObject:nil];
     _restaurantObj = restaurantObj;
    lbRestaurantName.text = restaurantObj.name;
    lbDetail.text = [CommonHelpers getInformationRestaurant:restaurantObj];
    ReplyRecomendationObj* obj1 = [restaurantObj.recommendArray objectAtIndex:0];
    if (obj1.userObj.avatar != nil)
    {
        iv1.image = obj1.userObj.avatar;
        [activity1 stopAnimating];
        [activity1 removeFromSuperview];
    }
    else
        [NSThread detachNewThreadSelector:@selector(loadAvatar1) toTarget:self withObject:nil];
    lbRecommend1.text = [NSString stringWithFormat:@"%@: %@", obj1.userObj.name, obj1.replyText];
    
    ReplyRecomendationObj* obj2 = [restaurantObj.recommendArray objectAtIndex:1];
    if (obj2.userObj.avatar != nil)
    {
        iv2.image = obj2.userObj.avatar;
        [activity2 stopAnimating];
        [activity2 removeFromSuperview];
    }
    else
        [NSThread detachNewThreadSelector:@selector(loadAvatar2) toTarget:self withObject:nil];
     lbRecommend2.text = [NSString stringWithFormat:@"%@: %@", obj2.userObj.name, obj2.replyText];
    
    ReplyRecomendationObj* obj3 = [restaurantObj.recommendArray objectAtIndex:2];
    if (obj3.userObj.avatar != nil)
    {
        iv3.image = obj3.userObj.avatar;
        [activity3 stopAnimating];
        [activity3 removeFromSuperview];
    }
    else
        [NSThread detachNewThreadSelector:@selector(loadAvatar3) toTarget:self withObject:nil];
    lbRecommend3.text = [NSString stringWithFormat:@"%@: %@", obj3.userObj.name, obj3.replyText];
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
            ReplyRecomendationObj* obj1 = [_restaurantObj.recommendArray objectAtIndex:0];
            [[[CommonHelpers appDelegate] tabbarBaseVC] gotoProfile:obj1.userObj];
        }
            break;
        case 2:
        {
            ReplyRecomendationObj* obj1 = [_restaurantObj.recommendArray objectAtIndex:1];
            [[[CommonHelpers appDelegate] tabbarBaseVC] gotoProfile:obj1.userObj];
        }
            break;
        case 3:
        {
            ReplyRecomendationObj* obj1 = [_restaurantObj.recommendArray objectAtIndex:2];
            [[[CommonHelpers appDelegate] tabbarBaseVC] gotoProfile:obj1.userObj];
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
    [[[CommonHelpers appDelegate] tabbarBaseVC] actionSelectRestaurant:_restaurantObj selectedIndex:1];
}

-(void)loadAvatar1
{
    ReplyRecomendationObj* obj = [_restaurantObj.recommendArray objectAtIndex:0];
    
    obj.userObj.avatar = [[UIImage alloc] initWithData:[NSData dataWithContentsOfURL:[NSURL URLWithString:obj.userObj.avatarUrl]]];
    [activity1 stopAnimating];
    [activity1 removeFromSuperview];
    iv1.image = obj.userObj.avatar;

}
-(void)loadAvatar2
{
    ReplyRecomendationObj* obj = [_restaurantObj.recommendArray objectAtIndex:1];
    
    obj.userObj.avatar = [[UIImage alloc] initWithData:[NSData dataWithContentsOfURL:[NSURL URLWithString:obj.userObj.avatarUrl]]];
    [activity2 stopAnimating];
    [activity2 removeFromSuperview];
    iv2.image = obj.userObj.avatar;
}
-(void)loadAvatar3
{
    ReplyRecomendationObj* obj = [_restaurantObj.recommendArray objectAtIndex:2];
    
    obj.userObj.avatar = [[UIImage alloc] initWithData:[NSData dataWithContentsOfURL:[NSURL URLWithString:obj.userObj.avatarUrl]]];
    [activity3 stopAnimating];
    [activity3 removeFromSuperview];
    iv3.image = obj.userObj.avatar;
}
@end
