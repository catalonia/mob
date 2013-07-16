//
//  SelfProfileVC.h
//  TasteSync
//
//  Created by Mobioneer_TT 1 on 12/24/12.
//  Copyright (c) 2012 Mobioneer. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SelfProfileVC : UIViewController <UITableViewDataSource,
UITableViewDelegate, UIActionSheetDelegate>
{
    __weak IBOutlet UIScrollView *scrollViewMain;
    __weak IBOutlet UITableView *tbvUsersRecommendations;
    __weak IBOutlet UILabel *lbUserName, *lbUserDetail, *lbAboutTitle, *lbAboutDetail, *lbFollowing, *lbFollowers, *lbFriends, *lbPoints, *lbRestaurant1, *lbRestaurant2, *lbRestaurant3;
    __weak IBOutlet UIImageView *ivAvatar;
}

- (IBAction)actionSettings:(id)sender;
- (IBAction)actionEdit:(id)sender;
- (IBAction)actionFollowing:(id)sender;
- (IBAction)actionFollowers:(id)sender;
- (IBAction)actionFriends:(id)sender;
- (IBAction)actionRestaurant:(id)sender;
- (IBAction)actionMoreRestaurant:(id)sender;
- (IBAction)actionFacebook:(id)sender;
- (IBAction)actionTwitter:(id)sender;
- (IBAction)actionBlog:(id)sender;

@end
