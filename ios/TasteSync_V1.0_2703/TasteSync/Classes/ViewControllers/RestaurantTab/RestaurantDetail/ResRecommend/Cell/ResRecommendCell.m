//
//  ResRecommendCell.m
//  TasteSync
//
//  Created by Victor on 1/4/13.
//  Copyright (c) 2013 Mobioneer. All rights reserved.
//

#import "ResRecommendCell.h"
#import "CommonHelpers.h"

@interface ResRecommendCell()
{
    ResRecommendObj *resRecommendObj;
}

- (IBAction)actionAvatar:(id)sender;

@end

@implementation ResRecommendCell

- (void) initForCell:(ResRecommendObj *) obj
{
    resRecommendObj = obj;
    lbtitle.text = obj.title;
    lbDetail.text = obj.detail;
    ivAvatar.image = obj.user.avatar;
    if (obj.numberOfLikes == 0) {
        lbNumberLike.hidden = YES;
    }
    else if (obj.numberOfLikes ==1)
    {
        lbNumberLike.hidden = NO;
        lbNumberLike.text = [NSString stringWithFormat:@"%d Like",obj.numberOfLikes];

    }
    else
    {
        lbNumberLike.hidden = NO;
        lbNumberLike.text = [NSString stringWithFormat:@"%d Likes",obj.numberOfLikes];
    }
}

- (IBAction)actionLike:(id)sender
{
    if ([UserDefault userDefault].loginStatus == NotLogin) {
        [[CommonHelpers appDelegate] showLoginDialog];
    }
    else
    {
        if (resRecommendObj.isLike) {
            resRecommendObj.isLike = NO;
            [CommonHelpers setBackgroundImage:[UIImage imageNamed:@"ic_like.png"] forButton:btLike];
            resRecommendObj.numberOfLikes --;
        }
        else
        {
            resRecommendObj.isLike = YES;
            [CommonHelpers setBackgroundImage:[UIImage imageNamed:@"ic_like_on.png"] forButton:btLike];
            resRecommendObj.numberOfLikes ++;
        }
        
        if (resRecommendObj.numberOfLikes == 0) {
            lbNumberLike.hidden = YES;
        }
        else if (resRecommendObj.numberOfLikes ==1)
        {
            lbNumberLike.hidden = NO;
            lbNumberLike.text = [NSString stringWithFormat:@"%d Like",resRecommendObj.numberOfLikes];
            
        }
        else
        {
            lbNumberLike.hidden = NO;
            lbNumberLike.text = [NSString stringWithFormat:@"%d Likes",resRecommendObj.numberOfLikes];
        }
    }
}

- (IBAction)actionAvatar:(id)sender
{
    [[[CommonHelpers appDelegate] tabbarBaseVC] actionProfile:resRecommendObj.user];
}


@end