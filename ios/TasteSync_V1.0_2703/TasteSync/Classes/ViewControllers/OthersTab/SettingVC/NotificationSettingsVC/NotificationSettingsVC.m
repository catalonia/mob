//
//  NotificationSettingsVC.m
//  TasteSync
//
//  Created by Mobioneer_TT 1 on 12/19/12.
//  Copyright (c) 2012 Mobioneer. All rights reserved.
//

#import "NotificationSettingsVC.h"
#import "CommonHelpers.h"
@interface NotificationSettingsVC ()
{
    
}
- (IBAction)actionBack:(id)sender;
- (IBAction)actionNewsfeed:(id)sender;

@end

@implementation NotificationSettingsVC

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        // Custom initialization
    }
    return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];
    [CommonHelpers setBackgroudImageForView:self.view];

    // Do any additional setup after loading the view from its nib.
    
    // top 3 selections for mobile can't be changed
    
   // [self.scrollview setFrame:CGRectMake(0, 0, 300, 348)];
    [self.scrollview setContentSize:CGSizeMake(300, 800)];
    
    if ([UserDefault userDefault].loginStatus == NotLogin) {
        //state all no check
        self.listCheckStateNotificationSettings = [NSMutableArray arrayWithObjects:[NSNumber numberWithBool:NO], [NSNumber numberWithBool:NO], [NSNumber numberWithBool:NO], [NSNumber numberWithBool:NO], [NSNumber numberWithBool:NO], [NSNumber numberWithBool:NO], [NSNumber numberWithBool:NO], [NSNumber numberWithBool:NO], [NSNumber numberWithBool:NO], [NSNumber numberWithBool:NO], [NSNumber numberWithBool:NO], [NSNumber numberWithBool:NO], [NSNumber numberWithBool:NO], [NSNumber numberWithBool:NO], [NSNumber numberWithBool:NO], [NSNumber numberWithBool:NO], [NSNumber numberWithBool:NO], [NSNumber numberWithBool:NO], [NSNumber numberWithBool:NO], [NSNumber numberWithBool:NO], [NSNumber numberWithBool:NO], [NSNumber numberWithBool:NO], [NSNumber numberWithBool:NO], [NSNumber numberWithBool:NO], nil];

    }
    else //state default
        self.listCheckStateNotificationSettings = [NSMutableArray arrayWithObjects:[NSNumber numberWithBool:YES], [NSNumber numberWithBool:YES], [NSNumber numberWithBool:YES], [NSNumber numberWithBool:YES], [NSNumber numberWithBool:YES], [NSNumber numberWithBool:YES], [NSNumber numberWithBool:NO], [NSNumber numberWithBool:NO], [NSNumber numberWithBool:NO], [NSNumber numberWithBool:NO], [NSNumber numberWithBool:NO], [NSNumber numberWithBool:NO], [NSNumber numberWithBool:NO], [NSNumber numberWithBool:NO], [NSNumber numberWithBool:NO], [NSNumber numberWithBool:NO], [NSNumber numberWithBool:NO], [NSNumber numberWithBool:NO], [NSNumber numberWithBool:NO], [NSNumber numberWithBool:NO], [NSNumber numberWithBool:NO], [NSNumber numberWithBool:NO], [NSNumber numberWithBool:YES], [NSNumber numberWithBool:YES], nil];
    
    
    [self setStateForbuttonsCheck:self.listCheckStateNotificationSettings];

}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


#pragma mark- IBAction's Define

- (IBAction)actionBack:(id)sender
{
    [self.navigationController popViewControllerAnimated:YES];
}
- (IBAction)actionNewsfeed:(id)sender
{
    [[[CommonHelpers appDelegate] tabbarBaseVC] actionNewsfeed];
}

- (void)setStateForbuttonsCheck:(NSMutableArray *)arrayState
{
    UIButton *button = nil;
    NSLog(@"count array: %d",arrayState.count);
    for (int i = 0; i < arrayState.count; i++) {
        NSNumber *statechecked = arrayState[i];
        
        button = (UIButton *) [self.view viewWithTag:i + 1];
        if ([statechecked boolValue] == YES) {
            NSLog(@" checked %d = YES", i+1);
            [button setImage:[UIImage imageNamed:@"ic_check_on.png"] forState:UIControlStateNormal];
        }
        else{ // ischecked = NO
            NSLog(@" checked %d = NO", i+1);
            [button setImage:[UIImage imageNamed:@"ic_check.png"] forState:UIControlStateNormal];
        }
        
    }
    
}


- (IBAction)buttonCheckTapper:(UIButton *)button;
{
    NSNumber *item = self.listCheckStateNotificationSettings[button.tag - 1];
    BOOL ischecked;
    ischecked = [item boolValue];
    ischecked = !ischecked;
    
    NSLog(@"listCount buttonCheck %d", self.listCheckStateNotificationSettings.count);
    NSLog(@"button %d checked = %@",button.tag,(ischecked == YES)?@"YES":@"NO");
    
    //change state check for button in array for save after
    // [self.arraylistCheckStateOfFavoriteSpot removeObject:statechecked];
    [self.listCheckStateNotificationSettings removeObjectAtIndex:button.tag - 1];
    item = [NSNumber numberWithBool:ischecked];
    [self.listCheckStateNotificationSettings insertObject:item atIndex:button.tag - 1];
    
    if (ischecked == YES) {
        [button setImage:[UIImage imageNamed:@"ic_check_on.png"] forState:UIControlStateNormal];
    }
    else{ // ischecked = NO
        [button setImage:[UIImage imageNamed:@"ic_check.png"] forState:UIControlStateNormal];
    }
    
}
- (void)savelistCheckStateOfAll
{
    //save array self.listCheckStateNotificationSettings nay
    
}



@end