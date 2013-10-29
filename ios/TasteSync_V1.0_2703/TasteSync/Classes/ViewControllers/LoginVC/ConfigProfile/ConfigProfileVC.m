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
#import "JSONKit.h"
#import "TSGlobalObj.h"

#define viewInfoHeigh 52

@interface ConfigProfileVC ()<UIGestureRecognizerDelegate,UIScrollViewDelegate>
{
    UserDefault *userDefault;
    int textFieldSelected ;
    BOOL keypadShown;
    
    //NSString* restaurantVariable;
    
    CGPoint offset;
    
    CGFloat TBV_POINT_Y ;
    
    UserObj* inviteUserObj;
    TSGlobalObj* cuisineObj;
    
    NSMutableArray* arrayRestaurant1;
    NSMutableArray* arrayRestaurant2;
    NSMutableArray* arrayRestaurant3;
    NSMutableArray* arrayRestaurant4;
    NSMutableArray* arrayRestaurant5;
    
    NSMutableArray* variableRestaurant;
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
    
    CRequest* request = [[CRequest alloc]initWithURL:@"showProfileFriends" RQType:RequestTypePost RQData:RequestDataUser RQCategory:ApplicationForm withKey:11];
    request.delegate = self;
    [request setFormPostValue:[UserDefault userDefault].userID forKey:@"userId"];
    [request startFormRequest];
    
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
    
    ivAvatarFriend.image = nil;
  
}
- (void) initData
{
    
    arrayRestaurant1 = [[NSMutableArray alloc]init];
    arrayRestaurant2 = [[NSMutableArray alloc]init];
    arrayRestaurant3 = [[NSMutableArray alloc]init];
    arrayRestaurant4 = [[NSMutableArray alloc]init];
    arrayRestaurant5 = [[NSMutableArray alloc]init];
    
    variableRestaurant = [[NSMutableArray alloc]initWithObjects:@"", @"", @"", @"", @"", nil];
    
    userDefault = [UserDefault userDefault];
    if (_arrData == nil) {
        self.arrData = [[NSMutableArray alloc] init];
        for (int i = 0; i < 5; i++) {
            TSGlobalObj* global = [[TSGlobalObj alloc]init];
            global.uid = @"";
            global.name = @"";
            [self.arrData addObject:global];
        }
        
    }
    if (_arrDataCusine == nil) {
        self.arrDataCusine = [[NSMutableArray alloc] init ];
        self.arrDataCusine = [[CommonHelpers appDelegate] arrDropdown];
    }
    
    if (_arrDataFriends == nil) {
        self.arrDataFriends = [[NSMutableArray alloc] init ];
         self.arrDataFriends = [[CommonHelpers appDelegate] arrDataFBFriends];
    }
    
    if (_arrDataFilter == nil) {
        self.arrDataFilter = [[NSMutableArray alloc] init ];
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
    
    NSMutableDictionary *nameElements = [NSMutableDictionary dictionary];
    [nameElements setObject:[UserDefault userDefault].userID forKey:@"userId"];

    if (inviteUserObj != nil) {
        [nameElements setObject:inviteUserObj.uid forKey:@"facebookFriendId"];
        NSLog(@"userName: %@, userID: %@", inviteUserObj.name, inviteUserObj.uid);
    }
    if (cuisineObj != nil) {
        [nameElements setObject:cuisineObj.uid forKey:@"cuisineId"];
        NSLog(@"cuisinName: %@, cuisinID: %@", cuisineObj.name, cuisineObj.uid);
    }
    
    NSMutableArray* arrayRest = [[NSMutableArray alloc]init];
    for (TSGlobalObj* global in _arrData) {
        if (![global.uid isEqualToString:@""]) {
            [arrayRest addObject:global.uid];
            NSLog(@"globalName: %@, globalID: %@", global.name, global.uid);
        }
        
    }
    [nameElements setObject:arrayRest forKey:@"restaurandId"];
    
    
    NSString* jsonString = [nameElements JSONString];
    NSLog(@"%@",jsonString);
    
    
    if (cuisineObj != nil && arrayRest.count!= 0 ) {
        CRequest* request = [[CRequest alloc]initWithURL:@"submitSignupDetail" RQType:RequestTypePost RQData:RequestDataUser RQCategory:ApplicationJson withKey:10    ];
        [request setHeader:HeaderTypeJSON];
        request.delegate = self;
        [request setJSON:jsonString];
        [request startRequest];
    }
    else
    {
        [CommonHelpers showInfoAlertWithTitle:@"TasteSync" message:@"Please enter empty data!" delegate:nil tag:0];
    }
    
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
        
        UserObj *obj = [_arrDataFilter objectAtIndex:indexPath.row];
        
        cell.textLabel.text = obj.name;
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
            inviteUserObj = userObj;
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
            TSGlobalObj *global = [_arrDataFilter objectAtIndex:indexPath.row];            
            tfCusine.text = global.name;
            cuisineObj = global;
        }
            break;
            
        case TextFieldRestaurant1:
        {
            
            TSGlobalObj *global = [_arrDataFilter objectAtIndex:indexPath.row];
            tfRestaurant1.text = global.name;
            [self.arrData replaceObjectAtIndex:0 withObject:global];
        }
            break;
        case TextFieldRestaurant2:
        {
            TSGlobalObj *global = [_arrDataFilter objectAtIndex:indexPath.row];
            tfRestaurant2.text = global.name;
            [self.arrData replaceObjectAtIndex:1 withObject:global];
        }
            break;
        case TextFieldRestaurant3:
        {
            TSGlobalObj *global = [_arrDataFilter objectAtIndex:indexPath.row];
            tfRestaurant3.text = global.name;
            [self.arrData replaceObjectAtIndex:2 withObject:global];
        }
            break;
        case TextFieldRestaurant4:
        {
            TSGlobalObj *global = [_arrDataFilter objectAtIndex:indexPath.row];
            tfRestaurant4.text = global.name;
            [self.arrData replaceObjectAtIndex:3 withObject:global];
        }
            break;
        case TextFieldRestaurant5:
        {
            TSGlobalObj *global = [_arrDataFilter objectAtIndex:indexPath.row];
            tfRestaurant5.text = global.name;
            [self.arrData replaceObjectAtIndex:4 withObject:global];
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
    tbvFilter.hidden = YES;
    
    keypadShown = TRUE;
    
    if (textField == tfFriend) {
        textFieldSelected = TextFieldFriend;
        TBV_POINT_Y = 690;
        inviteUserObj = nil;
    }
    else if (textField == tfCusine)
    {
        textFieldSelected = TextFieldCusine;
        TBV_POINT_Y = 250;
        cuisineObj = nil;

    }
    else if (textField == tfRestaurant1)
    {
        textFieldSelected = TextFieldRestaurant1;
        TBV_POINT_Y = 340;
        
        TSGlobalObj* global = [[TSGlobalObj alloc]init];
        global.uid = @"";
        global.name = @"";
        [self.arrData replaceObjectAtIndex:0 withObject:global];
    }
    else if (textField == tfRestaurant2)
    {
        textFieldSelected = TextFieldRestaurant2;
        TBV_POINT_Y = 400;
        
        TSGlobalObj* global = [[TSGlobalObj alloc]init];
        global.uid = @"";
        global.name = @"";
        [self.arrData replaceObjectAtIndex:1 withObject:global];
    }
    else if (textField == tfRestaurant3)
    {
        textFieldSelected = TextFieldRestaurant3;
        TBV_POINT_Y = 460;
        
        TSGlobalObj* global = [[TSGlobalObj alloc]init];
        global.uid = @"";
        global.name = @"";
        [self.arrData replaceObjectAtIndex:2 withObject:global];
    }
    else if (textField == tfRestaurant4)
    {
        textFieldSelected = TextFieldRestaurant4;
        TBV_POINT_Y = 520;
        
        TSGlobalObj* global = [[TSGlobalObj alloc]init];
        global.uid = @"";
        global.name = @"";
        [self.arrData replaceObjectAtIndex:3 withObject:global];
    }
    else if (textField == tfRestaurant5)
    {
        textFieldSelected = TextFieldRestaurant5;
        TBV_POINT_Y = 570;
        
        TSGlobalObj* global = [[TSGlobalObj alloc]init];
        global.uid = @"";
        global.name = @"";
        [self.arrData replaceObjectAtIndex:4 withObject:global];
    }
   
    else
    {
        
    }
    
    [UIView animateWithDuration:0.4
                          delay:0
                        options: UIViewAnimationCurveEaseIn
                     animations:^{
                         viewMain.frame=CGRectMake(viewMain.frame.origin.x,-TBV_POINT_Y + 30 + 130,viewMain.frame.size.width, viewMain.frame.size.height);
                         viewUserInfo.frame = CGRectMake(viewUserInfo.frame.origin.x,- TBV_POINT_Y + 30 - 119,viewUserInfo.frame.size.width, viewUserInfo.frame.size.height);
                     }
                     completion:^(BOOL finished){
                         debug(@"move done");
//                         [self searchLocal:@""];
                         
                     }];
    
    [tbvFilter setFrame:CGRectMake(tbvFilter.frame.origin.x,TBV_POINT_Y - 130, tbvFilter.frame.size.width, tbvFilter.frame.size.height)];
    
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
            for (TSGlobalObj *globalObj in _arrDataCusine) {
                
                NSString* strObj = globalObj.name;
                NSString  *ustrObj =  [strObj uppercaseString];
                NSString *utxt =   [txt uppercaseString];
                
                debug(@"ustrObj -  utxt  -> %@ - %@ ",ustrObj,utxt);
                
                int diff = strncmp([ustrObj UTF8String], [utxt UTF8String], utxt.length);
                                
                
                if (/*p!=NULL*/ diff == 0) {
                    debug(@"TextFieldCusine added");

                    [arrTmp addObject:globalObj];
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
            
            NSMutableArray* arrayRestaurant;
            
            if (textFieldSelected == TextFieldRestaurant1) {
                arrayRestaurant = arrayRestaurant1;
            }
            if (textFieldSelected == TextFieldRestaurant2) {
                arrayRestaurant = arrayRestaurant2;
            }
            if (textFieldSelected == TextFieldRestaurant3) {
                arrayRestaurant = arrayRestaurant3;
            }
            if (textFieldSelected == TextFieldRestaurant4) {
                arrayRestaurant = arrayRestaurant4;
            }
            if (textFieldSelected == TextFieldRestaurant5) {
                arrayRestaurant = arrayRestaurant5;
            }
            
            if (txt.length >= 1) {
                if (txt.length == 1) {
                    if (![[txt uppercaseString] isEqualToString:[variableRestaurant objectAtIndex:(textFieldSelected - 1)]]) {
                        
//                        CRequest* request = [[CRequest alloc]initWithURL:@"showRestaurantSuggestion" RQType:RequestTypePost RQData:RequestDataUser RQCategory:ApplicationForm withKey:textFieldSelected];
//                        request.delegate = self;
//                        [request setFormPostValue:[UserDefault userDefault].userID forKey:@"userId"];
//                        [request setFormPostValue:[txt uppercaseString] forKey:@"key"];
//                        [request startFormRequest];

                        TSGlobalObj* region = [CommonHelpers getDefaultCityObj];
                        
                        CRequest* request = [[CRequest alloc]initWithURL:@"suggestrestaurantnames" RQType:RequestTypePost RQData:RequestPopulate RQCategory:ApplicationForm withKey:1];
                        request.delegate = self;
                        [request setFormPostValue:txt forKey:@"key"];
                        [request setFormPostValue:region.cityObj.uid forKey:@"cityid"];
                        [request startFormRequest];
                        
                        NSLog(@"request here Value: %@ of Index: %d", [txt uppercaseString], textFieldSelected);
                        [variableRestaurant replaceObjectAtIndex:(textFieldSelected - 1) withObject:[txt uppercaseString]];
                    }
                }
                
//                for (RestaurantObj *restObj in arrayRestaurant) {
//                    
//                    NSString* strObj = restObj.name;
//                    
//                    NSString  *ustrObj =  [strObj uppercaseString];
//                    NSString *utxt =   [txt uppercaseString];
//                    
//                    int diff = strncmp([ustrObj UTF8String], [utxt UTF8String], utxt.length);
//                    
//                    debug(@"ustrObj -  utxt restaurent  -> %@ - %@ ",ustrObj,utxt);
//                    
//                    if ( diff == 0 ) {
//                        debug(@"added");
//                        [arrTmp addObject:restObj];
//                    }
//                }
//                
//                for (TSGlobalObj *global in _arrData) {
//                    if ([arrTmp containsObject:global]) {
//                        [arrTmp removeObject:global];
//                    }
//                }
                
            }
            
        }
        break;
    }
   
    if (textFieldSelected == TextFieldCusine || textFieldSelected == TextFieldFriend) {
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
                         if (viewUserInfo.frame.size.height == viewInfoHeigh) {
                             viewMain.frame = CGRectMake(viewMain.frame.origin.x, 71 ,viewMain.frame.size.width, viewMain.frame.size.height);
                             viewUserInfo.frame = CGRectMake(viewUserInfo.frame.origin.x,11,viewUserInfo.frame.size.width, viewUserInfo.frame.size.height);
                         }
                         else
                         {
                             viewMain.frame = CGRectMake(viewMain.frame.origin.x, 119 ,viewMain.frame.size.width, viewMain.frame.size.height);
                             viewUserInfo.frame = CGRectMake(viewUserInfo.frame.origin.x,11,viewUserInfo.frame.size.width, viewUserInfo.frame.size.height);
                         }
                         
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

-(void)responseData:(NSData *)data WithKey:(int)key UserData:(id)userData
{
    if(key == 11)
    {
        NSString* response = [[NSString alloc]initWithData:data encoding:NSUTF8StringEncoding];
        NSDictionary* dic = [response objectFromJSONString];
        NSArray* array = [dic objectForKey:@"friendTasteSync"];
        NSMutableArray* arrayUser = [[NSMutableArray alloc]init];
        for (NSDictionary* dic in array) {
            [arrayUser addObject:[dic objectForKey:@"name"]];
        }
        if (arrayUser.count == 0) {
            //imageProfile.frame = CGRectMake(imageProfile.frame.origin.x, imageProfile.frame.origin.y, imageProfile.frame.size.width, viewInfoHeigh);
            [lbInfo removeFromSuperview];
            viewUserInfo.frame = CGRectMake(viewUserInfo.frame.origin.x, viewUserInfo.frame.origin.y, viewUserInfo.frame.size.width, viewInfoHeigh);
            viewMain.frame = CGRectMake(viewMain.frame.origin.x, viewMain.frame.origin.y - 48, viewMain.frame.size.width, viewMain.frame.size.height);
            
        }
        else if (arrayUser.count > 3) {
            lbInfo.text = [NSString stringWithFormat:@"%@, %@, %@ and %d other friends already use TasteSync", [arrayUser objectAtIndex:0], [arrayUser objectAtIndex:1], [arrayUser objectAtIndex:2], [arrayUser count] - 3];
        }
        else
        {
            int i = 0;
            NSString* list;
            for (NSString* str in arrayUser) {
                if (i == 0)
                    list = [arrayUser objectAtIndex:i];
                else
                    list = [list stringByAppendingString:[NSString stringWithFormat:@", %@",[arrayUser objectAtIndex:i]]];
                i++;
            }
            lbInfo.text = [NSString stringWithFormat:@"%@ already use TasteSync", list];
        }
    }
    else if (key != 10) {
        NSString* response = [[NSString alloc]initWithData:data encoding:NSUTF8StringEncoding];
        NSLog(@"%@",response);
        NSArray* arrayRestaurant = [response objectFromJSONString];
        if (key == TextFieldRestaurant1) {
            [arrayRestaurant1 removeAllObjects];
        }
        if (key == TextFieldRestaurant2) {
            [arrayRestaurant2 removeAllObjects];
        }
        if (key == TextFieldRestaurant3) {
            [arrayRestaurant3 removeAllObjects];
        }
        if (key == TextFieldRestaurant4) {
            [arrayRestaurant4 removeAllObjects];
        }
        if (key == TextFieldRestaurant5) {
            [arrayRestaurant5 removeAllObjects];
        }
        for (NSDictionary* dic in arrayRestaurant) {
            TSGlobalObj* restObj = [[TSGlobalObj alloc]init];
            restObj.uid = [dic objectForKey:@"restaurantId"];
            restObj.name = [dic objectForKey:@"restaurantName"];
            if (key == TextFieldRestaurant1) {
                [arrayRestaurant1 addObject:restObj];
            }
            if (key == TextFieldRestaurant2) {
                [arrayRestaurant2 addObject:restObj];
            }
            if (key == TextFieldRestaurant3) {
                [arrayRestaurant3 addObject:restObj];
            }
            if (key == TextFieldRestaurant4) {
                [arrayRestaurant4 addObject:restObj];
            }
            if (key == TextFieldRestaurant5) {
                [arrayRestaurant5 addObject:restObj];
            }
        }
        
        
        if (key == TextFieldRestaurant1) {
            self.arrDataFilter = arrayRestaurant1;
        }
        if (key == TextFieldRestaurant2) {
            self.arrDataFilter = arrayRestaurant2;
        }
        if (key == TextFieldRestaurant3) {
            self.arrDataFilter = arrayRestaurant3;
        }
        if (key == TextFieldRestaurant4) {
            self.arrDataFilter = arrayRestaurant4;
        }
        if (key == TextFieldRestaurant5) {
            self.arrDataFilter = arrayRestaurant5;
        }
        
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
    else
    {
        NSString* response = [[NSString alloc]initWithData:data encoding:NSUTF8StringEncoding];
        NSDictionary* dic = [response objectFromJSONString];
        if ([dic objectForKey:@"successMsg"] != nil) {
            [[CommonHelpers appDelegate] showAskTab];
        }
        else
        {
            [CommonHelpers showConfirmAlertWithTitle:@"TasteSync" message:@"Error! Your data incorrect!" delegate:nil tag:0];
        }
    }
}
@end
