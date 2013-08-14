//
//  RestaurantVC.m
//  TasteSync
//
//  Created by Victor on 2/19/13.
//  Copyright (c) 2013 Mobioneer. All rights reserved.
//

#import "RestaurantVC.h"
#import "CommonHelpers.h"
#import "RestaurantCell.h"
#import "RestaurantDetailVC.h"
#import "TSGlobalObj.h"

@interface RestaurantVC ()
{
    int TFSelected;
    BOOL filterExtendsShown;
    NSString *restaurant, *region;
    NSMutableArray *arrDataStickFilter;

}

typedef enum _TFSelect
{
    TFRestaurant = 1,
    TFRegion    =   2
} TFSelect;

@end

@implementation RestaurantVC

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
    
    [self actionHide:nil];
   
    scrollViewMain.delegate = self;
    
    if(_notHomeScreen)
    {
        viewFilter1.hidden = YES;
        viewFilter2.hidden = NO;
    }
    else
    {
        viewFilter1.hidden = NO;
        viewFilter2.hidden = YES;
    }
    
    viewFilterExtends.hidden = YES;
    
    
    [scrollViewCuisine setContentSize:CGSizeMake(2100, 30)];
    [scrollViewPrice setContentSize:CGSizeMake(500, 30)];
    rateCustom = [[RateCustom alloc] initWithFrame:CGRectMake(20, 220, 150, 30)];
    [viewFilterExtends addSubview:rateCustom];
    rateCustom.delegate = self;
    rateCustom.allowedRate = YES;
    
    
    for (int i= 0; i< [[[CommonHelpers appDelegate] arrCuisine] count]; i++){
        TSGlobalObj* cuisine = [[[CommonHelpers appDelegate ] arrCuisine] objectAtIndex:i];
        if (i < 5)
            [segCtrCuisine setTitle:cuisine.name forSegmentAtIndex:i];
        else
            [segCtrCuisine insertSegmentWithTitle:cuisine.name atIndex:i animated:NO];
    }
    for (int i= 0; i< [[[CommonHelpers appDelegate] arrPrice] count]; i++) {
        
        TSGlobalObj* price = [[[CommonHelpers appDelegate ] arrPrice ] objectAtIndex:i];
        if (i < 5)
            [segCtrPrice setTitle:price.name forSegmentAtIndex:i];
        else
            [segCtrPrice insertSegmentWithTitle:price.name atIndex:i animated:NO];
        
        
    }
    
    
    [segCtrCuisine addTarget:self action:@selector(actionSegmentControl:) forControlEvents:UIControlEventValueChanged];
    [segCtrPrice addTarget:self action:@selector(actionSegmentControl:) forControlEvents:UIControlEventValueChanged];
    
    NSMutableDictionary *textAttributes = [[NSMutableDictionary alloc] init];
    [textAttributes setObject:[UIColor whiteColor] forKey:UITextAttributeTextColor];
    
    [segCtrCuisine setTintColor:SEGNMENT_COLOR];
    [segCtrCuisine setTitleTextAttributes:textAttributes forState:UIControlStateNormal];
    [segCtrPrice setTintColor:SEGNMENT_COLOR];
    [segCtrPrice setTitleTextAttributes:textAttributes forState:UIControlStateNormal];
    
    segCtrCuisine.selectedSegmentIndex = -1;
    segCtrPrice.selectedSegmentIndex = -1;
    [self resizeSegmentsToFitTitles:segCtrCuisine];
    [self resizeSegmentsToFitTitles:segCtrPrice];
    if ([CommonHelpers isiOS6]) {
        NSDictionary *underlinerAtt =@{NSUnderlineStyleAttributeName : @1};
        lbCusine.attributedText = [[NSAttributedString alloc] initWithString:@"CUISINE" attributes:underlinerAtt];
        lbPrice.attributedText = [[NSAttributedString alloc] initWithString:@"PRICE" attributes:underlinerAtt];
        lbRating.attributedText = [[NSAttributedString alloc] initWithString:@"RATING" attributes:underlinerAtt];
        lbShowOnlyThese.attributedText = [[NSAttributedString alloc] initWithString:@"SHOW ONLY THESE" attributes:underlinerAtt];
    }
   
    
    [self refreshView];
}

- (void) initData
{
    if(_arrData == nil)
    {
        self.arrData = [[NSMutableArray alloc] init];
    }

    if (_arrDataRestaurant == nil) {
        self.arrDataRestaurant= [[NSMutableArray alloc] init];
        for (int i= 0; i<10; i++) {
            RestaurantObj *obj = [[RestaurantObj alloc] init];

            if (i%2 ==0) {
                obj.name = [NSString stringWithFormat:@"Nanking %d",i];
                obj.isCheckin = NO;
                obj.isDeal = YES;

            }
            else
            {
                obj.name = [NSString stringWithFormat:@"Momofoku %d",i];
                obj.isCheckin = YES;
                obj.isDeal = NO;
            }
            
            if (i==3) {
                obj.isSaved = YES;
            }
            
            obj.rates = i%6;
            
            [self.arrDataRestaurant addObject:obj];

            [self.arrData addObject:obj];

        }
        
    }
    
    if (_arrDataRegion == nil) {
        self.arrDataRegion = [[NSMutableArray alloc] initWithObjects:@"Chinatown, New York, NY", @"Chappe, NY", @"Njine, CA", nil];
        
    }
    
        
    if(_arrDataFilter == nil)
    {
        self.arrDataFilter = [[NSMutableArray alloc] init];
    }
    
    
    
    arrCuisine = [[NSMutableArray alloc] init ];
    arrPrice = [[NSMutableArray alloc] init];
    filterDict = [[NSMutableDictionary alloc] init];
    arrDataStickFilter = [[NSMutableArray alloc] init];
}
#pragma mark - IBAction's Define

- (IBAction)actionNewsfeed:(id)sender
{
    [[[CommonHelpers appDelegate] tabbarBaseVC] actionNewsfeed];
}

- (IBAction)actionOthersTab:(id)sender
{
    [[[CommonHelpers appDelegate] tabbarBaseVC] actionOthers];
}

- (IBAction)actionHideKeypad:(id)sender
{
   
    tbvFilter.hidden = YES;
    [self hideKeyBoard];
}

- (IBAction)actionFilter:(id)sender
{
    [self hideKeyBoard];
    filterExtendsShown = TRUE;
    [UIView animateWithDuration:0.4
                          delay:0
                        options: UIViewAnimationCurveEaseIn
                     animations:^{
                         viewMain.frame=CGRectMake(viewMain.frame.origin.x,-120,viewMain.frame.size.width, viewMain.frame.size.height);
                     }
                     completion:^(BOOL finished){
                         debug(@"move done");
                         
                     }];
    [self refreshView];
}

- (IBAction)actionDoneFilter:(id)sender
{
    filterExtendsShown = FALSE;
    [UIView animateWithDuration:0.4
                          delay:0
                        options: UIViewAnimationCurveEaseIn
                     animations:^{
                         viewMain.frame=CGRectMake(viewMain.frame.origin.x,0,viewMain.frame.size.width, viewMain.frame.size.height);
                     }
                     completion:^(BOOL finished){
                         debug(@"move done");
                         
                     }];
    
    [self refreshView];
    
}

- (void) refreshView
{
    if (filterExtendsShown) {
        viewFilterExtends.hidden = NO;
        viewFilterSmall.hidden = YES;
        [scrollViewMain setContentSize:CGSizeMake(320, 700)];
        [tbvResult setFrame:CGRectMake(tbvResult.frame.origin.x, 520, tbvResult.frame.size.width, tbvResult.frame.size.height)];
    }
    else
    {
        viewFilterExtends.hidden = YES;
        viewFilterSmall.hidden = NO;
        [scrollViewMain setContentSize:CGSizeMake(320, 400)];
        [tbvResult setFrame:CGRectMake(tbvResult.frame.origin.x, 180, tbvResult.frame.size.width, tbvResult.frame.size.height)];
    }
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

#pragma mark - IBAction Define

- (IBAction)actionSaved:(id)sender
{
    if (saved) {
        saved = NO;
        [CommonHelpers setBackgroundImage:[UIImage imageNamed:@"ic_bt_saved73_off.png"] forButton:btSaved];
    }
    else
    {
        saved = YES;
        [CommonHelpers setBackgroundImage:[UIImage imageNamed:@"ic_bt_saved73_on.png"] forButton:btSaved];
        
    }
}
- (IBAction)actionFavs:(id)sender
{
    if (favs) {
        favs = NO;
        [CommonHelpers setBackgroundImage:[UIImage imageNamed:@"ic_bt_favs_small.png"] forButton:btFavs];
        
    }
    else
    {
        favs = YES;
        [CommonHelpers setBackgroundImage:[UIImage imageNamed:@"ic_bt_favs_small_on.png"] forButton:btFavs];
        
    }
}
- (IBAction)actionDeals:(id)sender
{
    if (deals) {
        deals = NO;
        [CommonHelpers setBackgroundImage:[UIImage imageNamed:@"ic_bt_deals_grey.png"] forButton:btDeals];
        
    }
    else
    {
        deals = YES;
//        [CommonHelpers setBackgroundImage:[UIImage imageNamed:@"ic_bt_deals73_on.png"] forButton:btDeals];
        [CommonHelpers setBackgroundImage:[UIImage imageNamed:@"ic_bt_deals_red.png"] forButton:btDeals];

        
    }
}
- (IBAction)actionShow:(id)sender
{
    restaurantChains = YES;
    [CommonHelpers setBackgroundImage:[UIImage imageNamed:@"ic_bt_show_red.png"] forButton:btShow];
    [CommonHelpers setBackgroundImage:[UIImage imageNamed:@"ic_bt_hide.png"] forButton:btHide];
    
}
- (IBAction)actionHide:(id)sender
{
    restaurantChains = NO;
    [CommonHelpers setBackgroundImage:[UIImage imageNamed:@"ic_bt_show.png"] forButton:btShow];
    [CommonHelpers setBackgroundImage:[UIImage imageNamed:@"ic_bt_hide_red.png"] forButton:btHide];
    
}

- (IBAction)actionSegmentControl:(id)sender
{
    UISegmentedControl *segCtr = (UISegmentedControl *)sender;
    debug(@"segCtr selectedIndex -> %d", segCtr.selectedSegmentIndex);
    
    
    NSString *strObj;
    
    if (segCtr == segCtrCuisine) {
        strObj = [[[CommonHelpers appDelegate] arrCuisine] objectAtIndex:segCtr.selectedSegmentIndex];
    }
    else      if (segCtr == segCtrPrice) {
        strObj =[[[CommonHelpers appDelegate] arrOccasion] objectAtIndex:segCtr.selectedSegmentIndex];
    }
    else
    {
        
    }
    
    if ([arrDataStickFilter containsObject:strObj]) {
        [arrDataStickFilter removeObject:strObj];
        for (int i= 0; i< [[sender subviews] count]; i++) {
            if ([[[sender subviews] objectAtIndex:i] isSelected]) {
                [[[sender subviews] objectAtIndex:i] setTintColor:SEGNMENT_COLOR];
                
                break;
            }
        }
    }
    else
    {
        [arrDataStickFilter addObject:strObj];
        for (int i= 0; i< [[sender subviews] count]; i++) {
            if ([[[sender subviews] objectAtIndex:i] isSelected]) {
                [[[sender subviews] objectAtIndex:i] setTintColor:SEGNMENT_COLOR_ON];
                
                break;
            }
        }
    }
    
    segCtr.selectedSegmentIndex = -1;
    
    
}




#pragma mark - RateCustomDelegate

- (void) didRateWithValue:(int)count
{
    rating = count;
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
        static NSString *CellIndentifier = @"restaurant_cell";
        
        RestaurantCell *cell = (RestaurantCell *)[tableView dequeueReusableCellWithIdentifier:CellIndentifier];
        
        if (cell==nil) {
            NSLog(@"cell is nil");
            cell =(RestaurantCell *) [[[NSBundle mainBundle ] loadNibNamed:@"RestaurantCell" owner:self options:nil] objectAtIndex:0];
        }
        
        [cell initForView:[_arrData objectAtIndex:indexPath.row]];
//        cell.delegate =self;
        return cell;
    }
    else
    {
        static NSString *CellIndentifier = @"cell";
        
        UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:CellIndentifier];
        if (cell==nil) {
            cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleDefault reuseIdentifier:CellIndentifier];
        }
        
        if (TFSelected == TFRestaurant) {
            RestaurantObj *obj = [_arrDataFilter objectAtIndex:indexPath.row];
            
            cell.textLabel.text = obj.name;
        }
        else
        {
            cell.textLabel.text = [_arrDataFilter objectAtIndex:indexPath.row];

        }
       
        cell.textLabel.textAlignment = UITextAlignmentLeft;
        cell.textLabel.textColor = [UIColor whiteColor];
        [cell.textLabel setFont:[UIFont boldSystemFontOfSize:13]];
        
        
        return cell;
    }
    
}

- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath
{
    if (tableView==tbvFilter) {
        if (TFSelected == TFRestaurant) {
            RestaurantObj *obj = [_arrDataFilter objectAtIndex:indexPath.row];
            [self.arrData removeAllObjects];
            [self.arrData addObject:obj];
            tfRestaurant.text = obj.name;
            restaurant = obj.name;
            [tbvResult reloadData];
        }
        else if (TFSelected == TFRegion)
        {
            tfRegion.text = [_arrDataFilter objectAtIndex:indexPath.row];
            region = tfRegion.text;
        }
        else
        {
            
        }
      
        tbvFilter.hidden= YES;
       
        [self.arrDataFilter removeAllObjects];
    }
    else
    {
        RestaurantDetailVC *vc = [[RestaurantDetailVC alloc] initWithRestaurantID:@"002b38d0-e4b5-012e-6305-003048c87378"];
        vc.selectedIndex = 2;
        [self.navigationController pushViewController:vc animated:YES];
    }
}

#pragma mark - UITextFieldDelegate

- (BOOL)textFieldShouldBeginEditing:(UITextField *)textField
{
    
    textField.text = @"";

    if (textField == tfRestaurant) {
        TFSelected = TFRestaurant;
        lbTypingRestaurant.hidden= YES;
        restaurant = nil;
    }
    else
    {
        TFSelected = TFRegion;
        lbTypeRegions.hidden = YES;
        region = nil;

    }
    
    
    
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
    
    if (TRUE) {
        [self searchLocal:[textField.text stringByReplacingCharactersInRange:range withString:string]];
        
    }
    
    return TRUE;
    
}


#pragma mark - Others

- (void) searchLocal:(NSString *)txt
{
    
    
    tbvFilter.hidden = YES;
    [self.arrDataFilter removeAllObjects];
    if (txt.length == 0) {
        return;
        
    }
    
    if (TFSelected == TFRestaurant) {
        NSString *str = [NSString stringWithFormat:@"name MATCHES[cd] '%@.*'", [CommonHelpers trim:txt]];
      
        
        NSPredicate *predicate = [NSPredicate predicateWithFormat:str];
        
        NSArray *array = [self.arrDataRestaurant filteredArrayUsingPredicate:predicate];
        if(array)
        {
            self.arrDataFilter = [NSMutableArray arrayWithArray:array];
        }
        

        
         [tbvFilter setFrame:CGRectMake(20, tbvFilter.frame.origin.y, tbvFilter.frame.size.width, tbvFilter.frame.size.height)];

    }
    else if(TFSelected == TFRegion)
    {
        for (NSString *strObj in _arrDataRegion) {
            NSString  *ustrObj =  [strObj uppercaseString];
            NSString *utxt =   [txt uppercaseString];
            
            int diff = strncmp([ustrObj UTF8String], [utxt UTF8String], utxt.length);
            
            debug(@"ustrObj -  utxt  -> %@ - %@ ",ustrObj,utxt);
            
            if (/*p!=NULL*/ diff == 0) {
                debug(@"added");
                [self.arrDataFilter addObject:strObj];
            }
            
        }
        
        [tbvFilter setFrame:CGRectMake(160, tbvFilter.frame.origin.y, tbvFilter.frame.size.width, tbvFilter.frame.size.height)];
    }
    else
    {
        
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


- (void) touchesBegan:(NSSet *)touches withEvent:(UIEvent *)event
{
   
    tbvFilter.hidden = YES;
    [self hideKeyBoard];
}

- (void) hideKeyBoard
{
    [tfRegion resignFirstResponder];
    [tfRestaurant resignFirstResponder];
    tfRegion.text = region;
    if (restaurant ==nil) {
        lbTypingRestaurant.hidden = NO;
        tfRestaurant.text = nil;
    }else
    {
        tfRestaurant.text = restaurant;

    }
    
    if (region == nil) {
        lbTypeRegions.hidden = NO;
        tfRegion.text = nil;

    }
    else
    {
        tfRegion.text = region;
    }
}

#pragma mark - UISCrollViewDelegate

- (void)scrollViewWillBeginDragging:(UIScrollView *)scrollView
{
    if (scrollView == scrollViewMain) {

        debug(@"scrollViewMain ->scrollViewWillBeginDragging");
    }
    else if(scrollView == tbvResult)
    {
//        scrollViewMain.scrollEnabled = NO;
        debug(@"tbvResult ->scrollViewWillBeginDragging");
            
    }

}

- (void)scrollViewDidEndDragging:(UIScrollView *)scrollView willDecelerate:(BOOL)decelerate
{
    if (scrollView == scrollViewMain) {
        
        debug(@"scrollViewMain ->scrollViewDidEndDragging");
    }
    else if(scrollView == tbvResult)
    {
//        scrollViewMain.scrollEnabled = YES;
        debug(@"tbvResult ->scrollViewDidEndDragging");
    }

}


@end
