//
//  NotificationCell.m
//  TasteSync
//
//  Created by Victor on 12/26/12.
//  Copyright (c) 2012 Mobioneer. All rights reserved.
//

#import "NotificationCell.h"

@interface NotificationCell ()
{
    __weak IBOutlet UIImageView *ivAvatar;
    __weak IBOutlet UILabel *lbName,*lbLongMsg;
    __weak IBOutlet UIButton *btShowProfile;
    __weak IBOutlet UIActivityIndicatorView *activity;
    
    NotificationObj* objNotify;
}

@end

@implementation NotificationCell

- (id)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier
{
    self = [super initWithStyle:style reuseIdentifier:reuseIdentifier];
    if (self) {
        // Initialization code
    }
    return self;
}

- (void)setSelected:(BOOL)selected animated:(BOOL)animated
{
    [super setSelected:selected animated:animated];
    
    // Configure the view for the selected state
}



# pragma mark - public's method

- (void) initForView:(NotificationObj *)obj
{
    objNotify = obj;
    if (obj.user.avatar != nil) {
        ivAvatar.image = obj.user.avatar;
        [activity removeFromSuperview];
    }
    else
    {
        [activity startAnimating];
        [NSThread detachNewThreadSelector:@selector(loadImage) toTarget:self withObject:nil];
    }
    //NSString *firstCh = [obj.user.lastname substringToIndex:1];
    if (obj.type == TYPE_1) {
        lbName.text = [NSString stringWithFormat:@"%@. %@",obj.user.name,NO_TITLE_1];
    }
    else if(obj.type == TYPE_2)
    {
        NSString *res_name = @"Restaurant";
        lbName.text = [NSString stringWithFormat:@"%@",NO_TITLE_2(res_name)];
    }
    else if(obj.type == TYPE_3)
    {
        lbName.text = [NSString stringWithFormat:@"%@. %@",obj.user.name,NO_TITLE_3];
    }
    else if(obj.type == TYPE_4)
    {
        lbName.text = [NSString stringWithFormat:@"%@. %@",obj.user.name,NO_TITLE_4];
    }
    else if(obj.type == TYPE_5)
    {
        lbName.text = [NSString stringWithFormat:@"%@. %@",obj.user.name,NO_TITLE_5];
    }
    else if(obj.type == TYPE_6)
    {
        lbName.text = [NSString stringWithFormat:@"%@. %@",obj.user.name,NO_TITLE_6];
    }
    else if(obj.type == TYPE_7)
    {
        NSString *res_name = @"Nanking";

        lbName.text = [NSString stringWithFormat:@"%@. %@",obj.user.name,NO_TITLE_7(res_name)];

    }

    lbLongMsg.text = [NSString stringWithFormat:@"%@...more",obj.description];
    btShowProfile.tag = self.tag;
}

-(void)loadImage
{
    UserObj* obj = objNotify.user;
    obj.avatar = [[UIImage alloc] initWithData:[NSData dataWithContentsOfURL:[NSURL URLWithString:obj.avatarUrl]]];
    [activity stopAnimating];
    [activity removeFromSuperview];
    ivAvatar.image = obj.avatar;
    objNotify.user.avatar = obj.avatar;
}

@end
