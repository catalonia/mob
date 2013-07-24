//
//  FriendFilterCell.m
//  TasteSync
//
//  Created by Victor on 1/7/13.
//  Copyright (c) 2013 Mobioneer. All rights reserved.
//

#import "FriendFilterCell.h"
#import "CommonHelpers.h"
@interface FriendFilterCell ()
{
    __weak IBOutlet UILabel *lbName;
    __weak IBOutlet UIImageView *ivAvatar;
    UserObj *userObj;
}

- (IBAction)actionAvatar:(id)sender;

@end

@implementation FriendFilterCell

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


- (void) initForCell:(UserObj *) user
{
    userObj = user;
    
    if (user) {
        
        if (/*[UserDefault userDefault].loginStatus != STASTUS_LOGIN_EMAIL_ID*/TRUE) {
            lbName.text = [NSString stringWithFormat:@"%@ %@",user.firstname,user.lastname];

        }else
        {
            lbName.text = user.email;

        }
        
        if (user.avatar !=nil) {
            debug(@"FriendCell -> avatar # nil");
            ivAvatar.image = user.avatar;
        }
        else if(user.avatarUrl != nil)
        {
            debug(@"FriendCell -> avatar == nil");

            if(user.status_avatar == UserAvatarStatusNotLoad)
            {
                debug(@"FriendCell -> avatar not load  urlAvatar-> %@",user.avatarUrl);

                dispatch_async(dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_HIGH, 0), ^{
                    
                    user.status_avatar = UserAvatarStatusLoading;
                    user.avatar = [[UIImage alloc] initWithData:[NSData dataWithContentsOfURL:[NSURL URLWithString:user.avatarUrl]]];
                    debug(@"load image finish -> user name -> %@", user.firstname);
                    
                    dispatch_async(dispatch_get_main_queue(), ^{
                        ivAvatar.image = user.avatar;
                        user.status_avatar = UserAvatarStatusLoaded;
                    });
                    
                });
                
            }
        }
        else
        {
            debug(@"FriendCell -> no avatar");

        }
       
    }
    
}

- (void) initWithName:(NSString *) aName
{
    ivAvatar.hidden = YES;
    lbName.text = aName;
    [lbName setFrame:CGRectMake(5, lbName.frame.origin.y, lbName.frame.size.width, lbName.frame.size.height)];
    
}


- (IBAction)actionAvatar:(id)sender
{
    debug(@"FriendFilterCell - > actionAvatar");
    [[[CommonHelpers appDelegate] tabbarBaseVC] actionProfile:userObj];
}


@end
