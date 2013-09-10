//
//  RecommendDetail2.m
//  TasteSync
//
//  Created by Victor on 12/27/12.
//  Copyright (c) 2012 Mobioneer. All rights reserved.
//

#import "RecommendDetail1.h"
#import "RecommendDetail2.h"
#import "RecommendDetail3.h"
#import "RecommendDetail4.h"
#import "CommonHelpers.h"
#import "AddRestaurantCell.h"
#import "FilterRestaurant.h"
#import "RestaurantRecommendations2.h"


@interface RecommendDetail2 ()<UITextFieldDelegate,UITableViewDataSource,UITableViewDelegate,UIAlertViewDelegate,AddRestaurantCellDelegate,FilterRestaurantDelegate, UITextViewDelegate>
{
    __weak IBOutlet UIView *view1,*view2,*view3,*view4;
    __weak IBOutlet UIScrollView *scrollViewMain;
    __weak IBOutlet UIImageView *ivAvatar;
    __weak IBOutlet UILabel *lbNotifications,*lbPoint,*lbName,*lbSortMsg,*lbReplyto;
    __weak IBOutlet UITextView *tvLongMsg;
//    __weak IBOutlet UITextField *tfSearch;
    __weak IBOutlet UITextView *tvMsg;
    
    __weak IBOutlet UITableView *tbvFilter,*tbvResult;
    __weak IBOutlet UIButton *btFollow;
    UITextField *cTextField;
    GlobalNotification *glNotif ;
    NotificationObj *currentNotif;
    FilterRestaurant *filterView;
    UserDefault *userDefault;
    


    
}


- (IBAction)actionBack:(id)sender;

- (IBAction)actionNewsfeedTab:(id)sender;

- (IBAction)actionFollow:(id)sender;

- (IBAction)actionSend:(id)sender;

- (IBAction)actionHidekeyboard:(id)sender;

- (IBAction)actionAvatar:(id)sender;

@end

@implementation RecommendDetail2

@synthesize notificationObj=_notificationObj,
indexOfNotification=_indexOfNotification,
totalNotification=_totalNotification,
arrData=_arrData,
arrDataRestaurant=_arrDataRestaurant,
arrDataFilter=_arrDataFilter;;

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
     UITapGestureRecognizer *gestureRecognizer = [[UITapGestureRecognizer alloc] initWithTarget:self action:@selector(hideKeyBoard)];
    
    [view3 addGestureRecognizer:gestureRecognizer];
    
    userDefault = [UserDefault userDefault];
    
    glNotif = [[CommonHelpers appDelegate] globalNotification];  
    
    
    filterView = [[FilterRestaurant alloc] initWithFrame:CGRectMake(-320,0, 320, 480)];
    filterView.delegate = self;
    
    [scrollViewMain setContentSize:CGSizeMake(320, 600)];
    
    if (glNotif.isSend) {
        view1.hidden = NO;

    }
    else
    {
        view1.hidden = YES;
        [view2 setFrame:CGRectMake(0, view2.frame.origin.y-60, view2.frame.size.width, view2.frame.size.height)];
    }

    if (_notificationObj) {
        ivAvatar.image = _notificationObj.user.avatar;
        NSString *firstCh = [_notificationObj.user.lastname substringToIndex:1];
        if (_notificationObj.type== TYPE_3) {
             lbName.text = [NSString stringWithFormat:@"%@. %@",_notificationObj.user.name,NO_TITLE_3];
        }
        else
        {
            lbName.text = [NSString stringWithFormat:@"%@ %@. %@",_notificationObj.user.firstname,firstCh,NO_TITLE_4];
        }
       
        tvLongMsg.text = _notificationObj.description;
        lbNotifications.text = [NSString stringWithFormat:@"NOTIFICATION %d of %d",_indexOfNotification,_totalNotification];
         lbReplyto.text = [NSString stringWithFormat:@"Reply to %@",_notificationObj.user.name];
    }
    
    if (!_arrDataRestaurant) {
        self.arrDataRestaurant = [[NSMutableArray alloc] init ];
        for (int i=0; i < 10; i++) {
            RestaurantObj *obj = [[RestaurantObj alloc] init];
            obj.name= [NSString stringWithFormat:@"Restaurant %d",i];

            [self.arrDataRestaurant addObject:obj];
        }
    }
    
    
    if (!_arrData) {
        self.arrData = [[NSMutableArray alloc] init ];
        
        RestaurantObj *obj = [[RestaurantObj alloc] init];     
       
        [self.arrData addObject:obj];
    }
    
    if (!_arrDataFilter) {
        self.arrDataFilter = [[NSMutableArray alloc] init];
    }

    // Do any additional setup after loading the view from its nib.
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

# pragma mark - Others

- (void) gotoDetailNotification:(NotificationObj *) obj atIndex:(int) index;
{
    debug(@"gotoDetailNotification");
    
    if (obj == nil) {
        [self.navigationController popToRootViewControllerAnimated:YES];
        return ;
    }
    
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
        vc.indexOfNotification=index;
        vc.totalNotification= glNotif.unread;
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

# pragma mark - IBAction define

- (IBAction)actionNewsfeedTab:(id)sender
{
    [[[CommonHelpers appDelegate] tabbarBaseVC] actionNewsfeed];
}



- (IBAction)actionBack:(id)sender
{
    [self.navigationController popViewControllerAnimated:YES];
}

- (IBAction)actionFollow:(id)sender
{
    if (userDefault.loginStatus == NotLogin) {
        [CommonHelpers showConfirmAlertWithTitle:APP_NAME message:@"Share great recommendations \n Please Sign-up to help us" delegate:self tag:0];
    }
    else
    {
        dispatch_async(dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_HIGH, 0), ^{
            sleep(1);
            self.notificationObj.user.status = UserStatusFollow;
            dispatch_async(dispatch_get_main_queue(), ^{
                [btFollow setTitle:@"Following" forState:UIControlStateNormal];
                btFollow.enabled = NO;
            });
        });
    }
}
- (IBAction)actionSend:(id)sender
{
    [self hideKeyBoard];
    if (_arrData.count>0) {
        _notificationObj.read = TRUE;
        [self gotoDetailNotification:[glNotif gotoNextNotification] atIndex:glNotif.index];
    }
   else
   {
       
   }

}

- (IBAction)actionHidekeyboard:(id)sender
{
    [self hideKeyBoard];
}

- (IBAction)actionAvatar:(id)sender
{
    [[[CommonHelpers appDelegate] tabbarBaseVC] actionProfile:_notificationObj.user];
}

- (IBAction)actionSearch:(id)sender
{
    [self hideKeyBoard];
    [filterView show];
    
}

#pragma mark - Table view data source

- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView
{
    
    return 1;
}

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section
{
    if (tableView==tbvResult) {
        if (_arrData) {
            return _arrData.count;
        }
    }else
    {
        if (_arrDataFilter) {
            return _arrDataFilter.count;
        }
    }
    
    return 0;
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    if (tableView==tbvResult) {
        static NSString *CellIndentifier = @"add_restaurant_cell";
        
        AddRestaurantCell *cell = (AddRestaurantCell *)[tableView dequeueReusableCellWithIdentifier:CellIndentifier];
        
        if (cell==nil) {
            NSLog(@"cell is nil");
            cell =(AddRestaurantCell *) [[[NSBundle mainBundle ] loadNibNamed:@"AddRestaurantCell" owner:self options:nil] objectAtIndex:0];
            
            
        }
        RestaurantObj *obj = [_arrData objectAtIndex:indexPath.row];
        
        cell.tag = indexPath.row;
        
        [cell initForCell:obj];
        if (indexPath.row == (_arrData.count -1)) {
//            tfSearch= cell.tfName;
//            tfSearch.delegate = self;
            cell.btAdd.hidden = NO;
            cell.btMinus.hidden = YES;
        }
        else
        {
            cell.btMinus.hidden = NO;
        }
        cell.delegate = self;
        
        
        
        return cell;
    }
    else
    {
        static NSString *CellIndentifier = @"cell";
        
        UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:CellIndentifier];
        if (cell==nil) {
            cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleDefault reuseIdentifier:CellIndentifier];
        }
        
        RestaurantObj *obj = [_arrDataFilter objectAtIndex:indexPath.row];
        
        cell.textLabel.text = obj.name;
        [cell.textLabel setFont:[UIFont boldSystemFontOfSize:13]];
//        cell.textLabel.textAlignment = UITextAlignmentRight;
        cell.textLabel.textColor = [UIColor whiteColor];
        
        return cell;
    }
    
}

- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath
{
    if (tableView==tbvFilter) {
        
        RestaurantObj *obj = [_arrDataFilter objectAtIndex:indexPath.row];
        
        [self.arrData replaceObjectAtIndex:(_arrData.count-1) withObject:obj];
        [tbvResult reloadData];
        tbvFilter.hidden= YES;
        [self.arrDataFilter removeAllObjects];
//        [self hideKeyBoard];
    }
}
/*

- (void) tableView:(UITableView *)tableView commitEditingStyle:(UITableViewCellEditingStyle)editingStyle forRowAtIndexPath:(NSIndexPath *)indexPath
{
    if (tableView == tbvResult) {
        if (indexPath.row < _arrData.count -1) {
            [self.arrData removeObjectAtIndex:indexPath.row];
            [tbvResult reloadData];
        }
    }
    
}

*/


#pragma mark - UITextFieldDelegate

- (BOOL)textFieldShouldBeginEditing:(UITextField *)textField
{
    if (userDefault.loginStatus == NotLogin) {
        [CommonHelpers showConfirmAlertWithTitle:APP_NAME message:@"Share great recommendations \n Please Sign-up to help us" delegate:self tag:0];
        return NO;
    }
    
    textField.text = @"";

       
    
    return YES;
}


-(BOOL) textFieldShouldReturn:(UITextField *)textField{
    //    [self onClickLookup:nil];
    [scrollViewMain setContentOffset:CGPointZero];
    [self hideKeyBoard];
    
    return YES;
}

- (BOOL)textFieldShouldClear:(UITextField *)textField
{
  
    return YES;
}

- (BOOL)textField:(UITextField *)textField shouldChangeCharactersInRange:(NSRange)range replacementString:(NSString *)string
{
//    if (textField == tfSearch) {
//        [self searchLocal:[textField.text stringByReplacingCharactersInRange:range withString:string]];
//        
//    }
    
    return TRUE;
    
}

#pragma mark - UITextViewDelegate

- (void)textViewDidBeginEditing:(UITextView *)textView
{
    [scrollViewMain setContentOffset:CGPointMake(0, 300) animated:YES];
}

#pragma mark - UIAlertViewDelegate

- (void)alertView:(UIAlertView *)alertView clickedButtonAtIndex:(NSInteger)buttonIndex
{
    if (alertView.tag ==1) {
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
    else
    {
        if (buttonIndex ==1) {
            [[CommonHelpers appDelegate] showLoginDialog];
        }
    }
    
}


# pragma mark - Others

- (void) touchesBegan:(NSSet *)touches withEvent:(UIEvent *)event
{
   
    tbvFilter.hidden = YES;
    [self hideKeyBoard];
}

- (void) searchLocal:(NSString *)txt
{
    NSString *str = [NSString stringWithFormat:@"name MATCHES[cd] '%@.*'", [CommonHelpers trim:txt]];
    tbvFilter.hidden = YES;
    [self.arrDataFilter removeAllObjects];
    
    if (txt.length == 0) {
        return;
        
    }
    
    NSPredicate *predicate = [NSPredicate predicateWithFormat:str];
    
    NSArray *array = [self.arrDataRestaurant filteredArrayUsingPredicate:predicate];
    if(array)
    {
        self.arrDataFilter = [NSMutableArray arrayWithArray:array];
    }
    
    for (RestaurantObj *obj in _arrData) {
        if ([_arrDataFilter containsObject:obj]) {
            [self.arrDataFilter removeObject:obj];
        }
    }
    
    if (self.arrDataFilter.count>0) {
             
      
        tbvFilter.hidden = NO;
        [tbvFilter reloadData];
    }
    
    
}

- (void) hideKeyBoard
{
    
    [cTextField resignFirstResponder];
    [tvLongMsg resignFirstResponder];
    [scrollViewMain setContentOffset:CGPointZero];
    [tvMsg resignFirstResponder];
}






#pragma mark - addRestaurantCellDelegate

- (void) addRestaurantCell:(AddRestaurantCell *)addRestaurantCell shouldBeginEditing:(UITextField *) aTextField
{
    cTextField = aTextField;
    
    NSIndexPath *indexPath = [tbvResult indexPathForCell:addRestaurantCell];
    
    CGFloat POINT_Y = 0;
    if (glNotif.isSend) {
        
        POINT_Y = 290;
    }
    else
    {
        POINT_Y = 230;
        if (indexPath.row < 2) {
            POINT_Y+= (indexPath.row*44);
            
        } else {
            POINT_Y+= 88;
        }
        
        
    }
    [tbvFilter setFrame:CGRectMake(tbvFilter.frame.origin.x, POINT_Y, tbvFilter.frame.size.width, tbvFilter.frame.size.height)];
    [scrollViewMain setContentOffset:CGPointMake(0, POINT_Y-50)];
}

- (void) addRestaurantCell:(AddRestaurantCell *)addRestaurantCell didChangeTextFieldWithString:(NSString *) aString
{
    [self searchLocal:aString];
}

- (void) addRestaurantCell:(AddRestaurantCell *)addRestaurantCell didAction:(id)anObject tagAction:(int)aTag
{
    NSIndexPath *indexPathFrame = [tbvResult indexPathForCell:addRestaurantCell];
    switch (aTag) {
        case TagAdd:
        {
            RestaurantObj *lastObj = [_arrData lastObject];
            if (lastObj.name == nil) {
                debug(@"don't add");
            }
            else
            {
                debug(@" add new box");
                RestaurantObj *obj = [[RestaurantObj alloc] init];
                [self.arrData addObject:obj];
                [tbvResult reloadData];
                NSIndexPath *indexPath = [NSIndexPath indexPathForRow:(_arrData.count-1) inSection:0];
                [tbvResult scrollToRowAtIndexPath:indexPath atScrollPosition:UITableViewRowAnimationTop animated:YES];
                if (indexPathFrame.row < 2) {
                    [UIView animateWithDuration:0.3 animations:^{
                        [view3 setFrame:CGRectMake(view3.frame.origin.x, view3.frame.origin.y, view3.frame.size.width, view3.frame.size.height + 40)];
                        [view4 setFrame:CGRectMake(view4.frame.origin.x, view4.frame.origin.y + 40, view4.frame.size.width, view4.frame.size.height)];
                    }];
                }
            }
            
            
        }
            break;
            
        case TagSearch:
        {
            tbvFilter.hidden = YES;
            [self actionSearch:nil];
        }
            break;
        case TagRemove:
        {
            tbvFilter.hidden = YES;
            NSIndexPath *indexPath = [tbvResult indexPathForCell:addRestaurantCell];
            [self.arrData removeObjectAtIndex:indexPath.row];
            [tbvResult deleteRowsAtIndexPaths:[[NSMutableArray alloc] initWithObjects:indexPath, nil] withRowAnimation:UITableViewRowAnimationAutomatic];
            
        }
            break;

        default:
            break;
    }
    
}

#pragma mark - FilterRestaurantDelegate

- (void) filterRestaurant:(FilterRestaurant *)filterRestaurant didFinish:(id)anObj tag:(int)aTag
{
    //    show restaurant in tbv
    
}



@end
