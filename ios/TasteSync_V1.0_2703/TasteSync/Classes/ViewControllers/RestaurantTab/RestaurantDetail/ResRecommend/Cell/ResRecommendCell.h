//
//  ResRecommendCell.h
//  TasteSync
//
//  Created by Victor on 1/4/13.
//  Copyright (c) 2013 Mobioneer. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ResRecommendObj.h"
#import "CommonHelpers.h"

@interface ResRecommendCell : UITableViewCell
{
    __weak IBOutlet UILabel *lbtitle, *lbDetail,* lbNumberLike;
    __weak IBOutlet UIImageView *ivAvatar;
    __weak IBOutlet UIButton *btLike;
}

- (IBAction)actionLike:(id)sender;

- (void) initForCell:(ResRecommendObj *) obj;

@end
