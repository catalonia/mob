//
//  SettingVC.m
//  TasteSync
//
//  Created by Mobioneer_TT 1 on 12/19/12.
//  Copyright (c) 2012 Mobioneer. All rights reserved.
//

#import "SettingVC.h"
#import "CommonHelpers.h"
#import "SocialNetworksVC.h"
#import "NotificationSettingsVC.h"
#import "PrivacySettingsVC.h"
#import "AboutTasteSyncVC.h"
#import "ContactTasteSyncVC.h"
#import "RateThisApp.h"
#import "CellCustomSetting.h"
#import "JSONKit.h"

@interface SettingVC ()
{
    
  
}

- (IBAction)actionBack:(id)sender;
- (IBAction)actionNewsfeed:(id)sender;

@end

@implementation SettingVC

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
    [self initData];
    

    
}

- (void) viewWillAppear:(BOOL)animated
{
    [super viewWillAppear:animated];
  
   
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (void) initData
{
    self.arrSettingContent = [[NSMutableArray alloc] initWithObjects:@"Social Networks",@"Notification Settings", @"Privacy Settings",@"Contact TasteSync",@"Rate this App",@"About TasteSync",@"Log Out", nil];
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

#pragma mark - UITableViewDataSource, UITableViewDelegate


- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section
{
    if (self.arrSettingContent == nil) {
        return 0;
    }
    return self.arrSettingContent.count;
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    static NSString *cellIdentifier = @"CellCustomSetting";
    
    CellCustomSetting *cell = [tbvContent dequeueReusableCellWithIdentifier:cellIdentifier];
    if (cell == nil) {
        cell = (CellCustomSetting *)[[[NSBundle mainBundle] loadNibNamed:cellIdentifier owner:self options:nil] objectAtIndex:0];
     
    }
    cell.lbTitle.text = [_arrSettingContent objectAtIndex:indexPath.row];
    if (indexPath.row == _arrSettingContent.count -1) {
        cell.ivArrowRight.hidden = YES;
    }
       
    return cell;
    
}

- (void) tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath
{
    switch (indexPath.row) {
        case 0:
        {
            [self goSocialNetworks];
        }
            break;
        case 1:
        {
            [self goNotificationSettings];

        }
            break;
        case 2:
        {
            [self goPrivacySettings];

        }
            break;
        case 3:
        {
            [self goContactTasteSync];

        }
            break;
        case 4:
        {
            [self goRate];

        }
            break;
        case 5:
        {
            [self goAboutTasteSync];

        }
            break;
        case 6:
        {
            [self goLogOut];

        }
            break;
            
        default:
            break;
    }
}

- (void)goSocialNetworks
{
    SocialNetworksVC *socialNetworksVC = [[SocialNetworksVC alloc]initWithNibName:@"SocialNetworksVC" bundle:[NSBundle mainBundle]];
    [self.navigationController pushViewController:socialNetworksVC animated:YES];

}

- (void)goNotificationSettings
{
    NotificationSettingsVC *notificationSettinsVC = [[NotificationSettingsVC alloc]initWithNibName:@"NotificationSettingsVC" bundle:[NSBundle mainBundle]];
    [self.navigationController pushViewController:notificationSettinsVC animated:YES];

}

- (void)goPrivacySettings
{
    PrivacySettingsVC *privacySettingsVC = [[PrivacySettingsVC alloc]initWithNibName:@"PrivacySettingsVC" bundle:[NSBundle mainBundle]];
    [self.navigationController pushViewController:privacySettingsVC animated:YES];
}

- (void)goAboutTasteSync
{
    AboutTasteSyncVC *aboutTateSyncVC = [[AboutTasteSyncVC alloc]initWithNibName:@"AboutTasteSyncVC" bundle:[NSBundle mainBundle]];
    [self.navigationController pushViewController:aboutTateSyncVC animated:YES];
}

- (void)goContactTasteSync
{
    ContactTasteSyncVC *contactTasteSynVC = [[ContactTasteSyncVC alloc]initWithNibName:@"ContactTasteSyncVC" bundle:[NSBundle mainBundle]];
    [self.navigationController pushViewController:contactTasteSynVC animated:YES];

}

- (void)goRate
{

    NSURL *url = [ [ NSURL alloc ] initWithString: @"http://www.apple.com" ];
    [[UIApplication sharedApplication] openURL:url];
}

- (void)goLogOut
{
    CRequest* request = [[CRequest alloc]initWithURL:@"submitLogout" RQType:RequestTypePost RQData:RequestDataUser RQCategory:ApplicationForm];
    request.delegate = self;
    [request setFormPostValue:[UserDefault userDefault].userLogID forKey:@"userLogId"];
    [request startFormRequest];
}
-(void)responseData:(NSData *)data
{
    NSString* response = [[NSString alloc] initWithData:data encoding:NSUTF8StringEncoding];
    
    NSDictionary* dic = [response objectFromJSONString];
    NSString* successMessage = [dic objectForKey:@"successMsg"];
    
    if (successMessage != NULL) {
        [FBSession.activeSession closeAndClearTokenInformation];
        [FBSession.activeSession close];
        [FBSession setActiveSession:nil];
        
        [[CommonHelpers appDelegate] showLogin];
    }
    
}

@end
