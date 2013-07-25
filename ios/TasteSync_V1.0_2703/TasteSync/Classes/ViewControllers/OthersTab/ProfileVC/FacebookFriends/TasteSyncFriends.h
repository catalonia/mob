//
//  TasteSyncFriends.h
//  TasteSync
//
//  Created by Mobioneer_TT 1 on 1/24/13.
//  Copyright (c) 2013 Mobioneer. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UserObj.h"
@interface TasteSyncFriends : UIViewController <UITableViewDataSource, UITableViewDelegate,UITextFieldDelegate, UIActionSheetDelegate>
{
    __weak IBOutlet UITableView *tbvResult, *tbvFilter;
    __weak IBOutlet UILabel *lbTitle;
    __weak IBOutlet UITextField *tfSearch;
}

@property (nonatomic, strong) UserObj  *user;
@property (nonatomic, strong) NSMutableArray *arrData, *arrDataFilter, *arrDataFriends;



- (IBAction)actionBack:(id)sender;


@end
