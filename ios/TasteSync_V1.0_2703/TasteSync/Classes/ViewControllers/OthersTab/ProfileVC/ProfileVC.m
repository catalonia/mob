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
    
    __weak IBOutlet UIActivityIndicatorView* activity1;
    __weak IBOutlet UIActivityIndicatorView* activity2;
    __weak IBOutlet UIActivityIndicatorView* activity3;
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
    lbYouFollow.text = [NSString stringWithFormat:@"You follow %@",_user.name];
    lbAboutTitle.text = [NSString stringWithFormat:@"About %@", _user.name];
    
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
    lbName.text = [NSString stringWithFormat:@"%@", _user.name];
    lbAboutTitle.text = [NSString stringWithFormat:@"About %@", _user.name];
    
    if (_user.city == nil) {
        _user.city = self.user.hometown_location;
    }
    if (_user.state == nil) {
        _user.state = self.user.location;
    }
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
         [request setFormPostValue:[UserDefault userDefault].deviceToken forKey:@"devicetoken"];
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
    
	[self dismissViewControllerAnimated:YES  completion:nil];
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
        NSString* response = [[NSString alloc]initWithData:data encoding:NSUTF8StringEncoding];
        NSLog(@"Response: %@",response);
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
                activity1.hidden = YES;
                activity2.hidden = YES;
                activity3.hidden = YES;
                
                
            }
            if ([restaurantArray count] == 1) {
                lbRestaurant2.hidden = YES;
                lbRestaurant3.hidden = YES;
                btRestaurant2.hidden = YES;
                btRestaurant3.hidden = YES;
                activity2.hidden = YES;
                activity3.hidden = YES;
                
                NSDictionary* dicRes = [restaurantArray objectAtIndex:0];
                _restaurantObj1.uid = [dicRes objectForKey:@"id"];
                
                NSDictionary* dicInformation = [dicRes objectForKey:@"information"];
                _restaurantObj1.name = [dicInformation objectForKey:@"restaurantName"];
                _restaurantObj1.cuisineTier2 = [dicInformation objectForKey:@"cuisineTier2Name"];
                _restaurantObj1.price = [dicInformation objectForKey:@"price"];
                _restaurantObj1.cityObj.cityName = [dicInformation objectForKey:@"restaurantCity"];
                _restaurantObj1.lattitude = [[dicInformation objectForKey:@"restaurantLat"] floatValue];
                _restaurantObj1.longtitude = [[dicInformation objectForKey:@"restaurantLong"] floatValue];
                _restaurantObj1.rates = [[dicInformation objectForKey:@"restaurantRating"] floatValue];
                
                NSDictionary* photo = [dicRes objectForKey:@"photo"];
                NSString* str = [photo objectForKey:@"prefix"];
                if (![str isKindOfClass:([NSNull class])]) {
                    _restaurantObj1.imageUrl = [NSString stringWithFormat:@"%@%@x%@%@",[photo objectForKey:@"prefix"],[photo objectForKey:@"width"],[photo objectForKey:@"height"],[photo objectForKey:@"suffix"]];
                    
                    NSLog(@"restaurantObj1.imageUrl: %@", _restaurantObj1.imageUrl);
                    [NSThread detachNewThreadSelector:@selector(loadImageRestaurant1) toTarget:self withObject:nil];
                    [activity1 startAnimating];
                }
                else
                {
                    activity1.hidden = YES;
                }
                
                lbRestaurant1.text = _restaurantObj1.name;
                
                [_arryRestaurantsVisible addObject:_restaurantObj1];
                
                
            }
            if ([restaurantArray count] == 2) {
                lbRestaurant3.hidden = YES;
                btRestaurant3.hidden = YES;
                activity3.hidden = YES;
                
                NSDictionary* dicRes = [restaurantArray objectAtIndex:0];
                _restaurantObj1.uid = [dicRes objectForKey:@"id"];
                
                NSDictionary* dicInformation = [dicRes objectForKey:@"information"];
                _restaurantObj1.name = [dicInformation objectForKey:@"restaurantName"];
                _restaurantObj1.cuisineTier2 = [dicInformation objectForKey:@"cuisineTier2Name"];
                _restaurantObj1.price = [dicInformation objectForKey:@"price"];
                _restaurantObj1.cityObj.cityName = [dicInformation objectForKey:@"restaurantCity"];
                _restaurantObj1.lattitude = [[dicInformation objectForKey:@"restaurantLat"] floatValue];
                _restaurantObj1.longtitude = [[dicInformation objectForKey:@"restaurantLong"] floatValue];
                _restaurantObj1.rates = [[dicInformation objectForKey:@"restaurantRating"] floatValue];
                
                NSDictionary* photo = [dicRes objectForKey:@"photo"];
                NSString* str = [photo objectForKey:@"prefix"];
                if (![str isKindOfClass:([NSNull class])]) {
                    _restaurantObj1.imageUrl = [NSString stringWithFormat:@"%@%@x%@%@",[photo objectForKey:@"prefix"],[photo objectForKey:@"width"],[photo objectForKey:@"height"],[photo objectForKey:@"suffix"]];
                    NSLog(@"restaurantObj1.imageUrl: %@", _restaurantObj1.imageUrl);
                    [NSThread detachNewThreadSelector:@selector(loadImageRestaurant1) toTarget:self withObject:nil];
                    [activity1 startAnimating];
                }
                else
                {
                    activity1.hidden = YES;
                }
                lbRestaurant1.text = _restaurantObj1.name;
                NSLog(@"lbRestaurant1.text: %@", [dicRes objectForKey:@"name"]);
                [_arryRestaurantsVisible addObject:_restaurantObj1];
                
                NSDictionary* dicRes2 = [restaurantArray objectAtIndex:1];
                _restaurantObj2.uid = [dicRes2 objectForKey:@"id"];
                
                NSDictionary* dicInformation2 = [dicRes2 objectForKey:@"information"];
                _restaurantObj2.name = [dicInformation2 objectForKey:@"restaurantName"];
                _restaurantObj2.cuisineTier2 = [dicInformation2 objectForKey:@"cuisineTier2Name"];
                _restaurantObj2.price = [dicInformation2 objectForKey:@"price"];
                _restaurantObj2.cityObj.cityName = [dicInformation2 objectForKey:@"restaurantCity"];
                _restaurantObj2.lattitude = [[dicInformation2 objectForKey:@"restaurantLat"] floatValue];
                _restaurantObj2.longtitude = [[dicInformation2 objectForKey:@"restaurantLong"] floatValue];
                _restaurantObj2.rates = [[dicInformation2 objectForKey:@"restaurantRating"] floatValue];
                
                NSDictionary* photo2 = [dicRes2 objectForKey:@"photo"];
                NSString* str2 = [photo2 objectForKey:@"prefix"];
                if (![str2 isKindOfClass:([NSNull class])]) {
                    _restaurantObj2.imageUrl = [NSString stringWithFormat:@"%@%@x%@%@",[photo2 objectForKey:@"prefix"],[photo2 objectForKey:@"width"],[photo2 objectForKey:@"height"],[photo2 objectForKey:@"suffix"]];
                    NSLog(@"restaurantObj1.imageUrl: %@", _restaurantObj2.imageUrl);
                    [NSThread detachNewThreadSelector:@selector(loadImageRestaurant2) toTarget:self withObject:nil];
                    [activity2 startAnimating];
                }
                else
                {
                    activity2.hidden = YES;
                }
                lbRestaurant2.text = _restaurantObj2.name;
                [_arryRestaurantsVisible addObject:_restaurantObj2];
                
            }
            if ([restaurantArray count] == 3) {
                NSDictionary* dicRes = [restaurantArray objectAtIndex:0];
                _restaurantObj1.uid = [dicRes objectForKey:@"id"];
                
                NSDictionary* dicInformation = [dicRes objectForKey:@"information"];
                _restaurantObj1.name = [dicInformation objectForKey:@"restaurantName"];
                _restaurantObj1.cuisineTier2 = [dicInformation objectForKey:@"cuisineTier2Name"];
                _restaurantObj1.price = [dicInformation objectForKey:@"price"];
                _restaurantObj1.cityObj.cityName = [dicInformation objectForKey:@"restaurantCity"];
                _restaurantObj1.lattitude = [[dicInformation objectForKey:@"restaurantLat"] floatValue];
                _restaurantObj1.longtitude = [[dicInformation objectForKey:@"restaurantLong"] floatValue];
                _restaurantObj1.rates = [[dicInformation objectForKey:@"restaurantRating"] floatValue];
                
                NSDictionary* photo = [dicRes objectForKey:@"photo"];
                NSString* str = [photo objectForKey:@"prefix"];
                if (![str isKindOfClass:([NSNull class])]) {
                    _restaurantObj1.imageUrl = [NSString stringWithFormat:@"%@%@x%@%@",[photo objectForKey:@"prefix"],[photo objectForKey:@"width"],[photo objectForKey:@"height"],[photo objectForKey:@"suffix"]];
                    NSLog(@"restaurantObj1.imageUrl: %@", _restaurantObj1.imageUrl);
                    [NSThread detachNewThreadSelector:@selector(loadImageRestaurant1) toTarget:self withObject:nil];
                    [activity1 startAnimating];
                }
                else
                {
                    activity1.hidden = YES;
                }
                lbRestaurant1.text = _restaurantObj1.name;
                [_arryRestaurantsVisible addObject:_restaurantObj1];
                
                NSDictionary* dicRes2 = [restaurantArray objectAtIndex:1];
                _restaurantObj2.uid = [dicRes2 objectForKey:@"id"];
                
                NSDictionary* dicInformation2 = [dicRes2 objectForKey:@"information"];
                _restaurantObj2.name = [dicInformation2 objectForKey:@"restaurantName"];
                _restaurantObj2.cuisineTier2 = [dicInformation2 objectForKey:@"cuisineTier2Name"];
                _restaurantObj2.price = [dicInformation2 objectForKey:@"price"];
                _restaurantObj2.cityObj.cityName = [dicInformation2 objectForKey:@"restaurantCity"];
                _restaurantObj2.lattitude = [[dicInformation2 objectForKey:@"restaurantLat"] floatValue];
                _restaurantObj2.longtitude = [[dicInformation2 objectForKey:@"restaurantLong"] floatValue];
                _restaurantObj2.rates = [[dicInformation2 objectForKey:@"restaurantRating"] floatValue];
                
                NSDictionary* photo2 = [dicRes2 objectForKey:@"photo"];
                NSString* str2 = [photo2 objectForKey:@"prefix"];
                if (![str2 isKindOfClass:([NSNull class])]) {
                    _restaurantObj2.imageUrl = [NSString stringWithFormat:@"%@%@x%@%@",[photo2 objectForKey:@"prefix"],[photo2 objectForKey:@"width"],[photo2 objectForKey:@"height"],[photo2 objectForKey:@"suffix"]];
                    NSLog(@"restaurantObj1.imageUrl: %@", _restaurantObj2.imageUrl);
                    [NSThread detachNewThreadSelector:@selector(loadImageRestaurant2) toTarget:self withObject:nil];
                    [activity2 startAnimating];
                }
                else
                {
                    activity2.hidden = YES;
                }
                lbRestaurant2.text = _restaurantObj2.name;
                [_arryRestaurantsVisible addObject:_restaurantObj2];
                
                NSDictionary* dicRes3 = [restaurantArray objectAtIndex:2];
                _restaurantObj3.uid = [dicRes3 objectForKey:@"id"];
                
                NSDictionary* dicInformation3 = [dicRes3 objectForKey:@"information"];
                _restaurantObj3.name = [dicInformation3 objectForKey:@"restaurantName"];
                _restaurantObj3.cuisineTier2 = [dicInformation3 objectForKey:@"cuisineTier2Name"];
                _restaurantObj3.price = [dicInformation3 objectForKey:@"price"];
                _restaurantObj3.cityObj.cityName = [dicInformation3 objectForKey:@"restaurantCity"];
                _restaurantObj3.lattitude = [[dicInformation3 objectForKey:@"restaurantLat"] floatValue];
                _restaurantObj3.longtitude = [[dicInformation3 objectForKey:@"restaurantLong"] floatValue];
                _restaurantObj3.rates = [[dicInformation3 objectForKey:@"restaurantRating"] floatValue];
                
                NSDictionary* photo3 = [dicRes3 objectForKey:@"photo"];
                NSString* str3 = [photo3 objectForKey:@"prefix"];
                if (![str3 isKindOfClass:([NSNull class])]) {
                    _restaurantObj3.imageUrl = [NSString stringWithFormat:@"%@%@x%@%@",[photo3 objectForKey:@"prefix"],[photo3 objectForKey:@"width"],[photo3 objectForKey:@"height"],[photo3 objectForKey:@"suffix"]];
                    NSLog(@"restaurantObj2.imageUrl: %@", _restaurantObj3.imageUrl);
                    [NSThread detachNewThreadSelector:@selector(loadImageRestaurant3) toTarget:self withObject:nil];
                    [activity3 startAnimating];
                }
                else
                {
                    activity3.hidden = YES;
                }
                lbRestaurant3.text = _restaurantObj3.name;
                
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
        [self configView];
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
-(void)loadImageRestaurant1
{
    [btRestaurant1 setImage:[[UIImage alloc] initWithData:[NSData dataWithContentsOfURL:[NSURL URLWithString:_restaurantObj1.imageUrl]]] forState:UIControlStateHighlighted];
    [btRestaurant1 setImage:[[UIImage alloc] initWithData:[NSData dataWithContentsOfURL:[NSURL URLWithString:_restaurantObj1.imageUrl]]] forState:UIControlStateNormal];
    [activity1 stopAnimating];
    [activity1 setHidden:YES];
}
-(void)loadImageRestaurant2
{
    [btRestaurant2 setImage:[[UIImage alloc] initWithData:[NSData dataWithContentsOfURL:[NSURL URLWithString:_restaurantObj2.imageUrl]]] forState:UIControlStateHighlighted];
    [btRestaurant2 setImage:[[UIImage alloc] initWithData:[NSData dataWithContentsOfURL:[NSURL URLWithString:_restaurantObj2.imageUrl]]] forState:UIControlStateNormal];
    [activity2 stopAnimating];
    [activity2 setHidden:YES];
}
-(void)loadImageRestaurant3
{
    [btRestaurant3 setImage:[[UIImage alloc] initWithData:[NSData dataWithContentsOfURL:[NSURL URLWithString:_restaurantObj3.imageUrl]]] forState:UIControlStateHighlighted];
    [btRestaurant3 setImage:[[UIImage alloc] initWithData:[NSData dataWithContentsOfURL:[NSURL URLWithString:_restaurantObj3.imageUrl]]] forState:UIControlStateNormal];
    [activity3 stopAnimating];
    [activity3 setHidden:YES];
}
@end
