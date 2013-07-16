//
//  ConfigProfileVC.h
//  TasteSync
//
//  Created by Victor on 2/19/13.
//  Copyright (c) 2013 Mobioneer. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ConfigProfileVC : UIViewController<UITableViewDataSource,UITableViewDelegate, UITextFieldDelegate>
{
    __weak IBOutlet UIView *viewMain, *viewUserInfo;
    __weak IBOutlet UIScrollView *scrollViewMain;
    __weak IBOutlet UILabel *lbName, *lbLocation, *lbInfo;
    __weak IBOutlet UITextField *tfFriend, *tfCusine, *tfRestaurant1 , *tfRestaurant2, *tfRestaurant3, *tfRestaurant4, *tfRestaurant5;
    __weak IBOutlet UIButton *btCheck, *btInvite, *btDone;
    __weak IBOutlet UIImageView *ivAvatar, *ivAvatarFriend;
    
    __weak IBOutlet UITableView *tbvFilter;
    __weak IBOutlet UILabel *lbTitle;
}

@property (nonatomic, strong) NSMutableArray *arrDataFriends, *arrDataCusine, *arrDataRestaurant, *arrDataFilter;
@property (nonatomic, strong) NSMutableArray *arrData ; // data of top 5 restaurant

- (IBAction)actionDone:(id)sender;
- (IBAction)actionInvite:(id)sender;
- (IBAction)actionHideKeyPad:(id)sender;



@end
