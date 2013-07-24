//
//  RestaurantProfileCell.m
//  TasteSync
//
//  Created by Victor on 3/1/13.
//  Copyright (c) 2013 Mobioneer. All rights reserved.
//

#import "RestaurantProfileCell.h"
#import "CommonHelpers.h"

@interface RestaurantProfileCell ()
{
    UserObj *userObj ;
    RestaurantObj *restaurantObj;
}

@end

@implementation RestaurantProfileCell

- (void) initForCell:(RestaurantObj *)aRestaurantObj
{
    restaurantObj = aRestaurantObj;
    userObj = [[UserObj alloc] init];
    userObj.firstname = @"Rorie";
    userObj.lastname = @"Stephan";
    userObj.avatar = [UIImage imageNamed:@"avatar.png"];
    if (aRestaurantObj != nil) {
        lbRestaurantName.text = aRestaurantObj.name;
        lbRestaurantDetail.text = @"Chinese, $$, New York, 5.0 mi";
        lbRecommendations.text = @"Rorie S. wrote: xyz";
        
        if (restaurantObj.isFavs) {
            [CommonHelpers setBackgroundImage:[UIImage imageNamed:@"ic_favs_on.png"] forButton:btFavs];
        }
        else
        {
            [CommonHelpers setBackgroundImage:[UIImage imageNamed:@"ic_favs.png"] forButton:btFavs];

        }
    }
}

- (IBAction)actionAvatar:(id)sender
{
    [[[CommonHelpers appDelegate ] tabbarBaseVC] actionProfile:userObj];
}
- (IBAction)actionFavs:(id)sender
{
    if (!restaurantObj.isFavs) {
        [CommonHelpers setBackgroundImage:[UIImage imageNamed:@"ic_favs_on.png"] forButton:btFavs];
        restaurantObj.isFavs = TRUE;
    }
}

@end
