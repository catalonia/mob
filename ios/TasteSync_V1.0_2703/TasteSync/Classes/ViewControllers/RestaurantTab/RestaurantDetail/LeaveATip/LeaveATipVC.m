//
//  LeaveATipVC.m
//  TasteSync
//
//  Created by Victor on 2/22/13.
//  Copyright (c) 2013 Mobioneer. All rights reserved.
//

#import "LeaveATipVC.h"
#import "CommonHelpers.h"
#import "ResQuestionVC.h"

@interface LeaveATipVC ()<ResShareViewDelegate>
{
    BOOL facebookSelected, twitterSelected;
}
@end

@implementation LeaveATipVC

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        // Custom initialization
    }
    return self;
}

-(id)initWithRestaurantObj:(RestaurantObj*)restaurantObj
{
    self = [super initWithNibName:@"LeaveATipVC" bundle:nil];
    if (self) {
        self.restaurantObj = restaurantObj;
    }
    return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];
    [CommonHelpers setBackgroudImageForView:self.view];
    // Do any additional setup after loading the view from its nib.
    [self initUI];
}

- (void) viewWillAppear:(BOOL)animated
{
    [super viewWillAppear:animated];
    if (_restaurantObj.isSaved) {
        [CommonHelpers setBackgroundImage:[UIImage imageNamed:@"ic_saved_on.png"] forButton:btSave];
        
    }else
    {
        [CommonHelpers setBackgroundImage:[UIImage imageNamed:@"ic_saved.png"] forButton:btSave];
        
    }
    
    [CommonHelpers setBackgroundImage:[UIImage imageNamed:@"ic_bt_leavetip_on.png"] forButton:btLeaveATip];

}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (void) initUI
{
    if (_restaurantObj) {
        lbRestaurantName.text = _restaurantObj.name;
        if (_restaurantObj.isSaved) {
            [CommonHelpers setBackgroundImage:[UIImage imageNamed:@"ic_bt_saverestaurants.png"] forButton:btSave];
            
        }else
        {
            [CommonHelpers setBackgroundImage:[UIImage imageNamed:@"ic_bt_saverestaurants_off.png"] forButton:btSave];
            
        }

    }
}

# pragma mark- IBAction's define

- (IBAction)actionSave:(id)sender
{
    
    if (!_restaurantObj.isSaved) {
        if ([UserDefault userDefault].loginStatus == NotLogin) {
            [[CommonHelpers appDelegate] showLoginDialog];
        }
        else
        {
            //            [CommonHelpers saveRestaurantAlert:tvNote andDelegate:self];
            if (!_restaurantObj.isSaved) {
                
                [CommonHelpers setBackgroundImage:[UIImage imageNamed:@"ic_saved_on.png"] forButton:btSave];
                _restaurantObj.isSaved = YES;
                
                
            }
            
        }
        
    }
}
- (IBAction)actionAsk:(id)sender
{
    ResQuestionVC *vc = [[ResQuestionVC alloc] initWithNibName:@"ResQuestionVC" bundle:nil];
    [self.navigationController pushViewController:vc animated:YES];
}
- (IBAction)actionShareFacebook:(id)sender
{
    if (facebookSelected) {
        [CommonHelpers setBackgroundImage:[UIImage imageNamed:@"facebook_off.png"] forButton:btFacebook];
        facebookSelected = NO;
    }
    else
    {
        [CommonHelpers setBackgroundImage:[UIImage imageNamed:@"facebook.png"] forButton:btFacebook];
        facebookSelected = YES;
    }
}
- (IBAction)actionShareTwitter:(id)sender
{
    if (twitterSelected) {
        [CommonHelpers setBackgroundImage:[UIImage imageNamed:@"twitter_off.png"] forButton:btTwitter];
        twitterSelected = NO;
    }
    else
    {
        [CommonHelpers setBackgroundImage:[UIImage imageNamed:@"twitter.png"] forButton:btTwitter];
        twitterSelected = YES;
    }
}
- (IBAction)actionLeaveATip:(id)sender
{
    if ([UserDefault userDefault].loginStatus == NotLogin) {
        [[CommonHelpers appDelegate] showLoginDialog];
    }
    else
    {
        
        CRequest* request = [[CRequest alloc]initWithURL:@"savetips" RQType:RequestTypePost RQData:RequestDataRestaurant RQCategory:ApplicationForm];
        request.delegate = self;
        [request setFormPostValue:[UserDefault userDefault].userID forKey:@"userid"];
        [request setFormPostValue:_restaurantObj.uid forKey:@"restaurantId"];
        [request setFormPostValue:tvTip.text forKey:@"tipText"];
        [request startFormRequest];
        
        [CommonHelpers setBackgroundImage:[UIImage imageNamed:@"ic_bt_leavetip_on.png"] forButton:btLeaveATip];

    }
}
- (IBAction)actionNewsfeed:(id)sender
{
    [CommonHelpers showShareView:self andObj:_restaurantObj];
}
- (IBAction)actionBack:(id)sender
{
    [self.navigationController popViewControllerAnimated:YES];
}


#pragma mark- UITextViewDelegate

- (BOOL)textViewShouldBeginEditing:(UITextView *)textView
{
    lbTvTip.hidden = YES;
    [CommonHelpers setBackgroundImage:[UIImage imageNamed:@"ic_bt_leavetip.png"] forButton:btLeaveATip];

//    textView.text = @"";
    [UIView animateWithDuration:0.4
                          delay:0
                        options: UIViewAnimationCurveEaseIn
                     animations:^{
                         self.view.frame=CGRectMake(self.view.frame.origin.x,-100,self.view.frame.size.width, self.view.frame.size.height);
                     }
                     completion:^(BOOL finished){
                         debug(@"move done");
                         lbTvTip.hidden = YES;
                        
                         
                     }];
    return YES;

}
- (BOOL)textViewShouldEndEditing:(UITextView *)textView
{
    return YES;

}

- (void)textViewDidBeginEditing:(UITextView *)textView
{

}

- (void)textViewDidEndEditing:(UITextView *)textView
{
    
}

- (BOOL)textView:(UITextView *)textView shouldChangeTextInRange:(NSRange)range replacementText:(NSString *)text
{
    return YES;
}
- (void)textViewDidChange:(UITextView *)textView
{
    
}

- (void)textViewDidChangeSelection:(UITextView *)textView
{
    
}

- (void) touchesBegan:(NSSet *)touches withEvent:(UIEvent *)event
{
    [self hideKeyboard];
}

#pragma mark - Others

- (void) hideKeyboard
{
    [tvTip resignFirstResponder];
    [UIView animateWithDuration:0.4
                          delay:0
                        options: UIViewAnimationCurveEaseIn
                     animations:^{
                         self.view.frame=CGRectMake(self.view.frame.origin.x,0,self.view.frame.size.width, self.view.frame.size.height);
                     }
                     completion:^(BOOL finished){
                         debug(@"move done");
                         
                         
                     }];

}

-(void)responseData:(NSData *)data WithKey:(int)key UserData:(id)userData
{
    if (data != nil) {
        tvTip.text = @"";
        [CommonHelpers showInfoAlertWithTitle:@"TasteSync" message:@"Success!" delegate:nil tag:0];
    }
}
@end
