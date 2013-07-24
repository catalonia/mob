//
//  SocialNetworks.m
//  TasteSync
//
//  Created by Mobioneer_TT 1 on 12/19/12.
//  Copyright (c) 2012 Mobioneer. All rights reserved.
//

#import "SocialNetworksVC.h"
#import "CommonHelpers.h"

@interface SocialNetworksVC ()
{
    UIImage *_imageOn;
    UIImage *_imgageOff;
    __weak IBOutlet UIScrollView *scrollViewMain;
}
- (IBAction)actionBack:(id)sender;
- (IBAction)actionNewsfeed:(id)sender;

@end

@implementation SocialNetworksVC

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
    
    [self initUI];
    
    if ([UserDefault userDefault].loginStatus == NotLogin) {
            self.listCheckStateOfAllConnections = [NSMutableArray arrayWithObjects:[NSNumber numberWithBool:NO], [NSNumber numberWithBool:NO], [NSNumber numberWithBool:NO], [NSNumber numberWithBool:NO], nil];
    }
    else
        self.listCheckStateOfAllConnections = [NSMutableArray arrayWithObjects:[NSNumber numberWithBool:YES], [NSNumber numberWithBool:NO], [NSNumber numberWithBool:YES], [NSNumber numberWithBool:YES], nil];
    
    self.listCheckStateOfAllPublishing = [NSMutableArray arrayWithObjects:[NSNumber numberWithBool:NO], [NSNumber numberWithBool:NO], [NSNumber numberWithBool:NO], [NSNumber numberWithBool:NO], [NSNumber numberWithBool:NO], [NSNumber numberWithBool:NO], [NSNumber numberWithBool:NO], [NSNumber numberWithBool:NO], [NSNumber numberWithBool:NO], [NSNumber numberWithBool:NO], [NSNumber numberWithBool:NO], [NSNumber numberWithBool:NO], nil];
    

    _imageOn = [UIImage imageNamed:@"on.png"];
    _imgageOff = [UIImage imageNamed:@"off.png"];
    
    [self setStateForSwitchs:self.listCheckStateOfAllConnections];
    [self setStateForbuttonsCheck:self.listCheckStateOfAllPublishing];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (void) initUI
{
    [scrollViewMain setContentSize:CGSizeMake(320, 440)];
}

- (void)setStateForSwitchs:(NSMutableArray *)arrayState
{
    if (arrayState.count < 4) {
        return;
    }

    [self.btn_Facebook setImage:([(NSNumber *)arrayState[0] boolValue] == YES)?_imageOn:_imgageOff forState:UIControlStateNormal];
    [self.btn_Twitter setImage:([(NSNumber *)arrayState[1] boolValue] == YES)?_imageOn:_imgageOff forState:UIControlStateNormal];
    [self.btn_FourSquare setImage:([(NSNumber *)arrayState[2] boolValue] == YES)?_imageOn:_imgageOff forState:UIControlStateNormal];
    [self.btn_Tumblr setImage:([(NSNumber *)arrayState[3] boolValue] == YES)?_imageOn:_imgageOff forState:UIControlStateNormal];
    
    NSLog(@"list array state switch: %d",arrayState.count);

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
            [button setImage:[UIImage imageNamed:@"ic_check_on"] forState:UIControlStateNormal];
        }
        else{ // ischecked = NO
            NSLog(@" checked %d = NO", i+1);
            [button setImage:[UIImage imageNamed:@"ic_check"] forState:UIControlStateNormal];
        }

    }
    
}

- (IBAction)buttonSwitchTapper:(UIButton *)button
{
    NSNumber *item = self.listCheckStateOfAllConnections[button.tag - 100];
    BOOL ischecked;
    ischecked = [item boolValue];
    ischecked = !ischecked;
    
    // save change sate of connections
    [self.listCheckStateOfAllConnections removeObjectAtIndex:button.tag - 100];
    item = [NSNumber numberWithBool:ischecked];
    [self.listCheckStateOfAllConnections insertObject:item atIndex:button.tag - 100];
    
    if (ischecked == YES) {
        [button setImage:_imageOn forState:UIControlStateNormal];
    }
    else{ // ischecked = NO
        [button setImage:_imgageOff forState:UIControlStateNormal];
    }

#ifdef DEBUG
    NSLog(@"switch %d is %@",button.tag - 100,([self.listCheckStateOfAllConnections[button.tag - 100] boolValue] == YES)?@"YES":@"NO");
#endif
    
}

- (IBAction)buttonCheckTapper:(UIButton *)button
{
    NSNumber *item = self.listCheckStateOfAllPublishing[button.tag - 1];
    BOOL ischecked;
    ischecked = [item boolValue];
    ischecked = !ischecked;
    
#ifdef DEBUG
    NSLog(@"listCount buttonCheck %d", self.listCheckStateOfAllPublishing.count);
    NSLog(@"button %d checked = %@",button.tag,(ischecked == YES)?@"YES":@"NO");
#endif    
    //change state check for button in array for save after
   // [self.arraylistCheckStateOfFavoriteSpot removeObject:statechecked];
    [self.listCheckStateOfAllPublishing removeObjectAtIndex:button.tag - 1];
    item = [NSNumber numberWithBool:ischecked];
    [self.listCheckStateOfAllPublishing insertObject:item atIndex:button.tag - 1];
    
    if (ischecked == YES) {
        [button setImage:[UIImage imageNamed:@"ic_check_on"] forState:UIControlStateNormal];
    }
    else{ // ischecked = NO
        [button setImage:[UIImage imageNamed:@"ic_check"] forState:UIControlStateNormal];
    }
}

- (void)savelistCheckStateOfAllConnections
{
  // save array self.listCheckStateOfAllConnections nay
}

- (void)savelistCheckStateOfAll
{
  // save array self.listCheckStateOfAllPublishing nay
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

@end
