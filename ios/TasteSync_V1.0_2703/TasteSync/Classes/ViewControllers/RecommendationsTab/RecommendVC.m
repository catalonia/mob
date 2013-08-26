//
//  RecommendVC.m
//  TasteSync
//
//  Created by Victor on 12/19/12.
//  Copyright (c) 2012 Mobioneer. All rights reserved.
//

#import <QuartzCore/QuartzCore.h>
#import "RecommendVC.h"
#import "CommonHelpers.h"
#import "NotificationCell.h"
#import "RecommendDetail1.h"
#import "RecommendDetail2.h"
#import "RecommendDetail3.h"
#import "RecommendDetail4.h"
#import "RestaurantDetailVC.h"
#import "AlertCustom.h"
#import "RestaurantRecommendations2.h"

@interface RecommendVC ()<UITableViewDataSource,UITableViewDelegate,UIScrollViewDelegate,UIAlertViewDelegate>
{
    __weak IBOutlet UILabel *lbNotifications;
    __weak IBOutlet UITableView *tbvUnread;
    UserDefault *userDefault;
    GlobalNotification *glNotif ;
    NotificationObj *currentNotif;
    int page,aNumberOfRow;
    BOOL aIsLoadPreviousNotif;
    
}
- (IBAction)actionContinueReading:(id)sender;
- (IBAction)actionShowProfile:(id)sender;

@end

#define REFRESH_HEADER_HEIGHT 52.0f

#define PAGE_NUMBER 5

@implementation RecommendVC

@synthesize arrData=_arrData;
@synthesize textPull, textRelease, textLoading, refreshHeaderView, refreshLabel, refreshArrow, refreshSpinner,refreshFooterView;

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        // Custom initialization
        [self setupStrings];
    }
    return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];
    [CommonHelpers setBackgroudImageForView:self.view];
    [self addPullToRefreshHeader];
    

    // Do any additional setup after loading the view from its nib.

    glNotif = [[CommonHelpers appDelegate] globalNotification];
    
    if (glNotif.total>0) {
        debug(@"total notifs -> %d", glNotif.total);
        self.arrData = glNotif.arrData;
    }
    
    page = 1;
  
}

- (void) viewWillAppear:(BOOL)animated
{
    [super viewWillAppear:animated];
    self.navigationController.navigationBarHidden = YES;

    userDefault = [UserDefault userDefault];
    tbvUnread.separatorStyle = UITableViewCellSelectionStyleNone ;

    [self reloadData];
    
    if (userDefault.loginStatus == NotLogin) {
        [self gotoDetailNotification:glNotif.notifObj atIndex:0];
    }
    else
    {
        if (_arrData.count>1) {
            lbNotifications.text = [NSString stringWithFormat:@"%d NOTIFICATIONS",glNotif.unread];
        }
        
        else if(_arrData.count == 1)
        {
            [self gotoDetailNotification:[_arrData objectAtIndex:0] atIndex:0 ];
        }
    }
    
    
   
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (void) reloadData
{
    glNotif.isSend = FALSE;
    [glNotif reOrder];
    self.arrData = glNotif.arrData;
    lbNotifications.text = [NSString stringWithFormat:@"%d NOTIFICATIONS",glNotif.unread];
    [tbvUnread reloadData];
    
}

#pragma mark - IBAction Define

- (IBAction)actionOthersTab:(id)sender
{
    [[[CommonHelpers appDelegate] tabbarBaseVC] actionOthers];
}
- (IBAction)actionNewsfeedTab:(id)sender
{
    [[[CommonHelpers appDelegate] tabbarBaseVC] actionNewsfeed];

}

- (IBAction)actionContinueReading:(id)sender
{
    UIButton *btn = (UIButton *) sender;
    debug(@"btn tag -> %d",btn.tag);
    NotificationObj *obj = [_arrData objectAtIndex:btn.tag];
    [self gotoDetailNotification:obj atIndex:btn.tag];
}

- (IBAction)actionShowProfile:(id)sender
{
    UIButton *btn = (UIButton *) sender;
    debug(@"btn tag -> %d",btn.tag);
    NotificationObj *obj = [_arrData objectAtIndex:btn.tag];
    [[[CommonHelpers appDelegate] tabbarBaseVC] actionProfile:obj.user];

}

#pragma mark - Table view data source

- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView
{
    
    return 1;
}

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section
{
    if (aIsLoadPreviousNotif || (glNotif.read == 0)) {
        if (_arrData) {
            debug(@"numberOfRowsInSection show total -> %d",glNotif.total);
            if (glNotif.total< page*PAGE_NUMBER) {
                aNumberOfRow = glNotif.total;
                return glNotif.total;
            }
            aNumberOfRow = page*PAGE_NUMBER;
            return page*PAGE_NUMBER  ;
            
        }
    }
    
    if (_arrData) {
        debug(@"numberOfRowsInSection -> %d",glNotif.unread);
        if (glNotif.unread< page*PAGE_NUMBER) {
            aNumberOfRow = glNotif.unread;

            return glNotif.unread +1 ;
        }
        aNumberOfRow = page*PAGE_NUMBER;

        return page*PAGE_NUMBER +1 ;
        
    }
    return 0;
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    static NSString *CellIndentifier = @"notification_cell";
    
    if (indexPath.row < aNumberOfRow) {
        NotificationCell *cell = (NotificationCell *)[tableView dequeueReusableCellWithIdentifier:CellIndentifier];
        
        if (cell==nil) {
            NSLog(@"cell is nil");
            cell =(NotificationCell *) [[[NSBundle mainBundle ] loadNibNamed:@"NotificationCell" owner:self options:nil] objectAtIndex:0];
            
            
        }
        cell.tag = indexPath.row;
        [cell initForView:[_arrData objectAtIndex:indexPath.row]];
        
        
        return cell;
    }
    else
    {
        static NSString *CellIndentifier2 = @"load_more_cell";
        UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:CellIndentifier2];
        if (cell == nil) {
            cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleDefault reuseIdentifier:CellIndentifier2];
        }
        
        cell.textLabel.textAlignment = NSTextAlignmentCenter;
        cell.textLabel.text = @"Load previous Notification";
        cell.textLabel.textColor = [UIColor whiteColor];
        [cell.textLabel setFont:[UIFont boldSystemFontOfSize:13]];
        
        return cell;

    }

   
}
- (void) tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath
{
    if (indexPath.row < aNumberOfRow) {
        NotificationObj *obj = [_arrData objectAtIndex:indexPath.row];
        [self gotoDetailNotification:obj atIndex:indexPath.row];
    }
    else
    {
        aIsLoadPreviousNotif = TRUE;
        page++;
        [tbvUnread reloadData];
    }
   
}


// load more cell automatic when scroll to bottom of table view

- (void) scrollViewDidEndDecelerating:(UIScrollView *)scrollView
{
    float offset = (scrollView.contentOffset.y) - (scrollView.contentSize.height - scrollView.frame.size.height);
    
    if (offset >=0 ) {
        debug(@"Load More Data");
        [self loadMoreData];
    }
}

- (void) loadMoreData
{
    page ++;
    [tbvUnread reloadData];
}

# pragma mark - Others

- (void) gotoDetailNotification:(NotificationObj *) obj atIndex:(int) index;
{
    debug(@"gotoDetailNotification");
    glNotif.index = index;
    index++;
    
    currentNotif = obj;
    
    if (obj.type==TYPE_1) {
        RecommendDetail1 *vc = [[RecommendDetail1 alloc] initWithNibName:@"RecommendDetail1" bundle:nil];
        vc.notificationObj = obj;
        vc.indexOfNotification=index;
        vc.totalNotification= glNotif.unread;
        [self.navigationController pushViewController:vc animated:YES];

    }
    else if (obj.type == TYPE_2)
    {
        debug(@"type 2");        
             
        RestaurantRecommendations2 *vc = [[RestaurantRecommendations2 alloc] initWithNibName:@"RestaurantRecommendations2" bundle:nil];
        vc.notificationObj = obj;
        vc.indexOfNotification = index;
        vc.totalNotification = glNotif.unread;
        obj.read = true;
        [self.navigationController pushViewController:vc animated:YES];
        

        
    }
    else if (obj.type== TYPE_3||obj.type==TYPE_4)
    {
        RecommendDetail2 *vc = [[RecommendDetail2 alloc] initWithNibName:@"RecommendDetail2" bundle:nil];
        vc.notificationObj = obj;
        vc.indexOfNotification=index;
        vc.totalNotification= glNotif.unread;
        [self.navigationController pushViewController:vc animated:YES];
    }
    else if (obj.type==TYPE_5)
    {
        RecommendDetail3 *vc = [[RecommendDetail3 alloc] initWithNibName:@"RecommendDetail3" bundle:nil];
        vc.notificationObj = obj;
        vc.indexOfNotification=index;
        vc.totalNotification= glNotif.unread;
        [self.navigationController pushViewController:vc animated:YES];
    }else if (obj.type==TYPE_6)
    {
        RecommendDetail4 *vc = [[RecommendDetail4 alloc] initWithNibName:@"RecommendDetail4" bundle:nil];
        vc.notificationObj = obj;
        vc.indexOfNotification=index;
        vc.totalNotification= glNotif.unread;
        [self.navigationController pushViewController:vc animated:YES];
    }
    else if(obj.type == TYPE_7)
    {
        debug(@"type 7");
        NSString *msg = [NSString stringWithFormat:@"Are you sure to see this detail restaurant?"];
        [CommonHelpers showConfirmAlertWithTitle:APP_NAME message:msg delegate:self tag:1];
    }
    else
    {
        
    }
}

# pragma mark - PullDownToRefresh

- (void)setupStrings{
    textPull = @"Pull down to update...";
    textRelease = @"Release to update...";
    textLoading = @"Updating...";
}

- (void)addPullToRefreshHeader {
    refreshHeaderView = [[UIView alloc] initWithFrame:CGRectMake(0, 0 - REFRESH_HEADER_HEIGHT, 320, REFRESH_HEADER_HEIGHT)];
    refreshHeaderView.backgroundColor = [UIColor clearColor];
    
    refreshLabel = [[UILabel alloc] initWithFrame:CGRectMake(0, 0, 320, REFRESH_HEADER_HEIGHT)];
    refreshLabel.backgroundColor = [UIColor clearColor];
    refreshLabel.textColor = [UIColor whiteColor];
    refreshLabel.font = [UIFont boldSystemFontOfSize:12.0];
    refreshLabel.textAlignment = NSTextAlignmentCenter;
    
    refreshArrow = [[UIImageView alloc] initWithImage:[UIImage imageNamed:@"arrow_refresh.png"]];
    refreshArrow.frame = CGRectMake(floorf((REFRESH_HEADER_HEIGHT - 27) / 2),
                                    (floorf(REFRESH_HEADER_HEIGHT - 44) / 2),
                                    27, 44);
    
    refreshSpinner = [[UIActivityIndicatorView alloc] initWithActivityIndicatorStyle:UIActivityIndicatorViewStyleWhite];
    refreshSpinner.frame = CGRectMake(floorf(floorf(REFRESH_HEADER_HEIGHT - 20) / 2), floorf((REFRESH_HEADER_HEIGHT - 20) / 2), 20, 20);
    refreshSpinner.hidesWhenStopped = YES;
    
    [refreshHeaderView addSubview:refreshLabel];
    [refreshHeaderView addSubview:refreshArrow];
    [refreshHeaderView addSubview:refreshSpinner];
    [tbvUnread addSubview:refreshHeaderView];
}


- (void)scrollViewWillBeginDragging:(UIScrollView *)scrollView {
    if (isLoading) return;
    isDragging = YES;
}

- (void)scrollViewDidScroll:(UIScrollView *)scrollView {
    if (isLoading) {
        // Update the content inset, good for section headers
        if (scrollView.contentOffset.y > 0)
            tbvUnread.contentInset = UIEdgeInsetsZero;
        else if (scrollView.contentOffset.y >= -REFRESH_HEADER_HEIGHT)
            tbvUnread.contentInset = UIEdgeInsetsMake(-scrollView.contentOffset.y, 0, 0, 0);
    } else if (isDragging && scrollView.contentOffset.y < 0) {
        // Update the arrow direction and label
        [UIView animateWithDuration:0.25 animations:^{
            if (scrollView.contentOffset.y < -REFRESH_HEADER_HEIGHT) {
                // User is scrolling above the header
                refreshLabel.text = self.textRelease;
                [refreshArrow layer].transform = CATransform3DMakeRotation(M_PI, 0, 0, 1);
            } else {
                // User is scrolling somewhere within the header
                refreshLabel.text = self.textPull;
                [refreshArrow layer].transform = CATransform3DMakeRotation(M_PI * 2, 0, 0, 1);
            }
        }];
    }
}

- (void)scrollViewDidEndDragging:(UIScrollView *)scrollView willDecelerate:(BOOL)decelerate {
    if (isLoading) return;
    isDragging = NO;
    if (scrollView.contentOffset.y <= -REFRESH_HEADER_HEIGHT) {
        // Released above the header
        [self startLoading];
    }
   

   
}

- (void)startLoading {
    isLoading = YES;
    
    debug(@"startLoading");
    
    // Show the header
    [UIView animateWithDuration:0.3 animations:^{
        tbvUnread.contentInset = UIEdgeInsetsMake(REFRESH_HEADER_HEIGHT, 0, 0, 0);
        refreshLabel.text = self.textLoading;
        refreshArrow.hidden = YES;
        [refreshSpinner startAnimating];
    }];
    
    // Refresh action!
    [self refresh];
}

- (void)stopLoading {
    
//    NotificationObj *newObj = [[NotificationObj alloc] init];
//    newObj.type = TYPE_1;
//    User *user = [[User alloc] init];
//    user.uid = 10;
//    user.firstname = @"Victor";
//    user.lastname = @"NGO";
//    user.avatar = [UIImage imageNamed:@"avatar.png"];
//    newObj.user = user;
//    newObj.description = @"Person wrote: this message is test for prototype with function reload.";
//
//    [glNotif addObject:newObj];
//    
//    [self reloadData];
    
    isLoading = NO;
    
    // Hide the header
    [UIView animateWithDuration:0.3 animations:^{
        tbvUnread.contentInset = UIEdgeInsetsZero;
        [refreshArrow layer].transform = CATransform3DMakeRotation(M_PI * 2, 0, 0, 1);
    }
                     completion:^(BOOL finished) {
                         [self performSelector:@selector(stopLoadingComplete)];
                     }];
}

- (void)stopLoadingComplete {
    // Reset the header
    refreshLabel.text = self.textPull;
    refreshArrow.hidden = NO;
    [refreshSpinner stopAnimating];
}

- (void)refresh {
    // This is just a demo. Override this method with your custom reload action.
    // Don't forget to call stopLoading at the end.
//    [self reloadData];
    
  
    
    
    
   [self performSelector:@selector(stopLoading) withObject:nil afterDelay:2.0];
}


#pragma mark - UIAlertViewDelegate

- (void)alertView:(UIAlertView *)alertView clickedButtonAtIndex:(NSInteger)buttonIndex
{
    if (alertView.tag==0) {
        currentNotif.read = TRUE;
        [self gotoDetailNotification:[glNotif gotoNextNotification] atIndex:glNotif.index];
    }
    else
    {
        if (buttonIndex==1) {
            currentNotif.read = TRUE;
            RestaurantObj *obj = [[RestaurantObj alloc] init];
            obj.name = @"Nanking";
            obj.nation = @"American";
            obj.rates = 4;
            
            [[[CommonHelpers appDelegate] tabbarBaseVC] actionSelectRestaurant:obj selectedIndex:1];
        }
        else
        {
            [self gotoDetailNotification:[glNotif gotoNextNotification] atIndex:glNotif.index];
        }
    }
    
    
}


@end
