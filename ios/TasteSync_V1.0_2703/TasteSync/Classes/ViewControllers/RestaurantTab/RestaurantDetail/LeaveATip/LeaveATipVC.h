//
//  LeaveATipVC.h
//  TasteSync
//
//  Created by Victor on 2/22/13.
//  Copyright (c) 2013 Mobioneer. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "RestaurantObj.h"

@interface LeaveATipVC : UIViewController<UITextViewDelegate>
{
    __weak IBOutlet UILabel *lbRestaurantName, *lbRestaurantDetail, *lbTvTip;
    __weak IBOutlet UITextView *tvTip;
    __weak IBOutlet UIButton *btSave;
    __weak IBOutlet UIButton *btLeaveATip, *btFacebook, *btTwitter;
}

@property (nonatomic, strong) RestaurantObj *restaurantObj;

- (IBAction)actionSave:(id)sender;
- (IBAction)actionAsk:(id)sender;
- (IBAction)actionShareFacebook:(id)sender;
- (IBAction)actionShareTwitter:(id)sender;
- (IBAction)actionLeaveATip:(id)sender;
- (IBAction)actionNewsfeed:(id)sender;
- (IBAction)actionBack:(id)sender;

@end
