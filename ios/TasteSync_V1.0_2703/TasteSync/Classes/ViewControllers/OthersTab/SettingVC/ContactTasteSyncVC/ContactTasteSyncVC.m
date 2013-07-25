//
//  ContactTasteSyncVC.m
//  TasteSync
//
//  Created by Mobioneer_TT 1 on 12/19/12.
//  Copyright (c) 2012 Mobioneer. All rights reserved.
//
//
#import "ContactTasteSyncVC.h"
#import "CommonHelpers.h"

@interface ContactTasteSyncVC ()
{
    int ContactSessionStatus;
}

typedef enum _ContactSession
{
    ContactSessionReportBugs    =   1,
    ContactSessionFeedback  =   2,
    ContactSessionRestaurantData    =   3,
    ContactSessionRequestBlogger    =   4
} ContactSession ;

- (IBAction)actionBack:(id)sender;
- (IBAction)actionNewsfeed:(id)sender;

@end

@implementation ContactTasteSyncVC

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


#pragma mark- IBAction's Define

- (IBAction)actionBack:(id)sender
{
    [self.navigationController popViewControllerAnimated:YES];
}
- (IBAction)actionNewsfeed:(id)sender
{
    [[[CommonHelpers appDelegate] tabbarBaseVC] actionNewsfeed];
}

- (IBAction)actionReportBugs:(id)sender
{
    ContactSessionStatus = ContactSessionReportBugs;
    
    [self setUIAfterChooseSession];

}
- (IBAction)actionFeedback:(id)sender
{
    ContactSessionStatus = ContactSessionFeedback;

    [self setUIAfterChooseSession];

}
- (IBAction)actionRestaurantData:(id)sender
{
    ContactSessionStatus = ContactSessionRestaurantData;

    [self setUIAfterChooseSession];

}
- (IBAction)actionRequestBlogger:(id)sender
{
    ContactSessionStatus = ContactSessionRequestBlogger;

    [self setUIAfterChooseSession];

}
- (IBAction)actionSubmit:(id)sender
{
    if ([tvContent.text isEqualToString:@"Input some text here"] || (tvContent.text.length == 0)) {
        
        [CommonHelpers showInfoAlertWithTitle:APP_NAME message:@"Text content is required." delegate:nil tag:0];
        
        [tvContent becomeFirstResponder];
    }
    else
    {
        [self hideKeyboard];
    }
    
    
    
}

#pragma mark - UITextViewDelegate

- (BOOL)textViewShouldBeginEditing:(UITextView *)textView
{
    
    textView.text = @"";
    
    [UIView animateWithDuration:0.4
                          delay:0
                        options: UIViewAnimationCurveEaseIn
                     animations:^{
                         viewMain.frame=CGRectMake(viewMain.frame.origin.x,-50,viewMain.frame.size.width, viewMain.frame.size.height);
                     }
                     completion:^(BOOL finished){
                         debug(@"move done");
                         
                         
                     }];

    
       return YES;
}


- (BOOL)textView:(UITextView *)textView shouldChangeTextInRange:(NSRange)range replacementText:(NSString *)text
{
       return YES;
}

#pragma mark- Others

- (void) setUIAfterChooseSession
{
   
    
    switch (ContactSessionStatus) {
        case ContactSessionReportBugs:
        {
            
            ivBgReport.image = [UIImage imageNamed:@"bg_report1.png"];
        }
            break;
        case ContactSessionFeedback:
        {
            ivBgReport.image = [UIImage imageNamed:@"bg_report2.png"];
        

        }
            break;
        case ContactSessionRestaurantData:
        {
            ivBgReport.image = [UIImage imageNamed:@"bg_report3.png"];
        
        }
            break;
        case ContactSessionRequestBlogger:
        {
            ivBgReport.image = [UIImage imageNamed:@"bg_report4.png"];
        }
            break;
            
        default:
            break;
    }
}
- (void) hideKeyboard
{
    [tvContent resignFirstResponder];
    [UIView animateWithDuration:0.4
                          delay:0
                        options: UIViewAnimationCurveEaseIn
                     animations:^{
                         viewMain.frame=CGRectMake(viewMain.frame.origin.x,0,viewMain.frame.size.width, viewMain.frame.size.height);
                     }
                     completion:^(BOOL finished){
                         debug(@"move done");
                         
                         
                     }];

}

- (void) touchesBegan:(NSSet *)touches withEvent:(UIEvent *)event
{
    [self hideKeyboard];
}

@end
