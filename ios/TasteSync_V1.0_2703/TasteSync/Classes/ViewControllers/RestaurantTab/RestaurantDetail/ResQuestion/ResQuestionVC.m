//
//  ResQuestionVC.m
//  TasteSync
//
//  Created by Victor on 1/4/13.
//  Copyright (c) 2013 Mobioneer. All rights reserved.
//

#import "ResQuestionVC.h"
#import "FriendCell.h"
#import "CommonHelpers.h"
#import "FriendFilterCell.h"

@interface ResQuestionVC ()<UITableViewDataSource,UITableViewDelegate,FriendCellDelegate,UITextFieldDelegate>
{
    __weak IBOutlet UIView *view1,*view2,*view3,*view4, *viewMain;
    __weak IBOutlet UITableView *tbvResult,*tbvFilter;
    __weak IBOutlet UITextField *tfQuestion, *cTextField;
    __weak IBOutlet UIButton *btcheck1,*btcheck2;
    __weak IBOutlet UILabel *lbName, *lbHolver;
    __weak IBOutlet UIImageView *ivAvatar;
    __weak IBOutlet UIScrollView *scrollViewMain;
    
    BOOL check1,check2;
    UserObj *userRecommended;
    NSString *askString;
}

- (IBAction)actionBack:(id)sender;
- (IBAction)actionShare:(id)sender;
- (IBAction)actionCheck1:(id)sender;
- (IBAction)actionCheck2:(id)sender;
- (IBAction)actionSendMessage:(id)sender;
- (IBAction)actionAvatar:(id)sender;

@end

@implementation ResQuestionVC

@synthesize arrData=_arrData,
arrDataFilter=_arrDataFilter,
arrDataFriends=_arrDataFriends,
restaurantObj=_restaurantObj;

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
    // Do any additional setup after loading the view from its nib.
    [CommonHelpers setBackgroudImageForViewRestaurant:self.view];
    if (!self.arrDataFriends) {
        self.arrDataFriends = [[NSMutableArray alloc] init];
        if ([CommonHelpers appDelegate].arrDataFBFriends.count >0) {
            self.arrDataFriends = [CommonHelpers appDelegate].arrDataFBFriends;
        }
        else
        {
            for (int i=1; i<5; i++) {
                UserObj *obj = [[UserObj alloc] init];
                {
                    obj.uid = i;
                    obj.avatar = [UIImage imageNamed:@"avatar.png"];
                    obj.firstname = @"Penny";
                    obj.lastname = @"NGO";
                    obj.isSelected = YES;
                    
                    
                    [self.arrDataFriends addObject:obj];
                }
            }
            
        }
    }
    
    self.arrDataFilter = [[NSMutableArray alloc] init];

    UserObj *obj = [[UserObj alloc] init];
    
    self.arrData = [[NSMutableArray alloc] initWithObjects:obj, nil];
    
    userRecommended = [[UserObj alloc] init];
    userRecommended.firstname = @"Michiael";
    userRecommended.lastname = @"Schumacher";
    userRecommended.avatar = [UIImage imageNamed:@"avatar.png"];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


# pragma mark - IBAction's define

- (IBAction)actionBack:(id)sender
{
    [self.navigationController popViewControllerAnimated:YES];
}

- (IBAction)actionShare:(id)sender
{
    [CommonHelpers showShareView:nil andObj:_restaurantObj];

}

- (IBAction)actionHideKeyPad:(id)sender
{
    [self hideKeyBoard];
}
- (IBAction)actionCheck1:(id)sender
{
    if (check1) {
        [CommonHelpers setBackgroundImage:[UIImage imageNamed:@"ic_check.png"] forButton:btcheck1];
        check1 = FALSE;
        
    }
    else {
        [CommonHelpers setBackgroundImage:[UIImage imageNamed:@"ic_check_on.png"] forButton:btcheck1];
        check1 = TRUE;

    }
    
}
- (IBAction)actionCheck2:(id)sender
{
    if (check2) {
        [CommonHelpers setBackgroundImage:[UIImage imageNamed:@"ic_check.png"] forButton:btcheck2];
        check2 = FALSE;
        
    }
    else {
        [CommonHelpers setBackgroundImage:[UIImage imageNamed:@"ic_check_on.png"] forButton:btcheck2];
        check2 = TRUE;
        
    }
}
- (IBAction)actionSendMessage:(id)sender
{
    
}

- (IBAction)actionAvatar:(id)sender
{
    
    [[[CommonHelpers appDelegate] tabbarBaseVC] actionProfile:userRecommended];
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
            return self.arrData.count;
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
        static NSString *CellIndentifier = @"friend_cell";
        
        FriendCell *cell = (FriendCell *)[tableView dequeueReusableCellWithIdentifier:CellIndentifier];
        
        if (cell==nil) {
            NSLog(@"cell is nil");
            cell =(FriendCell *) [[[NSBundle mainBundle ] loadNibNamed:@"FriendCell" owner:self options:nil] objectAtIndex:0];
            
            
        }
        
        UserObj *obj = [self.arrData objectAtIndex:indexPath.row];
        debug(@"%@ %@",obj.firstname,obj.lastname);
        [cell initForCell:obj];
        cell.delegate = self;
        if (indexPath.row < self.arrData.count-1) {
            cell.btAdd.hidden = YES;
            cell.btnMinus.hidden = NO;
            
        }
        else
        {
            cell.btnMinus.hidden = YES;
            cell.btAdd.hidden = NO;
//            tfSearch= cell.tfName;
//            tfSearch.delegate = self;
            
        }
        if (obj.uid ==0) {
            cell.tfName.enabled = YES;
            cell.tfName.text = @"Friend's name";
            
        }
        else
        {
            cell.tfName.enabled = NO;
            
        }
        
        return cell;
    }
    else
    {
        static NSString *CellIndentifier = @"friend_filter_cell";
        
        FriendFilterCell *cell = (FriendFilterCell *)[tableView dequeueReusableCellWithIdentifier:CellIndentifier];
        
        if (cell==nil) {
            NSLog(@"cell is nil");
            cell =(FriendFilterCell *) [[[NSBundle mainBundle ] loadNibNamed:@"FriendFilterCell" owner:self options:nil] objectAtIndex:0];
            
            
        }
        
        [cell initForCell:[_arrDataFilter objectAtIndex:indexPath.row]];
        
        
        return cell;
    }
    
}

- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath
{
    if (tableView==tbvFilter) {
        
        UserObj *obj = [[UserObj alloc] init];
        obj = [_arrDataFilter objectAtIndex:indexPath.row];
        [self.arrData replaceObjectAtIndex:(self.arrData.count-1) withObject:obj];
        [tbvResult reloadData];
        tbvFilter.hidden= YES;
//        tfSearch.text = nil;
        [self.arrDataFilter removeAllObjects];
//        [self hideKeyBoard];
        
    }
}


#pragma mark - UITextFieldDelegate

- (void)textFieldDidBeginEditing:(UITextField *)textField
{
    
}


- (BOOL)textFieldShouldBeginEditing:(UITextField *)textField
{
    lbHolver.hidden = YES;
     return YES;
}


-(BOOL) textFieldShouldReturn:(UITextField *)textField{

    [self hideKeyBoard];
    return YES;
}

- (BOOL)textFieldShouldClear:(UITextField *)textField
{

    return YES;
}

- (BOOL)textField:(UITextField *)textField shouldChangeCharactersInRange:(NSRange)range replacementString:(NSString *)string
{
    
    return TRUE;
    
}
 


# pragma mark - Others


- (void) searchLocal:(NSString *)txt
{
    tbvFilter.hidden = YES;
    [self.arrDataFilter removeAllObjects];
    
    if (txt.length == 0) {
        return;
        
    }
    
    for (UserObj *userObj in self.arrDataFriends) {
        NSString *firstName = [userObj.firstname uppercaseString];
        NSString *uTxt = [txt uppercaseString];
        int diff = strncmp([firstName UTF8String], [uTxt UTF8String], uTxt.length);
        
        if (diff == 0) {
            
            [self.arrDataFilter addObject:userObj];
        }
        
    }
    
    for (UserObj *userObj in self.arrDataFriends) {
        NSString *lastName = [userObj.lastname uppercaseString];
        NSString *uTxt = [txt uppercaseString];
        int diff = strncmp([lastName UTF8String], [uTxt UTF8String], uTxt.length);
        
        if (diff == 0) {
            if (![self.arrDataFilter containsObject:userObj]) {
                [self.arrDataFilter addObject:userObj];
                
            }
        }
    }
    
    for (UserObj *obj in _arrData) {
        if ([_arrDataFilter containsObject:obj]) {
            [self.arrDataFilter removeObject:obj];
        }
    }
    
    if (self.arrDataFilter.count>0) {
        CGRect frame = tbvFilter.frame;
        if (self.arrDataFilter.count>5) {
            frame.size.height = 5*44;
            
        }
        else{
            frame.size.height = (_arrDataFilter.count) *44;
            
        }
  
        tbvFilter.hidden = NO;
        [tbvFilter reloadData];
    }
    
    
}


- (void) hideKeyBoard
{
    if (tfQuestion.text.length == 0) {
        lbHolver.hidden = NO;
    }else
    {
        lbHolver.hidden = YES;
    }
    [cTextField resignFirstResponder];
    [tfQuestion resignFirstResponder];
    
    [UIView animateWithDuration:0.4
                          delay:0
                        options: UIViewAnimationCurveEaseIn
                     animations:^{
                         viewMain.frame=CGRectMake(viewMain.frame.origin.x,20,viewMain.frame.size.width, viewMain.frame.size.height);
                         tbvFilter.hidden = YES;
                     }
                     completion:^(BOOL finished){
                         debug(@" hideKeyBoard -> move done");
                         
                     }];
     
     
    
    
}

- (void) touchesBegan:(NSSet *)touches withEvent:(UIEvent *)event
{
   
    tbvFilter.hidden = YES;
    [self hideKeyBoard];
}




# pragma mark - FriendCellDelegate

- (void) friendCell:(FriendCell *)friendCell shouldBeginEditingTextField:(UITextField *)aTextField option:(int) anOption
{
    NSIndexPath *indexPath = [tbvResult indexPathForCell:friendCell];
    
    cTextField = aTextField;
    if ([UserDefault userDefault].loginStatus == NotLogin) {
        [[CommonHelpers appDelegate] showLoginDialog];
        
    }
    else
    {
        CGFloat POINT_Y = 0;
        CGRect frame= tbvFilter.frame;

        
        if (indexPath.row<2) {
            POINT_Y = (indexPath.row)*44;
        }
        else
        {
            POINT_Y = 70;
        }
        
        frame.origin.y = 220 + POINT_Y;
        
        
//        [scrollViewMain setContentOffset:CGPointMake(0, POINT_Y)];
        [tbvFilter setFrame:frame];
        
        [UIView animateWithDuration:0.4
                              delay:0
                            options: UIViewAnimationCurveEaseIn
                         animations:^{
                             viewMain.frame=CGRectMake(viewMain.frame.origin.x,-POINT_Y-175,viewMain.frame.size.width, viewMain.frame.size.height);
                         }
                         completion:^(BOOL finished){
                             debug(@"move done");
                             //                             [self searchLocal:@""];
                             
                             
                         }];
         
         
        
    }

}
- (void) friendCell:(FriendCell *)friendCell didChangeTextFieldWithString:(NSString *) aString
{
    [self searchLocal:aString];
}

-(void) friendCell:(FriendCell *)friendCell didAction:(id)anObj tag:(int)aTag

{
    switch (aTag) {
        case FriendCellActionTagAdd:
        {
            
            UserObj *userObj = [self.arrData lastObject];
            if (userObj.uid == 0) {
                debug(@"don't add");
            }
            else
            {
                UserObj *obj = [[UserObj alloc] init ];
                [self.arrData addObject:obj];
                [tbvResult reloadData];
                
                NSIndexPath *indexPath = [NSIndexPath indexPathForRow:(_arrData.count-1) inSection:0];
                [tbvResult scrollToRowAtIndexPath:indexPath atScrollPosition:UITableViewRowAnimationTop animated:YES];
            }
            
            
            
        }
            break;
            
            case FriendCellActionTabMinus:
        {
            [self.arrData removeObject:anObj];
            [tbvResult reloadData];

            
        }
            break;
            
        default:
            break;
    }
}

@end
