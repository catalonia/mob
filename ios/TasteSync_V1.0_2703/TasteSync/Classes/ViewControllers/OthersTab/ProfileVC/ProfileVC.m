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
    
    NSString* facebookURL, *twiterURL, *blogURL;
    RestaurantObj *_restaurantObj1;
    RestaurantObj *_restaurantObj2;
    RestaurantObj *_restaurantObj3;
    NSMutableArray *_arryRestaurantsVisible;
    NSMutableArray *_arryListRestaurantShort;
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
    facebookURL     = @"";
    twiterURL       = @"";
    blogURL    = @"";
    
    _restaurantObj1 = [[RestaurantObj alloc]init];
    _restaurantObj2 = [[RestaurantObj alloc]init];
    _restaurantObj3 = [[RestaurantObj alloc]init];
    _arryRestaurantsVisible = [[NSMutableArray alloc]init];
    _arryListRestaurantShort = [[NSMutableArray alloc]init];
    
    [CommonHelpers setBackgroudImageForView:self.view];
    [self.navigationController setNavigationBarHidden:YES];
    
    [scrollView setContentSize:CGSizeMake(320, 630)];
    recentlyView.hidden = YES;
    
    CRequest* request = [[CRequest alloc]initWithURL:@"getHomeProfile" RQType:RequestTypePost RQData:RequestDataUser RQCategory:ApplicationForm withKey:1];
    request.delegate = self;
    [request setFormPostValue:self.userID forKey:@"userId"];
    [request startFormRequest];
    
    CRequest* request2 = [[CRequest alloc]initWithURL:@"showFollowStatus" RQType:RequestTypePost RQData:RequestDataUser RQCategory:ApplicationForm withKey:2];
    request2.delegate = self;
    [request2 setFormPostValue:[UserDefault userDefault].userID forKey:@"followerUserId"];
    [request2 setFormPostValue:self.userID forKey:@"followeeUserId"];
    [request2 startFormRequest];
    
    CRequest* request3 = [[CRequest alloc]initWithURL:@"showTrustedFriend" RQType:RequestTypePost RQData:RequestDataUser RQCategory:ApplicationForm withKey:3];
    request3.delegate = self;
    [request3 setFormPostValue:[UserDefault userDefault].userID forKey:@"userId"];
    [request3 setFormPostValue:self.userID forKey:@"destUserId"];
    [request3 startFormRequest];
    
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
 

}

- (void) configView
{
   lbName.text = [NSString stringWithFormat:@"%@ %@", _user.firstname, _user.lastname];

    if (_user.city == nil) {
        _user.city = self.user.hometown_location;
    }
    if (_user.state == nil) {
        _user.state = self.user.location;
    }
    lbDetail.text = [NSString stringWithFormat:@"%@, %@", _user.city, _user.state];
    ivAvatar.image = _user.avatar;
    if ([UserDefault userDefault].loginStatus == NotLogin) {
        lbYouFollow.hidden = YES;
    }
}

# pragma mark - IBAction's define

- (IBAction)actionReportUser:(id)sender
{
    debug(@"report msg -> %@", tvReportUser.text);
    if (tvReportUser.text.length>0) {
        
        CRequest* request = [[CRequest alloc]initWithURL:@"submitUserReport" RQType:RequestTypePost RQData:RequestDataUser RQCategory:ApplicationForm];
        request.delegate = self;
        [request setFormPostValue:[UserDefault userDefault].userID forKey:@"userId"];
        [request setFormPostValue:self.userID forKey:@"reportedUserId"];
        [request setFormPostValue:tvSendMsg.text forKey:@"reason"];
        [request startFormRequest];
        
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
    if (tvSendMsg.text.length > 0) {
        
        CRequest* request = [[CRequest alloc]initWithURL:@"sendMessageToUser" RQType:RequestTypePost RQData:RequestDataUser RQCategory:ApplicationForm];
        request.delegate = self;
        [request setFormPostValue:[UserDefault userDefault].userID forKey:@"senderID"];
        [request setFormPostValue:self.userID forKey:@"recipientID"];
        [request setFormPostValue:tvSendMsg.text forKey:@"content"];
        [request startFormRequest];
        
        [tvSendMsg resignFirstResponder];
        viewSendMsg.hidden = YES;
    }
}

- (IBAction)actionTrusted:(id)sender
{
    NSString* trustedFriend;
    if (trusted) {
        trustedFriend = @"0";
    }else
    {
        trustedFriend = @"1";
    }
    
    CRequest* request = [[CRequest alloc]initWithURL:@"submitTrustedFriendStatusChange" RQType:RequestTypePost RQData:RequestDataUser RQCategory:ApplicationForm withKey:5];
    request.delegate = self;
    [request setFormPostValue:[UserDefault userDefault].userID forKey:@"userId"];
    [request setFormPostValue:self.userID forKey:@"destUserId"];
    [request setFormPostValue:trustedFriend forKey:@"trustedFriendStatus"];
    [request startFormRequest];
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
    NSString* followStatus;
    if (follow) {
        followStatus = @"0";

    }else
    {
        followStatus = @"1";
    }
    
    CRequest* request = [[CRequest alloc]initWithURL:@"submitFollowUserStatusChange" RQType:RequestTypePost RQData:RequestDataUser RQCategory:ApplicationForm withKey:4];
    request.delegate = self;
    [request setFormPostValue:[UserDefault userDefault].userID forKey:@"followerUserId"];
    [request setFormPostValue:self.userID forKey:@"followeeUserId"];
    [request setFormPostValue:followStatus forKey:@"statusFlag"];
    [request startFormRequest];
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
   
    vc.viewFollowing = NO;
    vc.user = _user;
    [self.navigationController pushViewController:vc animated:YES];
}
- (IBAction)actionFollowers:(id)sender
{
    UsersFollowing *vc = [[UsersFollowing alloc]initWithNibName:@"UsersFollowing" bundle:nil];
    vc.viewFollowing = YES;
    vc.user = _user;
    [self.navigationController pushViewController:vc animated:YES];

}
- (IBAction)actionFriends:(id)sender
{
    TasteSyncFriends *vc = [[TasteSyncFriends alloc]initWithNibName:@"TasteSyncFriends" bundle:nil];
    vc.user = self.user;
    vc.userID = self.userID;
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

- (IBAction)actionFacebook:(id)sender
{
    if (![facebookURL isEqualToString:@""] && facebookURL != NULL) {
        NSURL *url = [ [ NSURL alloc ] initWithString: facebookURL];
        [[UIApplication sharedApplication] openURL:url];
    }
    
}
- (IBAction)actionTwitter:(id)sender
{
    if (![twiterURL isEqualToString:@""] && twiterURL != NULL) {
        NSURL *url = [ [ NSURL alloc ] initWithString: twiterURL ];
        [[UIApplication sharedApplication] openURL:url];
    }
}
- (IBAction)actionBlog:(id)sender
{
    if (![blogURL isEqualToString:@""] && blogURL != NULL) {
        NSURL *url = [ [ NSURL alloc ] initWithString: blogURL ];
        [[UIApplication sharedApplication] openURL:url];
    }
}

- (IBAction)actionCountinueReading:(id)sender
{
    EditAboutMeVC *vc = [[EditAboutMeVC alloc] initWithNibName:@"EditAboutMeVC" bundle:nil];
    vc.isYourProfile = NO;
    vc.aboutText = lbAboutDetail.text;
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

-(void)responseData:(NSData *)data WithKey:(int)key UserData:(id)userData
{
    NSString* response = [[NSString alloc]initWithData:data encoding:NSUTF8StringEncoding];
    if (key == 1) {
        NSLog(@"Response1: %@",response);
        if (response != NULL) {
            NSDictionary* dic = [response objectFromJSONString];
            lbFollowing.text = [dic objectForKey:@"numFollowees"];
            lbFollowers.text = [dic objectForKey:@"numFollowers"];
            lbFriends.text = [dic objectForKey:@"numFriendsOnTs"];
            lbPoints.text = [dic objectForKey:@"numPoints"];
            lbAboutDetail.text = [dic objectForKey:@"aboutMeText"];
            
            
            facebookURL = [dic objectForKey:@"facebookUrl"];
            twiterURL   = [dic objectForKey:@"twitterUrl"];
            blogURL     = [dic objectForKey:@"blogUrl"];
            
            NSArray* restaurantArray = [dic objectForKey:@"restaurantList"];
            if ([restaurantArray count] == 0) {
                lbRestaurant1.hidden = YES;
                lbRestaurant2.hidden = YES;
                lbRestaurant3.hidden = YES;
                btRestaurant1.hidden = YES;
                btRestaurant2.hidden = YES;
                btRestaurant3.hidden = YES;
                
            }
            if ([restaurantArray count] == 1) {
                lbRestaurant2.hidden = YES;
                lbRestaurant3.hidden = YES;
                btRestaurant2.hidden = YES;
                btRestaurant3.hidden = YES;
                
                NSDictionary* dicRes = [restaurantArray objectAtIndex:0];
                _restaurantObj1.uid = [dicRes objectForKey:@"id"];
                _restaurantObj1.name = [dicRes objectForKey:@"name"];
                NSDictionary* photo = [dicRes objectForKey:@"photo"];
                if (photo != NULL) {
                    NSString* server = [photo objectForKey:@"prefix"];
                    NSString* name = [photo objectForKey:@"suffix"];
                    if (name != (id)[NSNull null]) {
                        NSRange range = NSMakeRange(0, 1);
                        name = [name stringByReplacingCharactersInRange:range withString:@""];
                        _restaurantObj1.imageUrl = [server stringByAppendingString:name];
                    }
                    else
                        _restaurantObj1.imageUrl = @"";
                    
                    NSLog(@"restaurantObj1.imageUrl: %@", _restaurantObj1.imageUrl);
                }
                
                lbRestaurant1.text = _restaurantObj1.name;
                btRestaurant1.backgroundColor = [UIColor colorWithPatternImage:[[UIImage alloc] initWithData:[NSData dataWithContentsOfURL:[NSURL URLWithString:_restaurantObj1.imageUrl]]]];
                
                [_arryRestaurantsVisible addObject:_restaurantObj1];
                
                
            }
            if ([restaurantArray count] == 2) {
                lbRestaurant3.hidden = YES;
                btRestaurant3.hidden = YES;
                
                NSDictionary* dicRes = [restaurantArray objectAtIndex:0];
                _restaurantObj1.uid = [dicRes objectForKey:@"id"];
                _restaurantObj1.name = [dicRes objectForKey:@"name"];
                NSDictionary* photo = [dicRes objectForKey:@"photo"];
                if (photo != NULL) {
                    NSString* server = [photo objectForKey:@"prefix"];
                    NSString* name = [photo objectForKey:@"suffix"];
                    if (name != (id)[NSNull null]) {
                        NSRange range = NSMakeRange(0, 1);
                        name = [name stringByReplacingCharactersInRange:range withString:@""];
                        _restaurantObj1.imageUrl = [server stringByAppendingString:name];
                    }
                    else
                        _restaurantObj1.imageUrl = @"";
                    
                    NSLog(@"restaurantObj1.imageUrl: %@", _restaurantObj1.imageUrl);
                }
                lbRestaurant1.text = _restaurantObj1.name;
                NSLog(@"lbRestaurant1.text: %@", [dicRes objectForKey:@"name"]);
                btRestaurant1.backgroundColor = [UIColor colorWithPatternImage:[[UIImage alloc] initWithData:[NSData dataWithContentsOfURL:[NSURL URLWithString:_restaurantObj1.imageUrl]]]];
                [_arryRestaurantsVisible addObject:_restaurantObj1];
                
                NSDictionary* dicRes2 = [restaurantArray objectAtIndex:1];
                _restaurantObj2.uid = [dicRes2 objectForKey:@"id"];
                _restaurantObj2.name = [dicRes2 objectForKey:@"name"];
                NSDictionary* photo2 = [dicRes2 objectForKey:@"photo"];
                if (photo2 != NULL) {
                    NSString* server = [photo2 objectForKey:@"prefix"];
                    NSString* name = [photo2 objectForKey:@"suffix"];
                    if (name != (id)[NSNull null]) {
                        NSRange range = NSMakeRange(0, 1);
                        name = [name stringByReplacingCharactersInRange:range withString:@""];
                        _restaurantObj2.imageUrl = [server stringByAppendingString:name];
                    }
                    else
                        _restaurantObj2.imageUrl = @"";
                    
                    NSLog(@"restaurantObj1.imageUrl: %@", _restaurantObj2.imageUrl);
                }
                lbRestaurant2.text = _restaurantObj2.name;
                btRestaurant2.backgroundColor = [UIColor colorWithPatternImage:[[UIImage alloc] initWithData:[NSData dataWithContentsOfURL:[NSURL URLWithString:_restaurantObj2.imageUrl]]]];
                [_arryRestaurantsVisible addObject:_restaurantObj2];
                
            }
            if ([restaurantArray count] == 3) {
                NSDictionary* dicRes = [restaurantArray objectAtIndex:0];
                _restaurantObj1.uid = [dicRes objectForKey:@"id"];
                _restaurantObj1.name = [dicRes objectForKey:@"name"];
                NSDictionary* photo = [dicRes objectForKey:@"photo"];
                if (photo != NULL) {
                    NSString* server = [photo objectForKey:@"prefix"];
                    NSString* name = [photo objectForKey:@"suffix"];
                    if (name != (id)[NSNull null]) {
                        NSRange range = NSMakeRange(0, 1);
                        name = [name stringByReplacingCharactersInRange:range withString:@""];
                        _restaurantObj1.imageUrl = [server stringByAppendingString:name];
                    }
                    else
                        _restaurantObj1.imageUrl = @"";
                    
                    NSLog(@"restaurantObj1.imageUrl: %@", _restaurantObj1.imageUrl);
                }
                lbRestaurant1.text = _restaurantObj1.name;
                btRestaurant1.backgroundColor = [UIColor colorWithPatternImage:[[UIImage alloc] initWithData:[NSData dataWithContentsOfURL:[NSURL URLWithString:_restaurantObj1.imageUrl]]]];
                [_arryRestaurantsVisible addObject:_restaurantObj1];
                
                NSDictionary* dicRes2 = [restaurantArray objectAtIndex:1];
                _restaurantObj2.uid = [dicRes2 objectForKey:@"id"];
                _restaurantObj2.name = [dicRes2 objectForKey:@"name"];
                NSDictionary* photo2 = [dicRes2 objectForKey:@"photo"];
                if (photo2 != NULL) {
                    NSString* server = [photo2 objectForKey:@"prefix"];
                    NSString* name = [photo2 objectForKey:@"suffix"];
                    if (name != (id)[NSNull null]) {
                        NSRange range = NSMakeRange(0, 1);
                        name = [name stringByReplacingCharactersInRange:range withString:@""];
                        _restaurantObj2.imageUrl = [server stringByAppendingString:name];
                    }
                    else
                        _restaurantObj2.imageUrl = @"";
                    
                    NSLog(@"restaurantObj1.imageUrl: %@", _restaurantObj2.imageUrl);
                }
                lbRestaurant2.text = _restaurantObj2.name;
                btRestaurant2.backgroundColor = [UIColor colorWithPatternImage:[[UIImage alloc] initWithData:[NSData dataWithContentsOfURL:[NSURL URLWithString:_restaurantObj2.imageUrl]]]];
                [_arryRestaurantsVisible addObject:_restaurantObj2];
                
                NSDictionary* dicRes3 = [restaurantArray objectAtIndex:2];
                _restaurantObj3.uid = [dicRes3 objectForKey:@"id"];
                _restaurantObj3.name = [dicRes3 objectForKey:@"name"];
                NSDictionary* photo3 = [dicRes3 objectForKey:@"photo"];
                if (photo3 != NULL) {
                    NSString* server = [photo3 objectForKey:@"prefix"];
                    NSString* name = [photo3 objectForKey:@"suffix"];
                    if (name != (id)[NSNull null]) {
                        NSRange range = NSMakeRange(0, 1);
                        name = [name stringByReplacingCharactersInRange:range withString:@""];
                        _restaurantObj3.imageUrl = [server stringByAppendingString:name];
                    }
                    else
                        _restaurantObj3.imageUrl = @"";
                    
                    NSLog(@"restaurantObj1.imageUrl: %@", _restaurantObj3.imageUrl);
                }
                lbRestaurant3.text = _restaurantObj3.name;
                btRestaurant3.backgroundColor = [UIColor colorWithPatternImage:[[UIImage alloc] initWithData:[NSData dataWithContentsOfURL:[NSURL URLWithString:_restaurantObj3.imageUrl]]]];
                [_arryRestaurantsVisible addObject:_restaurantObj3];
            }
        }
    }
    if (key == 2) {
        NSLog(@"Response2: %@",response);
        NSDictionary* dic = [response objectFromJSONString];
        NSString* str = [dic objectForKey:@"successMsg"];
        if (str != (id)[NSNull null] && str != NULL) {
            NSLog(@"UserID_Profile: %@", str);
            
            if ([str isEqualToString:@"1"]) {
                follow = YES;
                lbFollow.text = @"Unfollow";
                lbYouFollow.hidden = NO;
            }
            else
            {
                follow = NO;
                lbFollow.text= @"Follow";
                lbYouFollow.hidden = YES;
            }
        }
    }
    if (key == 3) {
        NSLog(@"Response3: %@",response);
        NSDictionary* dic = [response objectFromJSONString];
        NSString* str = [dic objectForKey:@"successMsg"];
        if (str != (id)[NSNull null] && str != NULL) {
            NSLog(@"UserID_Profile: %@", str);
            if ([str isEqualToString:@"trusted"]) {
                trusted = YES;
                lbTrust.text = @"Trusted";
            }
            else
                if ([str isEqualToString:@"not trust"])
                {
                    trusted = NO;
                    lbTrust.text= @"Add Friend";
                }
                else
                {
                    trusted = NO;
                    lbTrust.text= @"Add Friend";
                }
        }
    }
    if (key == 4) {
        NSLog(@"Response4: %@",response);
        NSDictionary* dic = [response objectFromJSONString];
        NSString* str = [dic objectForKey:@"successMsg"];
        if ( str != NULL) {
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
        else
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
    }
    if (key == 5) {
        NSLog(@"Response5: %@",response);
        NSDictionary* dic = [response objectFromJSONString];
        NSString* str = [dic objectForKey:@"successMsg"];
        if ( str != NULL) {
            if (trusted) {
                lbTrust.text= @"Add Friend";
                trusted = NO;
            }else
            {
                lbTrust.text = @"Trusted";
                trusted = YES;
            }
        }
        else
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
    }
    
}

@end
