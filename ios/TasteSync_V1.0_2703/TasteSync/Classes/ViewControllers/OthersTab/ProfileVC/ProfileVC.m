//
//  ProfileVC.m
//  TasteSync
//
//  Created by Victor on 12/19/12.
//  Copyright (c) 2012 Mobioneer. All rights reserved.
//

#import "ProfileVC.h"
#import "CommonHelpers.h"
#import "SelfProfileVC.h"
#import "UsersFollowing.h"
#import "RestaurantDetailVC.h"
#import "FacebookFriendsVC.h"
#import "TasteSyncFriends.h"
#import "blogger.h"
#import "PromptSignUpVC.h"
#import "DetailedStoryVC.h"
#import "EditAboutMeVC.h"
#import "RestaurantListsVC.h"
#import "UserActivityProfileCell.h"
@interface ProfileVC ()<UIAlertViewDelegate>
{
    
    BOOL trusted,follow;
}
- (IBAction)actionBack:(id)sender;
- (IBAction)actionNewsfeed:(id)sender;
- (IBAction)actionCountinueReading:(id)sender;

@end

@implementation ProfileVC
@synthesize user=_user;

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
    [self.navigationController setNavigationBarHidden:YES];
    
    [scrollView setContentSize:CGSizeMake(320, 750)];
    
    [self configView];
    
   
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (void) viewWillAppear:(BOOL)animated
{
    [super viewWillAppear:animated];
    follow = YES;
    trusted = YES;
 

}

- (void) configView
{
   lbName.text = [NSString stringWithFormat:@"%@ %@", _user.firstname, _user.lastname];

    if (_user.city == nil) {
        _user.city = @"NA";
    }
    if (_user.state == nil) {
        _user.state = @"NA";
    }
    lbDetail.text = [NSString stringWithFormat:@"%@, %@", _user.city, _user.state];
    ivAvatar.image = _user.avatar;
    if ([UserDefault userDefault].loginStatus == NotLogin) {
        lbYouFollow.hidden = YES;
    }
    
    lbAboutDetail.text = @"Favorite Cuisines - Indian, Ethiopian \n some text about user...more";
}

# pragma mark - IBAction's define

- (IBAction)actionReportUser:(id)sender
{
    debug(@"report msg -> %@", tvReportUser.text);
    if (tvReportUser.text.length>0) {
        viewReportUser.hidden = YES;
        [tvReportUser resignFirstResponder];
    }
   
}

- (IBAction)actionCancel:(id)sender
{
    viewReportUser.hidden = YES;
    [tvReportUser resignFirstResponder];

}

- (IBAction)actionCancelSendMsg:(id)sender
{
    [tvSendMsg resignFirstResponder];
    viewSendMsg.hidden = YES;
}

- (IBAction)actionSendMsg:(id)sender
{
    if (tvSendMsg.text.length >0) {
        [tvSendMsg resignFirstResponder];
        viewSendMsg.hidden = YES;
    }
}

- (IBAction)actionTrusted:(id)sender
{
    if (trusted) {
        lbTrust.text= @"Add Friend";
        trusted = NO;
    }else
    {
        lbTrust.text = @"Trusted";
        trusted = YES;
    }
}
- (IBAction)actionReport:(id)sender
{
    debug(@"actionReport");
    
    if ([UserDefault userDefault].loginStatus == NotLogin) {
        [self alertSignUp];
    }
    else
    {
        
        debug(@"report view appear");        
        viewReportUser.hidden = NO;
        [tvReportUser becomeFirstResponder];
    }
}
- (IBAction)actionUnfollow:(id)sender
{
    if (follow) {
        lbFollow.text= @"Follow";
        follow = NO;
        lbYouFollow.hidden = YES;

    }else
    {
        lbFollow.text = @"Unfollow";
        follow = YES;
        lbYouFollow.hidden = NO;

    }
}
- (IBAction)actionSend:(id)sender
{
    if ([UserDefault userDefault].loginStatus == NotLogin) {
        [self alertSignUp];
    }
    else
    {
        /*
        MFMessageComposeViewController *viewController = [[MFMessageComposeViewController alloc] init];
        if ([MFMessageComposeViewController canSendText]) {
            NSLog(@"message can Sent Text");
            viewController.body = @"Send message from my app";
            viewController.recipients = [NSArray arrayWithObjects:@"12345678", @"87654321", nil];
            viewController.messageComposeDelegate = self;
            // [self.navigationController pushViewController:viewController animated:YES];
            [self presentModalViewController:viewController animated:YES];
        }
         */
        
        viewSendMsg.hidden = NO;
        [tvSendMsg becomeFirstResponder];
    }

}
- (IBAction)actionFollowing:(id)sender
{
    UsersFollowing *vc = [[UsersFollowing alloc]initWithNibName:@"UsersFollowing" bundle:nil];
   
    vc.viewFollowing = YES;
    vc.user = _user;
    [self.navigationController pushViewController:vc animated:YES];
}
- (IBAction)actionFollowers:(id)sender
{
    UsersFollowing *vc = [[UsersFollowing alloc]initWithNibName:@"UsersFollowing" bundle:nil];
    vc.viewFollowing = NO;
    vc.user = _user;
    [self.navigationController pushViewController:vc animated:YES];

}
- (IBAction)actionFriends:(id)sender
{
    TasteSyncFriends *vc = [[TasteSyncFriends alloc]initWithNibName:@"TasteSyncFriends" bundle:nil];
    vc.user = self.user;
    [self.navigationController pushViewController:vc animated:YES];

    
}

- (IBAction)actionRestaurant:(id)sender
{
    debug(@"actionRestaurant");
    /*
    RestaurantObj *obj = [[RestaurantObj alloc] init];
    obj.name = @"Test Restaurant";
    [[[CommonHelpers appDelegate] tabbarBaseVC] actionSelectRestaurant:obj checkBack:YES];
     
     */
    RestaurantListsVC *vc = [[RestaurantListsVC alloc] initWithNibName:@"RestaurantListsVC" bundle:nil];
    vc.userObj = _user;
    [self.navigationController pushViewController:vc animated:YES];
}
- (IBAction)actionMoreRestaurant:(id)sender
{
    RestaurantListsVC *vc = [[RestaurantListsVC alloc] initWithNibName:@"RestaurantListsVC" bundle:nil];
    vc.userObj = _user;
    [self.navigationController pushViewController:vc animated:YES];
}



- (IBAction)actionCountinueReading:(id)sender
{
    EditAboutMeVC *vc = [[EditAboutMeVC alloc] initWithNibName:@"EditAboutMeVC" bundle:nil];
    vc.isYourProfile = NO;
    [self.navigationController pushViewController:vc animated:YES];
}

- (IBAction)actionBack:(id)sender
{
    [self.navigationController popViewControllerAnimated:YES];
}
- (IBAction)actionNewsfeed:(id)sender
{
//    [[[CommonHelpers appDelegate] tabbarBaseVC] actionNewsfeed];
    
    [self shareProfile];
}



- (IBAction)promptSignUp:(id)sender
{
    PromptSignUpVC *promtpSignUpVC = [[PromptSignUpVC alloc]initWithNibName:@"PromptSignUpVC" bundle:[NSBundle mainBundle]];
    [self.navigationController pushViewController:promtpSignUpVC animated:NO];
}


#pragma mark - MFMessageDelegate

- (void)messageComposeViewController:(MFMessageComposeViewController *)controller didFinishWithResult:(MessageComposeResult)result
{
	switch (result) {
		case MessageComposeResultCancelled:
			NSLog(@"message Cancelled");
			break;
		case MessageComposeResultFailed:
            NSLog(@"message Faild");
			break;
		case MessageComposeResultSent:
            NSLog(@"message Result Sent");
			break;
		default:
            NSLog(@"message state other");
			break;
	}
    
	[self dismissModalViewControllerAnimated:YES];
}


- (void)shareProfile
{
    UIActionSheet *actionSheet = [[UIActionSheet alloc]initWithTitle:APP_NAME delegate:self cancelButtonTitle:@"Cancel" destructiveButtonTitle:nil otherButtonTitles:@"Facebook",@"Twitter", @"Tumblr",@"Email", nil];
    actionSheet.actionSheetStyle = UIActionSheetStyleBlackOpaque;
    
    
    [actionSheet showFromTabBar:self.tabBarController.tabBar];
}





#pragma mark - UITableViewDataSource, UITableViewDelegate

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section
{
    return 10;
}



- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    static NSString *identifier = @"user_activity_profile_cell";
    UserActivityProfileCell *cell = [tableView dequeueReusableCellWithIdentifier:identifier];
    if (cell == nil) {
        
     
      cell = (UserActivityProfileCell *) [[[NSBundle mainBundle] loadNibNamed:@"UserActivityProfileCell" owner:self options:nil] objectAtIndex:0];
    }
    
    UserActivityObj *obj = [[UserActivityObj alloc] init];
    UserObj *user = [[UserObj alloc] init];
    user.firstname = @"Victor";
    user.lastname = @"Ngo";
    user.avatar = [UIImage imageNamed:@"avatar.png"];
    obj.user = user;
    obj.content = @"recommended ...";    
    
    [cell initCell:obj];
    return cell;
}

- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath
{
    [tableView deselectRowAtIndexPath:indexPath animated:YES];
    DetailedStoryVC *detailStoryVC = [[DetailedStoryVC alloc]initWithNibName:@"DetailedStoryVC" bundle: [NSBundle mainBundle]];
    [self.navigationController pushViewController:detailStoryVC animated:YES];
}

- (void) alertSignUp
{
    UIAlertView *alertView = [[UIAlertView alloc] initWithTitle:APP_NAME message:@"Please sign-up to use this function." delegate:self cancelButtonTitle:@"Cancel" otherButtonTitles:@"OK", nil];
    
    alertView.tag = 100;
    [alertView show];
}

# pragma mark - UIAlertViewDelegate


- (void)alertView:(UIAlertView *)alertView clickedButtonAtIndex:(NSInteger)buttonIndex
{
    if (buttonIndex == 1) {
        if (alertView.tag ==100) {
            [[CommonHelpers appDelegate] showLoginDialog];

        }
    }
    
}

#pragma mark - UIActionSheetDelegate

- (void)actionSheet:(UIActionSheet *)actionSheet clickedButtonAtIndex:(NSInteger)buttonIndex
{
    debug(@"actionSheetDelegate - buttonIndex -> %d", buttonIndex);

    switch (buttonIndex) {
        case 0:
        {
        }
            break;
            
        default:
            break;
    }
}

- (void) touchesBegan:(NSSet *)touches withEvent:(UIEvent *)event
{
    [tvReportUser resignFirstResponder];
}

#pragma mark - UITextViewDelegate

- (BOOL)textViewShouldBeginEditing:(UITextView *)textView
{
    
    if (textView.text.length != 0) {
       
    }
    else
    {
        if (textView == tvReportUser) {
            lbHoverReport.hidden = NO;
        }else if (textView == tvSendMsg)
        {
            lbHoverSendMsg.hidden = NO;
        }

    }

    return YES;
}

- (void)textViewDidBeginEditing:(UITextView *)textView
{
    
}

- (BOOL)textView:(UITextView *)textView shouldChangeTextInRange:(NSRange)range replacementText:(NSString *)text
{
    if (textView == tvReportUser) {
        lbHoverReport.hidden = YES;
    }else if (textView == tvSendMsg)
    {
        lbHoverSendMsg.hidden = YES;
    }
    
    return YES;
}



@end
