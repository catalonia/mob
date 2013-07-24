//
//  EditAboutMeVC.m
//  TasteSync
//
//  Created by Victor on 2/5/13.
//  Copyright (c) 2013 Mobioneer. All rights reserved.
//

#import "EditAboutMeVC.h"
#import "CommonHelpers.h"

@interface EditAboutMeVC ()<UITextViewDelegate,UIAlertViewDelegate>
{
    __weak IBOutlet UITextView *tvAbout;
    __weak IBOutlet UIButton *btBack,*btEdit,*btDone;
}
- (IBAction)actionBack:(id)sender;
- (IBAction)actionDone:(id)sender;

@end

@implementation EditAboutMeVC

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
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (void) viewWillAppear:(BOOL)animated
{
    [super viewWillAppear:animated];
    if (_isYourProfile) {
        btDone.hidden = YES;
        btEdit.hidden = NO;
    }
    else
    {
        btEdit.hidden = YES;
        btDone.hidden = YES;
    }
}

#pragma mark - IBAction's Define

- (IBAction)actionBack:(id)sender
{
    [self.navigationController popViewControllerAnimated:YES];
}
- (IBAction)actionEdit:(id)sender
{
    btDone.hidden = NO;
    btEdit.hidden = YES;
    [tvAbout becomeFirstResponder];
}
- (IBAction)actionDone:(id)sender
{
    if ([CommonHelpers trim:tvAbout.text].length == 0) {
        [CommonHelpers showInfoAlertWithTitle:APP_NAME message:@"This content is invalided" delegate:self tag:1];
        
        return ;
    }
    btDone.hidden = NO;
    btEdit.hidden = YES;
    [self.navigationController popViewControllerAnimated:YES];
}

#pragma mark - UIAlerViewDelegate

- (void)alertView:(UIAlertView *)alertView clickedButtonAtIndex:(NSInteger)buttonIndex
{
    [tvAbout becomeFirstResponder];
}

#pragma mark - UITextViewDelegate

- (BOOL)textViewShouldBeginEditing:(UITextView *)textView
{
    
    
    if (_isYourProfile) {
        return YES;
    }
    
    return NO;
}


- (void) touchesBegan:(NSSet *)touches withEvent:(UIEvent *)event
{
    [tvAbout resignFirstResponder];
}

@end
