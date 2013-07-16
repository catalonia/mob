//
//  FacebookFriendsVC.m
//  TasteSync
//
//  Created by Mobioneer_TT 1 on 1/16/13.
//  Copyright (c) 2013 Mobioneer. All rights reserved.
//

#import "FacebookFriendsVC.h"
#import "ProfileVC.h"
#import "CommonHelpers.h"
#import "FriendFilterCell.h"
#import "FriendProfileCell.h"

@interface FacebookFriendsVC ()
{
    
}
@end

@implementation FacebookFriendsVC

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
    [CommonHelpers setBackgroudImageForView:self.view];
   
    [self initUI];
    [self initData];
}

- (void)viewWillAppear:(BOOL)animated
{
    [super viewWillAppear:animated];

}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (void) initUI
{
    [scrollViewMain setContentSize:CGSizeMake(320, 500)];
}

- (void) initData
{
    self.arrData1 = [[NSMutableArray alloc] init ];
    self.arrData2 = [[NSMutableArray alloc] init ];
    for(int i=0; i<10; i++)
    {
        UserObj *obj = [[UserObj alloc] init];
        obj.firstname = @"Persion";
        obj.lastname = [NSString stringWithFormat:@"%d",i];
        obj.avatar = [UIImage imageNamed:@"avatar.png"];
        [self.arrData1 addObject:obj];
        [self.arrData2 addObject:obj];
    }
    
    self.arrDataFilter = [[NSMutableArray alloc] init];
    self.arrDataFriends = [[NSMutableArray alloc] init];
    if ([[CommonHelpers appDelegate] arrDataFBFriends].count >0) {
        self.arrDataFriends = [[CommonHelpers appDelegate] arrDataFBFriends];
    }
        
    
}
# pragma mark- IBAction's Define

- (IBAction)actionBack:(id)sender
{
    [self.navigationController popViewControllerAnimated:YES];
}

- (IBAction)actionHideKeyPad:(id)sender
{
   
    tbvFilter.hidden = YES;
    [self hideKeyBoard];
}



- (void)shareProfile
{
    UIActionSheet *actionSheet = [[UIActionSheet alloc]initWithTitle:@"Share" delegate:self cancelButtonTitle:@"Cancel" destructiveButtonTitle:nil otherButtonTitles:@"Facebook",@"Twitter", @"Tumblr",@"Email", nil];
    actionSheet.actionSheetStyle = UIActionSheetStyleBlackOpaque;
    
    
    [actionSheet showFromTabBar:self.tabBarController.tabBar];
    //  [actionSheet showInView:self.view];
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
    if (tableView == tbvFriends) {
    
        return _arrData1.count;
    }
    else if(tableView == tbvResult)
    {
     
        return _arrData2.count;
    }
    else if (tableView == tbvFilter)
    {
        return _arrDataFilter.count;
    }
    
    return 0;

}



- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    
    // table search
    if (tableView == tbvFilter) { // table search
        static NSString *CellIndentifier = @"friend_filter_cell";
        
        FriendFilterCell *cell = (FriendFilterCell *)[tableView dequeueReusableCellWithIdentifier:CellIndentifier];
        
        if (cell==nil) {
            NSLog(@"cell is nil");
            cell =(FriendFilterCell *) [[[NSBundle mainBundle ] loadNibNamed:@"FriendFilterCell" owner:self options:nil] objectAtIndex:0];
            
            
        }
        
        [cell initForCell:[_arrDataFilter objectAtIndex:indexPath.row]];
        
        
        return cell;
    }
    else if(tableView == tbvFriends)
    {
        static NSString *CellIndentifier = @"friend_profile_cell";
        
        FriendProfileCell *cell = (FriendProfileCell *)[tableView dequeueReusableCellWithIdentifier:CellIndentifier];
        
        if (cell==nil) {
            NSLog(@"cell is nil");
            cell =(FriendProfileCell *) [[[NSBundle mainBundle ] loadNibNamed:@"FriendProfileCell" owner:self options:nil] objectAtIndex:0];
            
            
        }
        
        UserObj *obj = [_arrData1 objectAtIndex:indexPath.row];
      
        
        [cell initCell:obj];
        
        return cell;
    }
    else if(tableView == tbvResult)
    {
        static NSString *CellIndentifier = @"friend_profile_cell";
        
        FriendProfileCell *cell = (FriendProfileCell *)[tableView dequeueReusableCellWithIdentifier:CellIndentifier];
        
        if (cell==nil) {
            NSLog(@"cell is nil");
            cell =(FriendProfileCell *) [[[NSBundle mainBundle ] loadNibNamed:@"FriendProfileCell" owner:self options:nil] objectAtIndex:0];
            
            
        }
        
        UserObj *obj = [_arrData2 objectAtIndex:indexPath.row];
              
        [cell initCell:obj];
        
        return cell;

    }
    else
    {
        return nil;
    }
    
}

- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath
{
    
    if (tableView == tbvFilter) {
        
        tbvFilter.hidden = YES;
        [self hideKeyBoard];
        [self.arrData2 addObject:[_arrDataFilter objectAtIndex:indexPath.row]];
        [tbvResult reloadData];
    }
    else
    {
        [self hideKeyBoard];
        if (tableView == tbvFriends) {
            UserObj *obj = [_arrData1 objectAtIndex:indexPath.row];
            [[[CommonHelpers appDelegate] tabbarBaseVC] actionProfile:obj];
        }
        else if(tableView == tbvResult)
        {
            UserObj *obj = [_arrData2 objectAtIndex:indexPath.row];
            [[[CommonHelpers appDelegate] tabbarBaseVC] actionProfile:obj];
        }
    }
}


#pragma mark - UITextFieldDelegate

- (BOOL)textFieldShouldBeginEditing:(UITextField *)textField
{
    
    if ([UserDefault userDefault].loginStatus == NotLogin) {
        
        [[CommonHelpers appDelegate] showLoginDialog];
        return NO;
    }
    else
    {
        textField.text = @"";
        
        [scrollViewMain setContentOffset:CGPointMake(0, 200)];
        
        /*
        [UIView animateWithDuration:0.4
                              delay:0
                            options: UIViewAnimationCurveEaseIn
                         animations:^{
                             self.view.frame=CGRectMake(self.view.frame.origin.x,-150,self.view.frame.size.width, self.view.frame.size.height);
                         }
                         completion:^(BOOL finished){
                             debug(@"move done");
//                             [self searchLocal:@""];
                             
                             
                         }];
         */
    }
    
    
    
    return YES;
}


-(BOOL) textFieldShouldReturn:(UITextField *)textField{
    [self hideKeyBoard];
    return YES;
}

- (BOOL)textFieldShouldClear:(UITextField *)textField
{
    if (textField==tfSearch) {
        tbvFilter.hidden = YES;
    }
    return YES;
}

- (BOOL)textField:(UITextField *)textField shouldChangeCharactersInRange:(NSRange)range replacementString:(NSString *)string
{
    if (textField == tfSearch) {
        [self searchLocal:[textField.text stringByReplacingCharactersInRange:range withString:string]];
        
    }
    
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


    
    for (UserObj *obj in _arrData2) {
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
    
    [tfSearch resignFirstResponder];
  /*  [UIView animateWithDuration:0.4
                          delay:0
                        options: UIViewAnimationCurveEaseIn
                     animations:^{
                         self.view.frame=CGRectMake(self.view.frame.origin.x,0,self.view.frame.size.width, self.view.frame.size.height);
                     }
                     completion:^(BOOL finished){
                         debug(@"move done");
                         
                     }];
   
   */
    [scrollViewMain setContentOffset:CGPointZero];

    
}

- (void) touchesBegan:(NSSet *)touches withEvent:(UIEvent *)event
{
   
    tbvFilter.hidden = YES;
    [self hideKeyBoard];
}






@end