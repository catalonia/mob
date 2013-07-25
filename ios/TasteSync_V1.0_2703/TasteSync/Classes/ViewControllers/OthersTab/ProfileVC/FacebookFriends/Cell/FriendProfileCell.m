//
//  FriendProfileCell.m
//  TasteSync
//
//  Created by Victor on 3/5/13.
//  Copyright (c) 2013 Mobioneer. All rights reserved.
//

#import "FriendProfileCell.h"
#import "CommonHelpers.h"

@interface FriendProfileCell ()
{
    UserObj *userObj;
}
@end

@implementation FriendProfileCell

- (void) initCell:(UserObj *)anUserObj
{
    userObj = anUserObj;
    if (anUserObj) {
        ivAvatar.hidden = NO;
        lbName.hidden = NO;
        lbName.text = [NSString stringWithFormat:@"%@ %@", anUserObj.firstname, anUserObj.lastname];
        ivAvatar.image = anUserObj.avatar;
    }
    else
    {
        ivAvatar.hidden = YES;
        lbName.hidden = YES;
    }
       
}
- (IBAction)actionSelectUser:(id)sender
{
    UIButton *bt = (UIButton *)sender;
    switch (bt.tag) {
        case 1:
        {
            if (userObj) {
                [[[CommonHelpers appDelegate] tabbarBaseVC] actionProfile:userObj];
            }
        }
            break;
                    
        default:
            break;
    }
    
}

@end
