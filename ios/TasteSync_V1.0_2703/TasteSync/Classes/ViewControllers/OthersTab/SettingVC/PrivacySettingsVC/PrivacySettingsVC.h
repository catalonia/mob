//
//  PrivacySettingsVC.h
//  TasteSync
//
//  Created by Mobioneer_TT 1 on 12/19/12.
//  Copyright (c) 2012 Mobioneer. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PrivacySettingsVC : UIViewController
{
    __weak IBOutlet UIScrollView *scrollViewMain;
}

@property (nonatomic, strong) NSMutableArray *listCheckStatePrivacySettings;

- (IBAction)buttonCheckTapper:(UIButton *)button;
- (void)setStateForbuttonsCheck:(NSMutableArray *)arrayState;
- (void)savelistCheckStateOfAll;

@end
