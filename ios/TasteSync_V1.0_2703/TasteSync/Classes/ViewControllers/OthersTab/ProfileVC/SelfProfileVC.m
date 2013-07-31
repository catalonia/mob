//
//  SelfProfileVC.m
//  TasteSync
//
//  Created by Mobioneer_TT 1 on 12/24/12.
//  Copyright (c) 2012 Mobioneer. All rights reserved.
//

#import "SelfProfileVC.h"
#import "UserDefault.h"
#import "UserObj.h"
#import "CommonHelpers.h"
#import "UsersFollowing.h"
#import "RestaurantDetailVC.h"
#import "FacebookFriendsVC.h"
#import "blogger.h"
#import "PromptSignUpVC.h"
#import "DetailedStoryVC.h"
#import "SettingVC.h"
#import "RestaurantListsVC.h"
#import "UserActivityProfileCell.h"
#import "JSONKit.h"

@interface SelfProfileVC ()
{
    NSString* facebookURL, *twiterURL, *blogURL;
    UserObj *user;
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

@implementation SelfProfileVC

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
    viewRecentActivity.hidden = YES;
    // Do any additional setup after loading the view from its nib.
    [CommonHelpers setBackgroudImageForView:self.view];
    self.navigationController.navigationBarHidden = YES;
    
    user = [UserDefault userDefault].user;
    [self initUI];
    
    CRequest* request = [[CRequest alloc]initWithURL:@"getHomeProfile" RQType:RequestTypePost RQData:RequestDataUser RQCategory:ApplicationForm];
    request.delegate = self;
    [request setFormPostValue:[UserDefault userDefault].userID forKey:@"userId"];
    [request startFormRequest];
    
}

- (void) viewWillAppear:(BOOL)animated
{
    [super viewWillAppear:animated];
    if ([UserDefault userDefault].loginStatus != NotLogin) {
        debug(@"logined with emailID - > %@",user.email);
    }
    else
    {
        debug(@"not login");
        [self promptSignUp:nil];
        return;
        
    }
    
}
- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (void) initUI
{
    [scrollViewMain setContentSize:CGSizeMake(320, 560)];//660)];
    if (user) {
        ivAvatar.image = user.avatar;
        lbUserName.text = [NSString stringWithFormat:@"%@ %@", user.firstname, user.lastname];
        
        lbUserDetail.text = [NSString stringWithFormat:@"%@, %@",[UserDefault userDefault].city,[UserDefault userDefault].state];
        lbAboutTitle.text = [NSString stringWithFormat:@"About %@", user.firstname];
        
         lbAboutDetail.text = @"Favorite Cuisines - Indian, Ethiopian \n some text about user...more";
        
    }
    
}

- (void)promptSignUp:(id)sender
{
    PromptSignUpVC *promtpSignUpVC = [[PromptSignUpVC alloc]initWithNibName:@"PromptSignUpVC" bundle:[NSBundle mainBundle]];
    [self.navigationController pushViewController:promtpSignUpVC animated:NO];
}

- (IBAction)iconAvatarButtonClick:(id)sender
{
    
}



- (void)shareProfile
{
    UIActionSheet *actionSheet = [[UIActionSheet alloc]initWithTitle:APP_NAME delegate:self cancelButtonTitle:@"Cancel" destructiveButtonTitle:nil otherButtonTitles:@"Facebook",@"Twitter", @"Tumblr",@"Email", nil];
    actionSheet.actionSheetStyle = UIActionSheetStyleBlackOpaque;
    
    
    [actionSheet showFromTabBar:self.tabBarController.tabBar];
    //  [actionSheet showInView:self.view];
}

# pragma mark - IBAction's Define

- (IBAction)actionBack:(id)sender
{
    [[[CommonHelpers appDelegate] tabbarBaseVC] actionOthers];
}
- (IBAction)actionNewsfeed:(id)sender
{
//    [[[CommonHelpers appDelegate] tabbarBaseVC] actionNewsfeed];
    [self shareProfile];
    
}


- (IBAction)actionCountinueReading:(id)sender
{
    EditAboutMeVC *vc = [[EditAboutMeVC alloc] initWithAboutText:lbAboutDetail.text];
    vc.delegate = self;
    vc.isYourProfile = YES;
    [self.navigationController pushViewController:vc animated:YES];
}


- (IBAction)actionSettings:(id)sender
{
    SettingVC *vc = [[SettingVC alloc] initWithNibName:@"SettingVC" bundle:nil];
    [self.navigationController pushViewController:vc animated:YES];
}

- (IBAction)actionEdit:(id)sender
{
    EditAboutMeVC *vc = [[EditAboutMeVC alloc] initWithAboutText:lbAboutDetail.text];
    vc.delegate = self;
    vc.isYourProfile = YES;
    [self.navigationController pushViewController:vc animated:YES];
    [vc actionEdit:nil];
}


- (IBAction)actionFollowing:(id)sender
{
    UsersFollowing *vc = [[UsersFollowing alloc]initWithNibName:@"UsersFollowing" bundle:nil];
    vc.viewFollowing = YES;
    [self.navigationController pushViewController:vc animated:YES];
}
- (IBAction)actionFollowers:(id)sender
{
    UsersFollowing *vc = [[UsersFollowing alloc]initWithNibName:@"UsersFollowing" bundle:nil];   
    vc.viewFollowing = NO;
    [self.navigationController pushViewController:vc animated:YES];
    
}
- (IBAction)actionFriends:(id)sender
{
    FacebookFriendsVC *vc = [[FacebookFriendsVC alloc]initWithNibName:@"FacebookFriendsVC" bundle:nil];
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
    [self.navigationController pushViewController:vc animated:YES];
}
- (IBAction)actionMoreRestaurant:(id)sender
{
    RestaurantListsVC *vc = [[RestaurantListsVC alloc] initWithNibName:@"RestaurantListsVC" bundle:nil];
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

#pragma mark - EditRateReViewDialogDelegate

- (void)actionSheet:(UIActionSheet *)actionSheet clickedButtonAtIndex:(NSInteger)buttonIndex
{
    switch (buttonIndex) {
        case 0:
            NSLog(@"actionSheet:click share Facebook");
            break;
        case 1:
            NSLog(@"actionSheet:click Twitter");
            break;
        case 2:
            NSLog(@"actionSheet:click Tumblr");
            break;
        case 3:
            NSLog(@"actionSheet:click Email");
            break;
        default:
            break;
    }
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
    UserObj *anUser = [[UserObj alloc] init];
    anUser.firstname = @"Victor";
    anUser.lastname = @"Ngo";
    anUser.avatar = [UIImage imageNamed:@"avatar.png"];
    obj.user = anUser;
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

-(void)responseData:(NSData *)data
{
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
                NSRange range = NSMakeRange(0, 1);
                name = [name stringByReplacingCharactersInRange:range withString:@""];
                _restaurantObj1.imageUrl = [server stringByAppendingString:name];
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
                NSRange range = NSMakeRange(0, 1);
                name = [name stringByReplacingCharactersInRange:range withString:@""];
                _restaurantObj1.imageUrl = [server stringByAppendingString:name];
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
                NSRange range = NSMakeRange(0, 1);
                name = [name stringByReplacingCharactersInRange:range withString:@""];
                _restaurantObj2.imageUrl = [server stringByAppendingString:name];
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
                NSRange range = NSMakeRange(0, 1);
                name = [name stringByReplacingCharactersInRange:range withString:@""];
                _restaurantObj1.imageUrl = [server stringByAppendingString:name];
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
                NSRange range = NSMakeRange(0, 1);
                name = [name stringByReplacingCharactersInRange:range withString:@""];
                _restaurantObj2.imageUrl = [server stringByAppendingString:name];
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
                NSRange range = NSMakeRange(0, 1);
                name = [name stringByReplacingCharactersInRange:range withString:@""];
                _restaurantObj3.imageUrl = [server stringByAppendingString:name];
                NSLog(@"restaurantObj1.imageUrl: %@", _restaurantObj3.imageUrl);
            }
            lbRestaurant3.text = _restaurantObj3.name;
            btRestaurant3.backgroundColor = [UIColor colorWithPatternImage:[[UIImage alloc] initWithData:[NSData dataWithContentsOfURL:[NSURL URLWithString:_restaurantObj3.imageUrl]]]];
            [_arryRestaurantsVisible addObject:_restaurantObj3];
        }
    }
}

-(void)getAboutText:(NSString *)text
{
    lbAboutDetail.text = text;
}

@end
