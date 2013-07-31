//
//  ConfigProfileVC.m
//  TasteSync
//
//  Created by Victor on 2/19/13.
//  Copyright (c) 2013 Mobioneer. All rights reserved.
//

#import "ConfigProfileVC.h"
#import "FriendFilterCell.h"
#import "CommonHelpers.h"

@interface ConfigProfileVC ()<UIGestureRecognizerDelegate,UIScrollViewDelegate>
{
    UserDefault *userDefault;
    int textFieldSelected ;
    BOOL keypadShown;
    
    CGPoint offset;
    
    CGFloat TBV_POINT_Y ;

}


typedef enum _TextFieldSelect
{
    TextFieldFriend  = 6,
    TextFieldCusine     =   7,
    TextFieldRestaurant1 =   1,
    TextFieldRestaurant2 =   2,
    TextFieldRestaurant3 =   3,
    TextFieldRestaurant4 =   4,
    TextFieldRestaurant5 =   5
    
} TextFieldSelect;

@end



@implementation ConfigProfileVC

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
    
    // Do any additional setup after loading the view from its nib.
    [self initUI];
   
    [self initData];
    
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (void) initUI

{
    [scrollViewMain setContentSize:CGSizeMake(320, 800)];
/*
    if ([CommonHelpers isiOS6]) {
        NSDictionary *underlinerAtt =@{NSUnderlineStyleAttributeName : @1};
        lbTitle.attributedText = [[NSAttributedString alloc] initWithString:@"Personalize your Experience!" attributes:underlinerAtt];
    }
    else
    {
        
    }
 */   
    ivAvatarFriend.image = nil;
  
}
- (void) initData
{
    userDefault = [UserDefault userDefault];
    if (_arrData == nil) {
        self.arrData = [[NSMutableArray alloc] initWithObjects:@"",@"",@"",@"",@"", nil ];
        
//        arrData contains 5 of top restaurant 
        
    }
    if (_arrDataCusine == nil) {
        self.arrDataCusine = [[NSMutableArray alloc] init ];
        self.arrDataCusine = [[CommonHelpers appDelegate] arrCuisine];
    }
    
    if (_arrDataFriends == nil) {
        self.arrDataFriends = [[NSMutableArray alloc] init ];
         self.arrDataFriends = [[CommonHelpers appDelegate] arrDataFBFriends];
    }
    
    if (_arrDataFilter == nil) {
        self.arrDataFilter = [[NSMutableArray alloc] init ];
    }
    
    if (_arrDataRestaurant == nil) {
        self.arrDataRestaurant = [[NSMutableArray alloc] initWithObjects:@"Chinese",@"KFC Danang", @"Lotteria Danang", @"KSX", nil ];
    }
    
    UserObj *userObj = userDefault.user;
    if (userObj != nil) {
        lbName.text = [NSString stringWithFormat:@"%@ %@", userObj.firstname, userObj.lastname];
        ivAvatar.image = userObj.avatar;

    }
    if ((userDefault.city != nil) && (userDefault.state != nil)) {
        lbLocation.text = [NSString stringWithFormat:@"%@, %@",userDefault.city, userDefault.state];
    }
    
   
    
    debug(@"ConfigProfile -> arrDataFriends -> count = %d", _arrDataFriends.count);
    
}
    
#pragma mark - IBAction's define

- (IBAction)actionDone:(id)sender
{
    debug(@"actionDone");
    [[CommonHelpers appDelegate] showAskTab];
}

- (IBAction)actionInvite:(id)sender;
{
    
    [btInvite setTitle:@"Invited" forState:UIControlStateNormal];
    btInvite.enabled = NO;
    
}

- (IBAction)actionHideKeyPad:(id)sender
{
    [self hideKeyBoard];
}



#pragma mark - UITableView


- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView
{
    
    return 1;
}

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section
{
    
    if (_arrDataFilter) {
        return _arrDataFilter.count;
    }
          
    return 0;
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    if (textFieldSelected != TextFieldFriend) {
        static NSString *CellIndentifier = @"cell";
        
        UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:CellIndentifier];
        if (cell==nil) {
            cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleDefault reuseIdentifier:CellIndentifier];
        }
        
        NSString *obj = [_arrDataFilter objectAtIndex:indexPath.row];
        
        cell.textLabel.text = obj;
        [cell.textLabel setFont:[UIFont systemFontOfSize:14]];
        //        cell.textLabel.textAlignment = UITextAlignmentRight;
        cell.textLabel.textColor = [UIColor whiteColor];
        
        
        return cell;

    }
    else
    {
        static NSString *CellIndentifier = @"friend_filter_cell";
        
        FriendFilterCell *cell = (FriendFilterCell *)[tableView dequeueReusableCellWithIdentifier:CellIndentifier];
        
        if (cell==nil) {
            debug(@"cell is nil");
            cell =(FriendFilterCell *) [[[NSBundle mainBundle ] loadNibNamed:@"FriendFilterCell" owner:self options:nil] objectAtIndex:0];
            
        }
        
        [cell initForCell:[_arrDataFilter objectAtIndex:indexPath.row]];

        /*
        if (textFieldSelected == 0) {
            
            return nil;
        }
        else if(textFieldSelected == TextFieldFriend)
        {
            
        }
        else
        {
            [cell initWithName:[_arrDataFilter objectAtIndex:indexPath.row]];
        }
               
        
        */
        
        return cell;
    }
    
  
}

- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath
{
    
     debug(@"tableView -> didSelectRowAtIndexPath -> TextFieldSelected = %d", textFieldSelected);
    
    switch (textFieldSelected) {
        case TextFieldFriend:
        {
           
            UserObj *userObj = [_arrDataFilter objectAtIndex:indexPath.row];
            tfFriend.text = [NSString stringWithFormat:@"%@ %@", userObj.firstname, userObj.lastname];
            ivAvatarFriend.image = userObj.avatar;
            
            //check here
            
            if (2 % 2) {
                btInvite.hidden = NO;
                btCheck.hidden = YES;
                
                [btInvite setTitle:@"Invite" forState:UIControlStateNormal];
                btInvite.enabled = YES;
            }
            else
            {
                btInvite.hidden = YES;
                btCheck.hidden = NO;

            }
            
        }
            break;
            
        case TextFieldCusine:
        {
            NSString *txt = [_arrDataFilter objectAtIndex:indexPath.row];            
            tfCusine.text = txt;
        }
            break;
            
        case TextFieldRestaurant1:
        {
            NSString *txt = [_arrDataFilter objectAtIndex:indexPath.row];
            tfRestaurant1.text = txt;
            [self.arrData replaceObjectAtIndex:0 withObject:txt];
        }
            break;
        case TextFieldRestaurant2:
        {
            NSString *txt = [_arrDataFilter objectAtIndex:indexPath.row];
            tfRestaurant2.text = txt;
            [self.arrData replaceObjectAtIndex:0 withObject:txt];
        }
            break;
        case TextFieldRestaurant3:
        {
            NSString *txt = [_arrDataFilter objectAtIndex:indexPath.row];
            tfRestaurant3.text = txt;
            [self.arrData replaceObjectAtIndex:0 withObject:txt];
        }
            break;
        case TextFieldRestaurant4:
        {
            NSString *txt = [_arrDataFilter objectAtIndex:indexPath.row];
            tfRestaurant4.text = txt;
            [self.arrData replaceObjectAtIndex:0 withObject:txt];
        }
            break;
        case TextFieldRestaurant5:
        {
            NSString *txt = [_arrDataFilter objectAtIndex:indexPath.row];
            tfRestaurant5.text = txt;
            [self.arrData replaceObjectAtIndex:0 withObject:txt];
        }
            break;
        default:
            break;
    }
    
    tbvFilter.hidden = YES;
//    [self hideKeyBoard];
}



#pragma mark - UITextFieldDelegate

- (BOOL)textFieldShouldBeginEditing:(UITextField *)textField
{
    textField.text = @"";
    ivAvatarFriend.image = nil;
    btInvite.hidden = YES;
    btCheck.hidden = YES;
    
    keypadShown = TRUE;
    
    if (textField == tfFriend) {
        textFieldSelected = TextFieldFriend;
        TBV_POINT_Y = 690;
    }
    else if (textField == tfCusine)
    {
        textFieldSelected = TextFieldCusine;
        TBV_POINT_Y = 250;

    }
    else if (textField == tfRestaurant1)
    {
        textFieldSelected = TextFieldRestaurant1;
        TBV_POINT_Y = 340;

    }
    else if (textField == tfRestaurant2)
    {
        textFieldSelected = TextFieldRestaurant2;
        TBV_POINT_Y = 400;

    }
    else if (textField == tfRestaurant3)
    {
        textFieldSelected = TextFieldRestaurant3;
        TBV_POINT_Y = 460;

    }
    else if (textField == tfRestaurant4)
    {
        textFieldSelected = TextFieldRestaurant4;
        TBV_POINT_Y = 520;

    }
    else if (textField == tfRestaurant5)
    {
        textFieldSelected = TextFieldRestaurant5;
        TBV_POINT_Y = 570;

    }
   
    else
    {
        
    }
    
    [UIView animateWithDuration:0.4
                          delay:0
                        options: UIViewAnimationCurveEaseIn
                     animations:^{
                         viewMain.frame=CGRectMake(viewMain.frame.origin.x,-TBV_POINT_Y +30,viewMain.frame.size.width, viewMain.frame.size.height);
                     }
                     completion:^(BOOL finished){
                         debug(@"move done");
//                         [self searchLocal:@""];
                         
                     }];
    
    [tbvFilter setFrame:CGRectMake(tbvFilter.frame.origin.x,TBV_POINT_Y, tbvFilter.frame.size.width, tbvFilter.frame.size.height)];
    
    return YES;
}


-(BOOL) textFieldShouldReturn:(UITextField *)textField{
    //    [self onClickLookup:nil];
    [self hideKeyBoard];
    return YES;
}

- (BOOL)textFieldShouldClear:(UITextField *)textField
{
    if ([textField isEqual:tfFriend]) {
        btInvite.hidden = YES;
    }

    return YES;
}

- (BOOL)textField:(UITextField *)textField shouldChangeCharactersInRange:(NSRange)range replacementString:(NSString *)string
{
    if (TRUE) {
        [self searchLocal:[textField.text stringByReplacingCharactersInRange:range withString:string]];
    }
    
        
    return TRUE;
    
}

# pragma mark - Others


- (void) searchLocal:(NSString *)txt
{
    
    
    tbvFilter.hidden = YES;
    btInvite.hidden = YES;
    [self.arrDataFilter removeAllObjects];
    
    if (txt.length == 0) {
        return;
        
    }
    
    NSMutableArray *arrTmp = [[NSMutableArray alloc] init];

    
    switch (textFieldSelected) {
        case TextFieldFriend:
        {
                        
            for (UserObj *userObj in self.arrDataFriends) {
                NSString *firstName = [userObj.firstname uppercaseString];
                NSString *uTxt = [txt uppercaseString];
                int diff = strncmp([firstName UTF8String], [uTxt UTF8String], uTxt.length);              
                
                if (diff == 0) {
                    debug(@"TextFieldCusine added");
                    
                    [arrTmp addObject:userObj];
                }
                
            }
            
            for (UserObj *userObj in self.arrDataFriends) {
                NSString *lastName = [userObj.lastname uppercaseString];
                NSString *uTxt = [txt uppercaseString];
                int diff = strncmp([lastName UTF8String], [uTxt UTF8String], uTxt.length);
                
                if (diff == 0) {
                    debug(@"TextFieldCusine added");
                    if (![arrTmp containsObject:userObj]) {
                        [arrTmp addObject:userObj];

                    }
                }
                
            }
            
        }
            break;
        case TextFieldCusine:
        {
            for (NSString *strObj in _arrDataCusine) {
                              
                NSString  *ustrObj =  [strObj uppercaseString];
                NSString *utxt =   [txt uppercaseString];
                
                debug(@"ustrObj -  utxt  -> %@ - %@ ",ustrObj,utxt);
                
                int diff = strncmp([ustrObj UTF8String], [utxt UTF8String], utxt.length);
                                
                
                if (/*p!=NULL*/ diff == 0) {
                    debug(@"TextFieldCusine added");

                    [arrTmp addObject:strObj];
                }
                
            

            }
        }
            break;
        case 0:
        {
            // is default
        }
            
        default:
        {
            // case restaurant
            for (NSString *strObj in _arrDataRestaurant) {
              /*  char *p;
                p = strstr([strObj UTF8String], [txt UTF8String]);
                if (p!=NULL) {
                    [arrTmp addObject:strObj];
                }
               */
                NSString  *ustrObj =  [strObj uppercaseString];
                NSString *utxt =   [txt uppercaseString];
            
                int diff = strncmp([ustrObj UTF8String], [utxt UTF8String], utxt.length);
                
                debug(@"ustrObj -  utxt  -> %@ - %@ ",ustrObj,utxt);
                
                if (/*p!=NULL*/ diff == 0) {
                    debug(@"added");
                    [arrTmp addObject:strObj];
                }
                
            
                
            }
            
            for (NSString *str in _arrData) {
                if ([arrTmp containsObject:str]) {
                    [arrTmp removeObject:str];
                }
            }
            
        }
            break;
    }
   
    
    self.arrDataFilter = arrTmp;
                 
    if (self.arrDataFilter.count>0) {
        tbvFilter.hidden = NO;
        CGRect frame = tbvFilter.frame;
        if (self.arrDataFilter.count>5) {
            frame.size.height = 5*44;

        }
        else{
            frame.size.height = (_arrDataFilter.count) *44;

        }
        [tbvFilter setFrame:frame];
        [tbvFilter reloadData];
    }
    
    
}


#pragma mark - Other's function

- (void) hideKeyBoard
{
    debug(@"hidekeyBoard");
    /*
    if (!keypadShown) {
        tbvFilter.hidden = YES;
    }
*/
    
    tbvFilter.hidden = YES;
    
    keypadShown = FALSE ;
    
    [tfCusine resignFirstResponder];
    [tfFriend resignFirstResponder];
    [tfRestaurant1 resignFirstResponder];
    [tfRestaurant2 resignFirstResponder];
    [tfRestaurant3 resignFirstResponder];
    [tfRestaurant4 resignFirstResponder];
    [tfRestaurant5 resignFirstResponder];
    
    [UIView animateWithDuration:0
                          delay:0
                        options: UIViewAnimationCurveEaseIn
                     animations:^{
                         viewMain.frame=CGRectMake(viewMain.frame.origin.x,0,viewMain.frame.size.width, viewMain.frame.size.height);
                     }
                     completion:^(BOOL finished){
                         debug(@"hideKeyBoard move done");

                         [scrollViewMain setContentOffset:offset];
                     }];
}

#pragma mark - UIScrollViewDelegate
/*
- (void)scrollViewDidEndScrollingAnimation:(UIScrollView *)scrollView
{
    offset = scrollView.contentOffset;
    debug(@"ConfigProfile ->scrollViewDidEndScrollingAnimation with offset(%f,%f)",offset.x, offset.y);
}
 
 */

- (void)scrollViewDidScroll:(UIScrollView *)scrollView
{
    if (keypadShown) {
        return;
    }
    offset = scrollView.contentOffset;
    debug(@"ConfigProfile ->scrollViewDidEndScrollingAnimation with offset(%f,%f)",offset.x, offset.y);

}
@end
