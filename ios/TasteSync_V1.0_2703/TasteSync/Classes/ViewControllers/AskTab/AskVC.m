//
//  AskVC.m
//  TasteSync
//
//  Created by Victor on 2/19/13.
//  Copyright (c) 2013 Mobioneer. All rights reserved.
//

#import "AskVC.h"
#import "CommonHelpers.h"
#import "AskRecommendationsVC.h"
#import "TagView.h"
#import "TSGlobalObj.h"
#import "TSCityObj.h"

@interface AskVC ()<TagObjDelegate,TagViewDelegate>
{
    BOOL filterViewShown;
    BOOL chooseRegion;
    CGRect scrollPosition;    
    TagView *tagView;
    NSMutableArray *arrDataAsk;
    UITextField *cTextField;
    TSGlobalObj *region;
    NSString* cityLocal;
    NSString* _storeLocation;
}

@end

@implementation AskVC

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
    [self.navigationController setNavigationBarHidden:YES];
    // Do any additional setup after loading the view from its nib.
    [self initUI];
    [self initData];

}
- (void) viewWillAppear:(BOOL)animated
{
    [super viewWillAppear:animated];
    if ([CommonHelpers appDelegate].askSubmited) {
        
        [CommonHelpers appDelegate].askSubmited = NO;
        [self initUI];
        [self initData];
    
    }

    
}
- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

#pragma mark - private's function

- (void) initUI
{
    [CommonHelpers setBackgroudImageForView:self.view];
    [scrollViewMain setContentSize:CGSizeMake(320, 700)];    
    [scrollViewCusine setContentSize:CGSizeMake(segCtrCusine.frame.size.width + 40, 30)];
    [scrollViewOccassion setContentSize:CGSizeMake(segCtrOccasion.frame.size.width + 20, 30)];
    [scrollViewWho setContentSize:CGSizeMake(segCtrWho.frame.size.width + 20, 30)];
    [scrollViewPrice setContentSize:CGSizeMake(segCtrPrice.frame.size.width + 20, 30)];
    [scrollViewTheme setContentSize:CGSizeMake(segCtrTheme.frame.size.width + 20, 30)];
    [scrollViewTypeOf setContentSize:CGSizeMake(segCtrTypeOf.frame.size.width + 30, 30)];
    
    
    for (int i = 0; i< [[[CommonHelpers appDelegate] arrCuisine] count]; i++) {
        TSGlobalObj* cuisine = [[[CommonHelpers appDelegate ] arrCuisine] objectAtIndex:i];
        if (i < 5) 
            [segCtrCusine setTitle:cuisine.name forSegmentAtIndex:i];
        else 
            [segCtrCusine insertSegmentWithTitle:cuisine.name atIndex:i animated:NO];
    }
    for (int i= 0; i< [[[CommonHelpers appDelegate] arrOccasion] count]; i++) {
        TSGlobalObj* occasion = [[[CommonHelpers appDelegate ] arrOccasion] objectAtIndex:i];
        if (i < 5) 
            [segCtrOccasion setTitle:occasion.name forSegmentAtIndex:i];
        else
            [segCtrOccasion insertSegmentWithTitle:occasion.name atIndex:i animated:NO];  
        
    }
    for (int i= 0; i< [[[CommonHelpers appDelegate] arrPrice] count]; i++) {
        TSGlobalObj* price = [[[CommonHelpers appDelegate ] arrPrice ] objectAtIndex:i];
        if (i < 5) 
            [segCtrPrice setTitle:price.name forSegmentAtIndex:i];
        else
            [segCtrPrice insertSegmentWithTitle:price.name atIndex:i animated:NO];  
    }
    for (int i= 0; i< [[[CommonHelpers appDelegate] arrTheme] count]; i++) {
        TSGlobalObj* theme = [[[CommonHelpers appDelegate ] arrTheme ] objectAtIndex:i];
        if (i < 5) 
            [segCtrTheme setTitle:theme.name forSegmentAtIndex:i];
        else
            [segCtrTheme insertSegmentWithTitle:theme.name atIndex:i animated:NO];
    }
    for (int i= 0; i< [[[CommonHelpers appDelegate] arrTypeOfRestaurant] count]; i++){
        TSGlobalObj* typeOfRestaurant = [[[CommonHelpers appDelegate ] arrTypeOfRestaurant ] objectAtIndex:i];
        if (i < 5) 
            [segCtrTypeOf setTitle:typeOfRestaurant.name forSegmentAtIndex:i];
        else
            [segCtrTypeOf insertSegmentWithTitle:typeOfRestaurant.name atIndex:i animated:NO];
    }
    for (int i= 0; i< [[[CommonHelpers appDelegate] arrWhoAreUWith] count]; i++) {
        TSGlobalObj* whoAreYou = [[[CommonHelpers appDelegate ] arrWhoAreUWith ] objectAtIndex:i];
        if (i < 5) 
            [segCtrWho setTitle:whoAreYou.name forSegmentAtIndex:i];
        else
            [segCtrWho insertSegmentWithTitle:whoAreYou.name atIndex:i animated:NO];
        
    }

    [segCtrCusine addTarget:self action:@selector(actionSegmentControl:) forControlEvents:UIControlEventValueChanged];
    [segCtrOccasion addTarget:self action:@selector(actionSegmentControl:) forControlEvents:UIControlEventValueChanged];
    [segCtrPrice addTarget:self action:@selector(actionSegmentControl:) forControlEvents:UIControlEventValueChanged];
    [segCtrTheme addTarget:self action:@selector(actionSegmentControl:) forControlEvents:UIControlEventValueChanged];
    [segCtrTypeOf addTarget:self action:@selector(actionSegmentControl:) forControlEvents:UIControlEventValueChanged];
    [segCtrWho addTarget:self action:@selector(actionSegmentControl:) forControlEvents:UIControlEventValueChanged];

    NSMutableDictionary *textAttributes = [[NSMutableDictionary alloc] init];
    [textAttributes setObject:[UIColor whiteColor] forKey:UITextAttributeTextColor];
    
    [segCtrCusine setTintColor:SEGNMENT_COLOR];
    [segCtrCusine setTitleTextAttributes:textAttributes forState:UIControlStateNormal];
    [segCtrOccasion setTintColor:SEGNMENT_COLOR];
    [segCtrOccasion setTitleTextAttributes:textAttributes forState:UIControlStateNormal];
    [segCtrPrice setTintColor:SEGNMENT_COLOR];
    [segCtrPrice setTitleTextAttributes:textAttributes forState:UIControlStateNormal];
    [segCtrTheme setTintColor:SEGNMENT_COLOR];
    [segCtrTheme setTitleTextAttributes:textAttributes forState:UIControlStateNormal];
    [segCtrTypeOf setTintColor:SEGNMENT_COLOR];
    [segCtrTypeOf setTitleTextAttributes:textAttributes forState:UIControlStateNormal];
    [segCtrWho setTintColor:SEGNMENT_COLOR];
    [segCtrWho setTitleTextAttributes:textAttributes forState:UIControlStateNormal];
    
    segCtrCusine.selectedSegmentIndex = -1;
    segCtrPrice.selectedSegmentIndex = -1;
    segCtrTheme.selectedSegmentIndex = -1;
    segCtrTypeOf.selectedSegmentIndex = -1;
    segCtrWho.selectedSegmentIndex = -1;
    segCtrOccasion.selectedSegmentIndex = -1;
    
    [self resizeSegmentsToFitTitles:segCtrTypeOf];
    [self resizeSegmentsToFitTitles:segCtrWho];
    [self resizeSegmentsToFitTitles:segCtrPrice];
    [self resizeSegmentsToFitTitles:segCtrOccasion];
    [self resizeSegmentsToFitTitles:segCtrCusine];
    
    if ([CommonHelpers isiOS6]) {
        NSDictionary *underlinerAtt =@{NSUnderlineStyleAttributeName : @1};
        lbCusine.attributedText = [[NSAttributedString alloc] initWithString:@"CUISINE" attributes:underlinerAtt];
        lbOccasion.attributedText = [[NSAttributedString alloc] initWithString:@"OCCASION" attributes:underlinerAtt];
        lbPrice.attributedText = [[NSAttributedString alloc] initWithString:@"PRICE" attributes:underlinerAtt];
        lbTheme.attributedText = [[NSAttributedString alloc] initWithString:@"THEME" attributes:underlinerAtt];
        lbType.attributedText = [[NSAttributedString alloc] initWithString:@"TYPE OF RESTAURANT" attributes:underlinerAtt];
        lbWho.attributedText = [[NSAttributedString alloc] initWithString:@"WHO ARE YOU WITH?" attributes:underlinerAtt];

    }
       

    [self actionDoneFilter:nil];
    
    arrDataAsk = [[NSMutableArray alloc] init];
    
    tagView = [[TagView alloc] initWithArray:arrDataAsk option:TagViewEnumDefault delegate:self];
    [tagView setFrame:CGRectMake(tagView.frame.origin.x, tagView.frame.origin.y, tagView.frame.size.width, tagView.frame.size.height + 15)];
    
    debug(@"TagView frame(%f,%f,%f,%f)", tagView.frame.origin.x, tagView.frame.origin.y, tagView.frame.size.width, tagView.frame.size.height);
    
    for (UIView *view in tagView.subviews) {
        NSLog(@"tagView.subview -> %@", [view class]);
    }
    
    for (UIView *view in viewAsk.subviews) {
        NSLog(@"testView.subview -> %@", [view class]);
        if ([view class] != [UIImageView class]) {
            [view removeFromSuperview];
            view.hidden = YES;

        }
    }
    
    tagView.tagViewDelegate = self;
    [viewAsk addSubview:tagView];
    [self refreshAskTextView];


}

- (void) initData
{
    self.arrData = [[NSMutableArray alloc] init ];
    self.arrData = [[CommonHelpers appDelegate] arrDropdown];
    
    for (TSGlobalObj* global in [[CommonHelpers appDelegate] arrCuisine]) {
        [self.arrData addObject:global];
    }
    
    for (TSGlobalObj* global in [[CommonHelpers appDelegate] arrOccasion]) {
        [self.arrData addObject:global];
    }
    
    for (TSGlobalObj* global in [[CommonHelpers appDelegate] arrPrice]) {
        [self.arrData addObject:global];
    }
    
    for (TSGlobalObj* global in [[CommonHelpers appDelegate] arrTheme]) {
        [self.arrData addObject:global];
    }
    
    for (TSGlobalObj* global in [[CommonHelpers appDelegate] arrTypeOfRestaurant]) {
        [self.arrData addObject:global];
    }
    
    for (TSGlobalObj* global in [[CommonHelpers appDelegate] arrWhoAreUWith]) {
        [self.arrData addObject:global];
    }
    
    self.arrDataRegion = [[NSMutableArray alloc] init];   
    _storeLocation = @"";
    self.arrDataFilter = [[NSMutableArray alloc] init];
    
    
}

-(void)resizeSegmentsToFitTitles:(UISegmentedControl*)segCtrl {
    CGFloat totalWidths = 0;    // total of all label text widths
    NSUInteger nSegments = segCtrl.subviews.count;
    UIView* aSegment = [segCtrl.subviews objectAtIndex:0];
    UIFont* theFont = nil;
    
    for (UILabel* aLabel in aSegment.subviews) {
        if ([aLabel isKindOfClass:[UILabel class]]) {
            theFont = aLabel.font;
            break;
        }
    }
    
    // calculate width that all the title text takes up
    for (NSUInteger i=0; i < nSegments; i++) {
        CGFloat textWidth = [[segCtrl titleForSegmentAtIndex:i] sizeWithFont:theFont].width;
        totalWidths += textWidth;
    }
    
    // width not used up by text, its the space between labels
    CGFloat spaceWidth = segCtrl.bounds.size.width - totalWidths;
    
    // now resize the segments to accomodate text size plus
    // give them each an equal part of the leftover space
    for (NSUInteger i=0; i < nSegments; i++) {
        // size for label width plus an equal share of the space
        CGFloat textWidth = [[segCtrl titleForSegmentAtIndex:i] sizeWithFont:theFont].width;
        // roundf??  the control leaves 1 pixel gap between segments if width
        // is not an integer value, the roundf fixes this
        CGFloat segWidth = roundf(textWidth + (spaceWidth / nSegments));
        [segCtrl setWidth:segWidth forSegmentAtIndex:i];
    }
}

- (void)refreshAskTextView
{
    debug(@"TagView frame(%f,%f,%f,%f)", tagView.frame.origin.x, tagView.frame.origin.y, tagView.frame.size.width, tagView.frame.size.height);

    CGSize tagViewSize = tagView.frame.size;
    
    [viewAsk setFrame:CGRectMake(viewAsk.frame.origin.x, viewAsk.frame.origin.y, tagViewSize.width, tagViewSize.height)];
    
    [viewWhiteBoxFilter setFrame:CGRectMake(viewWhiteBoxFilter.frame.origin.x, 80 + tagViewSize.height, viewWhiteBoxFilter.frame.size.width, viewWhiteBoxFilter.frame.size.height)];
    [viewFilterExtends setFrame:CGRectMake(viewFilterExtends.frame.origin.x, 80 + tagViewSize.height, viewFilterExtends.frame.size.width, viewFilterExtends.frame.size.height)];
    
    [tbvFilter setFrame:CGRectMake(tbvFilter.frame.origin.x,60 + tagViewSize.height, tbvFilter.frame.size.width, tbvFilter.frame.size.height)];
    
    [viewFilter setFrame:CGRectMake(viewFilter.frame.origin.x, viewFilter.frame.origin.y, viewFilter.frame.size.width, 120 + tagViewSize.height)];
    
    if (filterViewShown) {
        [viewFilter setFrame:CGRectMake(viewFilter.frame.origin.x, viewFilter.frame.origin.y, viewFilter.frame.size.width, viewFilterExtends.frame.size.height + tagViewSize.height + 120)];
        viewFilterExtends.hidden = NO;
        viewWhiteBoxFilter.hidden = YES;
        [viewGetLiveRec setFrame:CGRectMake(viewGetLiveRec.frame.origin.x , viewFilter.frame.size.height + 30, viewGetLiveRec.frame.size.width, viewGetLiveRec.frame.size.height)];
    }
    else
    {
        viewFilterExtends.hidden = YES;
        viewWhiteBoxFilter.hidden = NO;

        [viewGetLiveRec setFrame:CGRectMake(viewGetLiveRec.frame.origin.x , viewFilter.frame.size.height + 30, viewGetLiveRec.frame.size.width, viewGetLiveRec.frame.size.height)];
        
    }
    
    [scrollViewMain setContentSize:CGSizeMake(320, viewFilter.frame.size.height + 200)];

    
}



#pragma mark - IBAction's Define

- (IBAction)actionOthersTab:(id)sender
{
    [[[CommonHelpers appDelegate] tabbarBaseVC] actionOthers];
}
- (IBAction)actionNewsfeedTab:(id)sender
{
    [[[CommonHelpers appDelegate] tabbarBaseVC] actionNewsfeed];
}
- (IBAction)actionFilter:(id)sender
{
    if (FALSE) {

    }
    else
    {
//        show filter view
        [self hideKeyBoard];
        filterViewShown = TRUE;
        [self refreshAskTextView];
        

    }
}

- (IBAction)actionDoneFilter:(id)sender
{
    [self hideKeyBoard];
    filterViewShown = FALSE;
    if (arrDataAsk.count == 0) {
        [tagView addTagDefault];

    }
    [self refreshAskTextView];

}

- (IBAction)actionHideKeypad:(id)sender
{
    [self hideKeyBoard];
}

- (IBAction)actionGetLiveRecommendations:(id)sender
{
    [CommonHelpers appDelegate].askSubmited = YES;
    if (/*[UserDefault userDefault].loginStatus == NotLogin*/ FALSE) {
        [[CommonHelpers appDelegate] showLoginDialog];
    }
    else
    {
        NSString* cuisineList1 = @"";
        NSString* cuisineList2 = @"";
        NSString* priceList = @"";
        NSString* themeList = @"";
        NSString* whoareyouList = @"";
        NSString* typeofrestaurantList = @"";
        NSString* occasionList = @"";
        
        CRequest* request = [[CRequest alloc]initWithURL:@"recosearch" RQType:RequestTypePost RQData:RequestDataAsk RQCategory:ApplicationForm withKey:2];
        [request setFormPostValue:[UserDefault userDefault].userID forKey:@"userid"];
        
        for (TSGlobalObj* global in arrDataAsk) {
            if (global.type == GlobalDataCuisine_1 ) {
                if (cuisineList1.length == 0) {
                    cuisineList1 = global.uid;
                }
                else
                    cuisineList1 = [cuisineList1 stringByAppendingFormat:@",%@", global.uid];
            }
            if (global.type == GlobalDataCuisine_2 ) {
                if (cuisineList2.length == 0) {
                    cuisineList2 = global.uid;
                }
                else
                    cuisineList2 = [cuisineList2 stringByAppendingFormat:@",%@", global.uid];
            }
            if (global.type == GlobalDataOccasion ) {
                if (occasionList.length == 0) {
                    occasionList = global.uid;
                }
                else
                    occasionList = [occasionList stringByAppendingFormat:@",%@", global.uid];
            }
            if (global.type == GlobalDataPrice ) {
                if (priceList.length == 0) {
                    priceList = global.uid;
                }
                else
                    priceList = [priceList stringByAppendingFormat:@",%@", global.uid];
            }
            if (global.type == GlobalDataTheme ) {
                if (themeList.length == 0) {
                    themeList = global.uid;
                }
                else
                    themeList = [themeList stringByAppendingFormat:@",%@", global.uid];
            }
            if (global.type == GlobalDataTypeOfRestaurant ) {
                if (typeofrestaurantList.length == 0) {
                    typeofrestaurantList = global.uid;
                }
                else
                    typeofrestaurantList = [typeofrestaurantList stringByAppendingFormat:@",%@", global.uid];
            }
            if (global.type == GlobalDataWhoAreUWith ) {
                if (whoareyouList.length == 0) {
                    whoareyouList = global.uid;
                }
                else
                    whoareyouList = [whoareyouList stringByAppendingFormat:@",%@", global.uid];
            }
            NSLog(@"%@ - %d - %@", global.name, global.type, global.uid);
        }
        [request setFormPostValue:cuisineList1              forKey:@"cuisinetier1idlist"];
        [request setFormPostValue:cuisineList2              forKey:@"cuisineiier2idlist"];
        [request setFormPostValue:priceList                    forKey:@"priceidlist"];
        [request setFormPostValue:themeList                  forKey:@"themeidlist"];
        [request setFormPostValue:whoareyouList          forKey:@"whoareyouwithidlist"];
        [request setFormPostValue:typeofrestaurantList forKey:@"typeofrestaurantidList"];
        [request setFormPostValue:occasionList             forKey:@"occasionidlist"];
        
//        [request setFormPostValue:@"neighborhoodid" forKey:@"neighborhoodid"];
//        [request setFormPostValue:@"typeofrestaurantidList" forKey:@"cityid"];
//        [request setFormPostValue:@"occasionidlist" forKey:@"statename"];
        
//        if (region.cityObj == nil) {
            [request setFormPostValue:region.cityObj.neighbourhoodID forKey:@"neighborhoodid"];
            [request setFormPostValue:region.cityObj.uid forKey:@"cityid"];
            [request setFormPostValue:region.cityObj.stateName forKey:@"statename"];
        
        
//        }//[self parseStateFromCityObj:region.name]
//        else
//        {
//            [request setFormPostValue:region.uid forKey:@"neighborhoodid"];
//            [request setFormPostValue:region.cityObj.uid forKey:@"cityid"];
//            [request setFormPostValue:region.cityObj.stateName forKey:@"statename"];
//        }
        request.delegate = self;
        [request startFormRequest];
        NSLog(@"%@ - %@ - %@", region.cityObj.neighbourhoodID, region.cityObj.uid, region.cityObj.stateName);
    
    }

}

- (IBAction)actionSegmentControl:(id)sender
{
    UISegmentedControl *segCtr = (UISegmentedControl *)sender;
    debug(@"segCtr selectedIndex -> %d", segCtr.selectedSegmentIndex);
    
    
    NSString *strObj;
    
    TSGlobalObj* globalObj;
    
    if (segCtr == segCtrCusine) {
        TSGlobalObj* global = [[[CommonHelpers appDelegate] arrCuisine] objectAtIndex:segCtr.selectedSegmentIndex];
        global.type = GlobalDataCuisine_1;
        globalObj = global;
        strObj = global.name;
    }else
    if (segCtr == segCtrOccasion) {
        TSGlobalObj* global = [[[CommonHelpers appDelegate] arrOccasion] objectAtIndex:segCtr.selectedSegmentIndex];
        global.type = GlobalDataOccasion;
        globalObj = global;
        strObj = global.name;
    }else
    if (segCtr == segCtrPrice) {
        TSGlobalObj* global = [[[CommonHelpers appDelegate] arrPrice] objectAtIndex:segCtr.selectedSegmentIndex];
        global.type = GlobalDataPrice;
        globalObj = global;
        strObj = global.name;
    }else
    if (segCtr == segCtrTheme) {
        TSGlobalObj* global = [[[CommonHelpers appDelegate] arrTheme] objectAtIndex:segCtr.selectedSegmentIndex];
        global.type = GlobalDataTheme;
        globalObj = global;
        strObj = global.name;
    }else
    if (segCtr == segCtrTypeOf) {
        TSGlobalObj* global = [[[CommonHelpers appDelegate] arrTypeOfRestaurant] objectAtIndex:segCtr.selectedSegmentIndex];
        global.type = GlobalDataTypeOfRestaurant;
        globalObj = global;
        strObj = global.name;
    }else
    if (segCtr == segCtrWho) {
        TSGlobalObj* global = [[[CommonHelpers appDelegate] arrWhoAreUWith] objectAtIndex:segCtr.selectedSegmentIndex];
        global.type = GlobalDataWhoAreUWith;
        globalObj = global;
        strObj = global.name;
    }else
    {
        
    }
    
      
    if ([arrDataAsk containsObject:globalObj]) {
        
        debug(@"unselect obj");
        [arrDataAsk removeObject:globalObj];
        
        tagView = nil;
        
        for (UIView *view in viewAsk.subviews) {
            NSLog(@"testView.subview -> %@", [view class]);
            if ([view class] != [UIImageView class]) {
                [view removeFromSuperview];
                view.hidden = YES;
                
            }
        }
        
        tagView = [[TagView alloc] initWithArray:arrDataAsk option:TagViewEnumData delegate:self];
        
        tagView.tagViewDelegate = self;
        
        [viewAsk addSubview:tagView];
        [self refreshAskTextView];

        for (int i= 0; i< [[sender subviews] count]; i++) {
            if ([[[sender subviews] objectAtIndex:i] isSelected]) {
                [[[sender subviews] objectAtIndex:i] setTintColor:SEGNMENT_COLOR];
                
                break;
            }
        }
    }
    else
    {
        debug(@"select obj");       
        [arrDataAsk addObject:globalObj];
        [tagView addTagObj:globalObj delegate:self andTagDefault:NO];
        [self refreshAskTextView];

        for (int i= 0; i< [[sender subviews] count]; i++) {
            if ([[[sender subviews] objectAtIndex:i] isSelected]) {
              
                [[[sender subviews] objectAtIndex:i] setTintColor:SEGNMENT_COLOR_ON];
                
                break;
            }
        }
    }
   
    segCtr.selectedSegmentIndex = -1;
    
   
}




#pragma mark - UITableView


- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView
{
    
    return 1;
}

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section
{
    
   
    return _arrDataFilter.count;
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    
    static NSString *CellIndentifier = @"cell";
    
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:CellIndentifier];
    if (cell==nil) {
        cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleDefault reuseIdentifier:CellIndentifier];
    }
    
    TSGlobalObj* globalObj = [_arrDataFilter objectAtIndex:indexPath.row];
    
    cell.textLabel.text = globalObj.name;
    //        cell.textLabel.textAlignment = UITextAlignmentRight;
    cell.textLabel.textColor = [UIColor whiteColor];
    [cell.textLabel setFont:[UIFont boldSystemFontOfSize:13]];
    
    
    
    return cell;
}

- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath
{
    
    if (chooseRegion) {
        
        TSGlobalObj *globalObj = [_arrDataFilter objectAtIndex:indexPath.row];
        tfRegion.text = globalObj.name;
        region = globalObj;
        tbvFilter.hidden = YES;
        [_arrDataFilter removeAllObjects];


    }
    else
    {
        
        TSGlobalObj *globalObj = [_arrDataFilter objectAtIndex:indexPath.row];
        [arrDataAsk addObject:globalObj];
        [tagView addTagObj:globalObj delegate:self];
        [self refreshAskTextView];
        tbvFilter.hidden = YES;
       
    }
    
    
   
    
}

#pragma mark - UITextFieldDelegate

- (BOOL)textFieldShouldBeginEditing:(UITextField *)textField
{
    
    cTextField = textField;
    if (FALSE) {        
        [[CommonHelpers appDelegate] showLogin];
        return NO;
    }
    else
    {
       
        CGFloat MOVE_POINT_Y = 0;       
        if (textField == tfRegion ) {
            chooseRegion = TRUE;
            MOVE_POINT_Y = viewFilter.frame.size.height + 60;
            lbTypeRegions.hidden = YES;
            region = nil;
        }
        else
        {
            chooseRegion = FALSE;
        }
        
        [UIView animateWithDuration:0.4
                              delay:0
                            options: UIViewAnimationCurveEaseIn
                         animations:^{
                             viewMain.frame=CGRectMake(viewMain.frame.origin.x,-MOVE_POINT_Y,viewMain.frame.size.width, viewMain.frame.size.height);
                         }
                         completion:^(BOOL finished){
                             debug(@"move done");
//                             [self searchLocal:@""];
                             
                             
                         }];
    }
    
    
    
    return YES;
}


-(BOOL) textFieldShouldReturn:(UITextField *)textField{
    //    [self onClickLookup:nil];
    [self hideKeyBoard];
    return YES;
}

- (BOOL)textFieldShouldClear:(UITextField *)textField
{
    //    [tbvSearch reloadData];
   
        tbvFilter.hidden = YES;
       return YES;
}

- (BOOL)textField:(UITextField *)textField shouldChangeCharactersInRange:(NSRange)range replacementString:(NSString *)string
{
        
        [self searchLocal:[textField.text stringByReplacingCharactersInRange:range withString:string]];

         
    return TRUE;
    
}


#pragma mark - Others's function

- (void) searchLocal:(NSString *)txt
{
    
    txt = [CommonHelpers trim:txt];
    
    tbvFilter.hidden = YES;
    [self.arrDataFilter removeAllObjects];

    if (txt.length == 0) {
        return;
        
    }
    if (txt.length == 3 && [[txt uppercaseString] isEqualToString:[cityLocal uppercaseString]]) {
        NSLog(@"request");
        cityLocal = txt;
    }
    
    if (chooseRegion) {
        if (txt.length == 3 && ![[txt uppercaseString] isEqualToString:_storeLocation]) {
            NSLog(@"request");
            
            CRequest* request = [[CRequest alloc]initWithURL:@"getCity" RQType:RequestTypePost RQData:RequestDataUser RQCategory:ApplicationForm withKey:1];
            request.delegate = self;
            [request setFormPostValue:[txt uppercaseString] forKey:@"key"];
            [request startFormRequest];
            
            _storeLocation = [txt uppercaseString];
        }
        for (TSGlobalObj *global in _arrDataRegion) {
           
            NSString  *ustrObj =  [global.name uppercaseString];
            NSString *utxt =   [txt uppercaseString];
            
            int diff = strncmp([ustrObj UTF8String], [utxt UTF8String], utxt.length);
                       
            
            if (/*p!=NULL*/ diff == 0) {
                [self.arrDataFilter addObject:global];
            }
            
        }

    }else
    {
        
        NSLog(@"SearchLocal : txt -> %@",txt);
        for (TSGlobalObj *global in _arrData) {
            
         NSString  *ustrObj =  [global.name uppercaseString];
         NSString *utxt =   [txt uppercaseString];
            
            int diff = strncmp([ustrObj UTF8String], [utxt UTF8String], utxt.length);
            
                        
            if (/*p!=NULL*/ diff == 0) {
                [self.arrDataFilter addObject:global];
            }
            
        }
        
        
        for (TSGlobalObj *obj in arrDataAsk) {
            if ([self.arrDataFilter containsObject:obj]) {
                [self.arrDataFilter removeObject:obj];
            }
        }
         
        

    }
    if (!chooseRegion) {
        [tbvFilter setFrame:CGRectMake(tbvFilter.frame.origin.x,60 + tagView.frame.size.height, tbvFilter.frame.size.width, tbvFilter.frame.size.height)];
    }
    else{
        [tbvFilter setFrame:CGRectMake(tbvFilter.frame.origin.x,100 + viewFilter.frame.size.height, tbvFilter.frame.size.width, tbvFilter.frame.size.height)];

    }
       
    if (self.arrDataFilter.count > 0) {
        
        CGRect frame = tbvFilter.frame;
        if (self.arrDataFilter.count > 5) {
            frame.size.height = 5*44;
            
        }
        else{
            frame.size.height = (_arrDataFilter.count) *44;
            
        }

        tbvFilter.hidden = NO;
        [tbvFilter reloadData];
        debug(@"tbv frame(%f,%f,%f,%f",tbvFilter.frame.origin.x, tbvFilter.frame.origin.y, tbvFilter.frame.size.width, tbvFilter.frame.size.height);
    }
    
    debug(@"arrData count -> %d , arrDataFilter -> count- > %d",_arrData.count, _arrDataFilter.count);
    
    
}



- (void) hideKeyBoard
{
    tbvFilter.hidden =YES;
    [cTextField resignFirstResponder];
    cTextField.text = @" ";
    [tfRegion resignFirstResponder];    
    if (arrDataAsk.count == 0) {
        [tagView addTagDefault];
        [tagView setFrame:CGRectMake(tagView.frame.origin.x, tagView.frame.origin.y, tagView.frame.size.width, tagView.frame.size.height)];
    }
    
    //    lbTypeRegions.hidden = NO;
    if (region == nil) {
        lbTypeRegions.hidden = NO;
        tfRegion.text = nil;
    }else
    {
        tfRegion.text = region.name;

    }
    
    [UIView animateWithDuration:0.4
                          delay:0
                        options: UIViewAnimationCurveEaseIn
                     animations:^{
                         viewMain.frame=CGRectMake(viewMain.frame.origin.x,0,viewMain.frame.size.width, viewMain.frame.size.height);
                     }
                     completion:^(BOOL finished){
                         debug(@"move done hide keypad");
                         
                     }];
    
    [self refreshAskTextView];
}


#pragma mark - TagObjDelegate

- (void) tagObj:(TagObj *)tagObj shouldBeginEditingTextField:(UITextField *)aTextField option:(int) anOption
{
    [self refreshAskTextView];
    chooseRegion = FALSE;
    cTextField = aTextField;
    [UIView animateWithDuration:0.4
                          delay:0
                        options: UIViewAnimationCurveEaseIn
                     animations:^{
                         viewMain.frame=CGRectMake(viewMain.frame.origin.x,-60,viewMain.frame.size.width, viewMain.frame.size.height);
                     }
                     completion:^(BOOL finished){
                         debug(@"move done show keypad");
                         
                     }];
}

- (void) tagObj:(TagObj *)tagObj didChangeTextFieldWithString:(NSString *)aString
{
    debug(@"AskVC -> tagObj-> didChangeTextFieldWithString:%@",aString);
    [self searchLocal:aString];
}

- (void) tagObj:(TagObj *)tagObj didDeleteGlobalObj:(TSGlobalObj *)aString
{
    debug(@"AskVC -> tagObj-> didDeleteString:%@",aString);
    if (aString == nil) {
        if (arrDataAsk.count > 0) {
            [arrDataAsk removeLastObject];
            
        }
    }
    else
    {
        
        if ([arrDataAsk containsObject:aString]) {
            [arrDataAsk removeObject:aString];
           
        }

    }
    
    tagView = nil;
    
    for (UIView *view in viewAsk.subviews) {

        if ([view class] != [UIImageView class]) {
            [view removeFromSuperview];
            view.hidden = YES;
            
        }
    }
    
    tagView = [[TagView alloc] initWithArray:arrDataAsk option:TagViewEnumData delegate:self];
    
    [viewAsk addSubview:tagView];
    tagView.tagViewDelegate = self;    
    [self refreshAskTextView];
    
}

- (void) tagObj:(TagObj *)tagObj option:(int) anOption
{
    switch (anOption) {
        case TagObjEnumOptionCancel:
        {
            [self hideKeyBoard];
        }
            break;
            
        default:
            break;
    }
}


#pragma mark - TagViewDelegate

- (void) tagView:(TagView *) tagView shouldBeginEditingTagObj:(TagObj *) aTagObj
{
    debug(@"AskVC -> tagView - shouldBeginEditingTagObj");
    [self refreshAskTextView];
}

-(void)responseData:(NSData *)data WithKey:(int)key UserData:(id)userData
{
    NSString* response = [[NSString alloc]initWithData:data encoding:NSUTF8StringEncoding];
    NSLog(@"%@",response);
    if (key == 1) {
            NSArray* array = [response objectFromJSONString];
        for (NSDictionary* dic in array) {
            TSGlobalObj* global = [[TSGlobalObj alloc]init];
            global.uid = [NSString stringWithFormat:@"%@", [dic objectForKey:@"id"] ];
            global.name = [dic objectForKey:@"name"];
            global.type = GlobalDataCity;
            NSDictionary* name = [dic objectForKey:@"city"];
            TSCityObj* cityObj = nil;
            if (name != (id)[NSNull null]) {
                cityObj = [[TSCityObj alloc]init];
                cityObj.uid = [NSString stringWithFormat:@"%@", [name objectForKey:@"cityId"]];
                if ([cityObj.uid isEqualToString:global.uid]) {
                    cityObj.neighbourhoodID = @"";
                }
                else
                    cityObj.neighbourhoodID = global.uid;
                cityObj.country = [name objectForKey:@"country"];
                cityObj.stateName = [name objectForKey:@"state"];
                cityObj.cityName = [name objectForKey:@"city"];
            }
            global.cityObj = cityObj;
            [_arrDataRegion addObject:global];
            [_arrDataFilter addObject:global];
        }
    }
    if (key == 2) {
        NSDictionary* dic = [response objectFromJSONString];
        AskRecommendationsVC *vc = [[AskRecommendationsVC alloc] initWithArrayData:arrDataAsk atLocation:region Reco_RequestID:[dic objectForKey:@"valueNameValue"]];
        [self.navigationController pushViewController:vc animated:YES];
    }
}

-(NSString*)parseStateFromCityObj:(NSString*)name
{
    NSArray* data= [name componentsSeparatedByString:@", "];
    return [data objectAtIndex:1];
}
@end
