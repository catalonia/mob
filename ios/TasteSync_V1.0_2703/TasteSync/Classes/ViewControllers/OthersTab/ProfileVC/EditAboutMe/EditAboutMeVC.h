//
//  EditAboutMeVC.h
//  TasteSync
//
//  Created by Victor on 2/5/13.
//  Copyright (c) 2013 Mobioneer. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface EditAboutMeVC : UIViewController

// if isYourProfile allow edit
// else don't allow

@property (nonatomic, assign) BOOL isYourProfile;
- (IBAction)actionEdit:(id)sender;

@end
