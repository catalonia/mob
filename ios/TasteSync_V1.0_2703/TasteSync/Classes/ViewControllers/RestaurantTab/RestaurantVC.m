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
#import "TSCuisineObj.h"

@interface RestaurantVC ()
{
    int TFSelected;
    BOOL filterExtendsShown;
    TSGlobalObj *restaurant, *region;
    NSMutableArray *arrDataStickFilter;
    NSMutableArray *arrRestaurantSave;
    NSMutableArray *arrRestaurantFav;
    
    NSString* _restaurantGerenal;
    NSString* _regionGerenal;
    TSCityObj* _cityObj;
    BOOL _isHaveCityObj;
    int numberPage;
    int currentPage;
}

typedef enum _TFSelect
{
    TFRestaurant = 1,
    TFRegion    =   2
} TFSelect;

@end

@implementation RestaurantVC

@synthesize rating = _rating;


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
    _regionGerenal = @"";
    _restaurantGerenal = @"";
    _cityObj = [CommonHelpers setDefaultCityObj];
    _isHaveCityObj = NO;
    
    [self initData];
    [self initUI];
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
        
        currentPage = 1;
        NSString* link = [NSString stringWithFormat:@"recosidrestaurantsearchresults?userid=%@&recorequestid=%@&paginationid=%@",[UserDefault userDefault].userID,self.recorequestID,@"1"];
        CRequest* request = [[CRequest alloc]initWithURL:link RQType:RequestTypeGet RQData:RequestDataAsk RQCategory:ApplicationForm withKey:3];
        request.delegate = self;
        [request startFormRequest];
        
    }
    else
    {
        viewFilter1.hidden = NO;
        viewFilter2.hidden = YES;
        
        currentPage = 1;
        
        NSString* link = [NSString stringWithFormat:@"recosrestaurantsearchresults?userid=%@&restaurantid=%@&neighborhoodid=%@&cityid=%@&statename=%@&cuisineidtier1idlist=%@&priceidlist=%@&rating=%@&savedflag=%@&favflag=%@&dealflag=%@&chainflag=%@&paginationid=%@",[UserDefault userDefault].userID,@"",@"", _cityObj.uid, _cityObj.stateName,@"",@"",@"",@"",@"",@"",@"",@"1"];
        CRequest* request = [[CRequest alloc]initWithURL:link RQType:RequestTypeGet RQData:RequestDataAsk RQCategory:ApplicationForm withKey:3];
        request.delegate = self;
        [request startFormRequest];
    }
    
    viewFilterExtends.hidden = YES;
    
    rateCustom = [[RateCustom alloc] initWithFrame:CGRectMake(20, 220, 150, 30)];
    [viewFilterExtends addSubview:rateCustom];
    rateCustom.delegate = self;
    rateCustom.allowedRate = YES;
    

    for (int i= 0; i< [[[CommonHelpers appDelegate] arrPrice] count]; i++) {
        
        TSGlobalObj* price = [[[CommonHelpers appDelegate ] arrPrice ] objectAtIndex:i];
        if (i < 5)
            [segCtrPrice setTitle:price.name forSegmentAtIndex:i];
        else
            [segCtrPrice insertSegmentWithTitle:price.name atIndex:i animated:NO];
        
        
    }
    
    
    for (int i = 0; i< [[[CommonHelpers appDelegate] arrCuisine] count]; i++){
        TSGlobalObj* cuisine = [[[CommonHelpers appDelegate] arrCuisine] objectAtIndex:i];
        [segCtrCuisine insertSegmentWithTitle:cuisine.name atIndex:i animated:NO];
    }
    [self resizeSegmentsToFitTitles:segCtrCuisine];
    
    
    
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
    }
    
    if (_arrDataRegion == nil) {
        self.arrDataRegion = [[NSMutableArray alloc] init];
        
    }
    
        
    if(_arrDataFilter == nil)
    {
        self.arrDataFilter = [[NSMutableArray alloc] init];
    }
    
    
    arrRestaurantSave = [[NSMutableArray alloc]init];
    arrRestaurantFav  = [[NSMutableArray alloc]init];
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
    
    currentPage = 1;
    [self refreshView];
    
    [_arrData removeAllObjects];
    [self requestRestaurant];
    
    
    
}

-(void)requestRestaurant
{
    int price = 0;
    int cuisine = 0;
    
    NSString* listCuisine, *listPrice;
    listCuisine = @"";
    listPrice = @"";
    
    for (TSGlobalObj* global in arrDataStickFilter) {
        if (global.type == GlobalDataCuisine_1) {
            if (cuisine == 0) {
                listCuisine = global.uid;
                cuisine++;
            }
            else
                listCuisine = [listCuisine stringByAppendingString:[NSString stringWithFormat:@",%@",global.uid]];
        }
        if (global.type == GlobalDataPrice) {
            if (price == 0) {
                listPrice = global.uid;
                price++;
            }
            else
                listPrice = [listPrice stringByAppendingString:[NSString stringWithFormat:@",%@",global.uid]];
        }
    }
    
    NSString* rate;
    
    if (_rating == 0) {
        rate = @"";
    }
    else
        rate = [NSString stringWithFormat:@"%d",_rating];
    
    NSString* save = @"";
    
    if (saved) {
        save = @"1";
    }
    
    NSString* fav = @"";
    
    if (favs) {
        rate = @"1";
    }
    
    NSString* page = [NSString stringWithFormat:@"%d",currentPage];
    
    NSString* link = [NSString stringWithFormat:@"recosrestaurantsearchresults?userid=%@&restaurantid=%@&neighborhoodid=%@&cityid=%@&statename=%@&cuisineidtier1idlist=%@&priceidlist=%@&rating=%@&savedflag=%@&favflag=%@&dealflag=%@&chainflag=%@&paginationid=%@",[UserDefault userDefault].userID,@"",@"",_cityObj.uid,_cityObj.stateName,listCuisine,listPrice,rate,save,fav,@"",@"",page];
    CRequest* request = [[CRequest alloc]initWithURL:link RQType:RequestTypeGet RQData:RequestDataAsk RQCategory:ApplicationForm withKey:3];
    request.delegate = self;
    [request startFormRequest];
}

-(void)requestWithRecorequestID
{
    NSString* page = [NSString stringWithFormat:@"%d",currentPage];
    NSString* link = [NSString stringWithFormat:@"recosidrestaurantsearchresults?userid=%@&recorequestid=%@&paginationid=%@",[UserDefault userDefault].userID,self.recorequestID,page];
    CRequest* request = [[CRequest alloc]initWithURL:link RQType:RequestTypeGet RQData:RequestDataAsk RQCategory:ApplicationForm withKey:3];
    request.delegate = self;
    [request startFormRequest];
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
    CGFloat total = 0;
    for (NSUInteger i = 0; i < nSegments; i++) {
        // size for label width plus an equal share of the space
        CGFloat textWidth = [[segCtrl titleForSegmentAtIndex:i] sizeWithFont:theFont].width;
        // roundf??  the control leaves 1 pixel gap between segments if width
        // is not an integer value, the roundf fixes this
        CGFloat segWidth = roundf(textWidth + (spaceWidth / nSegments));
        total += segWidth;
        [segCtrl setWidth:segWidth forSegmentAtIndex:i];
    }
    if (segCtrl == segCtrCuisine)
        [scrollViewCuisine setContentSize:CGSizeMake(total + 20, 30)];
    else
        [scrollViewPrice setContentSize:CGSizeMake(total + 5, 30)];
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
    
    
    TSGlobalObj *strObj;
    

    
    if (segCtr == segCtrCuisine) {
        strObj = [[[CommonHelpers appDelegate] arrCuisine] objectAtIndex:segCtr.selectedSegmentIndex];
    }
    else
        if (segCtr == segCtrPrice) {
        strObj =[[[CommonHelpers appDelegate] arrPrice] objectAtIndex:segCtr.selectedSegmentIndex];
        }
        else
        {
        
        }

    if ([arrDataStickFilter containsObject:strObj]) {
        [arrDataStickFilter removeObject:strObj];
        for (int i = 0; i< [[sender subviews] count]; i++) {
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
    self.rating = count;
    
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
        static NSString *CellIndentifier = @"RestaurantCell";
        
        RestaurantCell *cell = (RestaurantCell *)[tableView dequeueReusableCellWithIdentifier:CellIndentifier];
        
        if (cell==nil) {
            NSLog(@"cell is nil");
            cell =(RestaurantCell *) [[[NSBundle mainBundle ] loadNibNamed:@"RestaurantCell" owner:self options:nil] objectAtIndex:0];
        }
        
        TSGlobalObj* obj = [_arrData objectAtIndex:indexPath.row];
        [cell initForView:obj.restaurantObj];
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
        //fix here
        TSGlobalObj *obj = [_arrDataFilter objectAtIndex:indexPath.row];
        cell.textLabel.text = obj.name;
       
        cell.textLabel.textAlignment = NSTextAlignmentLeft;
        cell.textLabel.textColor = [UIColor whiteColor];
        [cell.textLabel setFont:[UIFont boldSystemFontOfSize:13]];
        
        
        return cell;
    }
    
}

-(CGFloat)tableView:(UITableView *)tableView heightForRowAtIndexPath:(NSIndexPath *)indexPath
{
    if (tableView==tbvResult) {
        static NSString *CellIndentifier = @"restaurant_cell";
        
        RestaurantCell *cell = (RestaurantCell *)[tableView dequeueReusableCellWithIdentifier:CellIndentifier];
        
        if (cell==nil) {
            NSLog(@"cell is nil");
            cell =(RestaurantCell *) [[[NSBundle mainBundle ] loadNibNamed:@"RestaurantCell" owner:self options:nil] objectAtIndex:0];
        }
        return cell.frame.size.height;
    }
    else
    {
        static NSString *CellIndentifier = @"cell";
        
        UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:CellIndentifier];
        if (cell==nil) {
            cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleDefault reuseIdentifier:CellIndentifier];
        }
        
        
        return cell.frame.size.height;
    }
}

- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath
{
    if (tableView==tbvFilter) {
        if (TFSelected == TFRestaurant) {
            TSGlobalObj *obj = [_arrDataFilter objectAtIndex:indexPath.row];
            [self.arrData removeAllObjects];
            [self.arrData addObject:obj];
            tfRestaurant.text = obj.name;
            restaurant = obj;
            [tbvResult reloadData];
        }
        else if (TFSelected == TFRegion)
        {
            TSGlobalObj* gloabal =  [_arrDataFilter objectAtIndex:indexPath.row];
            tfRegion.text = gloabal.name;
            region = gloabal;
            _isHaveCityObj = YES;
            _cityObj = gloabal.cityObj;
            _restaurantGerenal = @"";
        }
        else
        {
            
        }
      
        tbvFilter.hidden= YES;
       
        [self.arrDataFilter removeAllObjects];
    }
    else
    {
        TSGlobalObj* obj = [_arrData objectAtIndex:indexPath.row];
        
        RestaurantObj* restaurantObj = obj.restaurantObj;
        restaurantObj.uid = restaurantObj.uid;
        restaurantObj.name = restaurantObj.name;
        RestaurantDetailVC *vc = [[RestaurantDetailVC alloc] initWithRestaurantObj:restaurantObj];
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
        _isHaveCityObj = NO;
        _cityObj = [CommonHelpers setDefaultCityObj];
    }
    
    
    
    return YES;
}




-(BOOL) textFieldShouldReturn:(UITextField *)textField{

    [self hideKeyBoard];
    tbvFilter.hidden= YES;
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
        
        if (![txt isEqualToString:_restaurantGerenal] && txt.length == 1) {
            NSLog(@"Start request restaurant");
            _restaurantGerenal = txt;
            
            TSGlobalObj* region1 = [CommonHelpers getDefaultCityObj];
            
            CRequest* request = [[CRequest alloc]initWithURL:@"suggestrestaurantnames" RQType:RequestTypePost RQData:RequestPopulate RQCategory:ApplicationForm withKey:1];
            request.delegate = self;
            [request setFormPostValue:txt forKey:@"key"];
            if (_isHaveCityObj) 
                [request setFormPostValue:_cityObj.uid forKey:@"cityid"];
            else
                [request setFormPostValue:region1.cityObj.uid forKey:@"cityid"];
            [request startFormRequest];
        }
        if (txt.length >= 1) {
            [self.arrDataFilter removeAllObjects];
            [self.arrData removeAllObjects];
            for (TSGlobalObj *strObj in self.arrDataRestaurant) {
                NSString  *ustrObj =  [strObj.name uppercaseString];
                NSString *utxt =   [txt uppercaseString];
                
                int diff = strncmp([ustrObj UTF8String], [utxt UTF8String], utxt.length);
                
                debug(@"ustrObj -  utxt  -> %@ - %@ ",ustrObj,utxt);
                
                if (/*p!=NULL*/ diff == 0) {
                    debug(@"added");
                    [self.arrDataFilter addObject:strObj];
                    [self.arrData addObject:strObj];
                }
            }
            NSLog(@"arrData Count:%d",self.arrData.count);
            [tbvFilter setFrame:CGRectMake(20, tbvFilter.frame.origin.y, tbvFilter.frame.size.width, tbvFilter.frame.size.height)];
        }
        
    }
    else if(TFSelected == TFRegion)
    {
        if (![txt isEqualToString:_regionGerenal] && txt.length == 3) {
            NSLog(@"Start request region");
            _regionGerenal = txt;
            CRequest* request = [[CRequest alloc]initWithURL:@"getUserCity" RQType:RequestTypePost RQData:RequestDataUser RQCategory:ApplicationForm withKey:2];
            request.delegate = self;
            [request setFormPostValue:txt forKey:@"key"];
            [request startFormRequest];
        }
        
        if (txt.length >= 3) {
            [self.arrDataFilter removeAllObjects];
            for (TSGlobalObj *strObj in _arrDataRegion) {
                NSString  *ustrObj =  [strObj.name uppercaseString];
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
        
    }
    else
    {
        
    }
    
    
    if (self.arrDataFilter.count>0) {
        CGRect frame = tbvFilter.frame;
        if (self.arrDataFilter.count > 5) {
            frame.size.height = 5*44;
            
        }
        else{
            frame.size.height = (_arrDataFilter.count) *44;
        }
        tbvFilter.hidden = NO;
        [tbvFilter reloadData];
        [tbvResult reloadData];
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
    tfRegion.text = region.name;
    if (restaurant ==nil) {
        lbTypingRestaurant.hidden = NO;
        tfRestaurant.text = nil;
    }else
    {
        tfRestaurant.text = restaurant.name;
    }
    
    if (region == nil) {
        lbTypeRegions.hidden = NO;
        tfRegion.text = nil;

    }
    else
    {
        tfRegion.text = region.name;
    }
}

#pragma mark - UISCrollViewDelegate

- (void)scrollViewWillBeginDragging:(UIScrollView *)scrollView
{
    if (scrollView == scrollViewMain) {

        //debug(@"scrollViewMain ->scrollViewWillBeginDragging");
    }
    else if(scrollView == tbvResult)
    {
//        scrollViewMain.scrollEnabled = NO;
       // debug(@"tbvResult ->scrollViewWillBeginDragging");
            
    }
}

- (void)scrollViewDidEndDragging:(UIScrollView *)scrollView willDecelerate:(BOOL)decelerate
{
    if (scrollView == scrollViewMain) {
        
        //debug(@"scrollViewMain ->scrollViewDidEndDragging");
    }
    else if(scrollView == tbvResult)
    {
//        scrollViewMain.scrollEnabled = YES;
        //NSLog(@"%f", scrollView.contentOffset.y);
        
        //debug(@"tbvResult ->scrollViewDidEndDragging");
    }

}

-(void)scrollViewDidEndDecelerating:(UIScrollView *)scrollView
{
    if (scrollView == scrollViewMain) {
        
        //debug(@"scrollViewMain ->scrollViewDidEndDragging");
    }
    else if(scrollView == tbvResult)
    {
        if(scrollView.contentOffset.y == scrollView.contentSize.height - tbvResult.frame.size.height)
        {
            currentPage++;
            
            if (currentPage <= numberPage) {
                if (_notHomeScreen == NO) {
                    [self requestRestaurant];
                }
                else
                    [self requestWithRecorequestID];
            }
            
        }
    }
}

#pragma mark response Data
-(void)responseData:(NSData *)data WithKey:(int)key UserData:(id)userData
{
    NSString* response = [[NSString alloc]initWithData:data encoding:NSUTF8StringEncoding];
    NSLog(@"response: %@",response);
    
    if (key == 1) {
        [_arrDataRestaurant removeAllObjects];
        numberPage = -1;
        currentPage = 1;
        //[_arrData removeAllObjects];
        NSArray* array = [response objectFromJSONString];
        for (NSDictionary* dic in array) {
            TSGlobalObj* global = [[TSGlobalObj alloc]init];
            global.type = GlobalDataRestaurant;
            global.uid = [dic objectForKey:@"restaurantId"];
            global.name = [dic objectForKey:@"restaurantName"];
            
            RestaurantObj* restaurantObj = [[RestaurantObj alloc]init];
            
            restaurantObj.uid =  [dic objectForKey:@"restaurantId"];
            restaurantObj.factualId = [dic objectForKey:@"factualId"];
            restaurantObj.name = [dic objectForKey:@"restaurantName"];
            restaurantObj.isOpenNow                =  [[dic objectForKey:@"openNowFlag"] isEqualToString:@"1"]?YES:NO;
            restaurantObj.deal                            =  [dic objectForKey:@"dealHeadline"];
            restaurantObj.rates                           = [[dic objectForKey:@"factualRating"] floatValue];
            restaurantObj.price                           = [dic objectForKey:@"priceRange"];
            restaurantObj.lattitude                           = [[dic objectForKey:@"restaurantLat"] floatValue];
            restaurantObj.longtitude                           = [[dic objectForKey:@"restaurantLon"] floatValue];
            if ([restaurantObj.deal isEqualToString:@""])
                restaurantObj.isDeal = NO;
            else
                restaurantObj.isDeal = YES;
            
            restaurantObj.isMoreInfo                  =  [[dic objectForKey:@"moreInfoFlag"]  isEqualToString:@"1"]?YES:NO;
            restaurantObj.isMenuFlag                =  [[dic objectForKey:@"menuFlag"] isEqualToString:@"1"]?YES:NO;
            restaurantObj.isSaved                      =  [[dic objectForKey:@"userRestaurantSavedFlag"] isEqualToString:@"1"]?YES:NO;
            restaurantObj.isFavs                         =  [[dic objectForKey:@"userRestaurantFavFlag"]  isEqualToString:@"1"]?YES:NO;
            restaurantObj.isTipFlag                     =  [[dic objectForKey:@"userRestaurantTipFlag"]  isEqualToString:@"1"]?YES:NO;
            
            restaurantObj.cuisineTier2Array = [[NSMutableArray alloc]init];
            NSMutableArray* arrayCuisine = [dic objectForKey:@"cuisineTier2Obj"];
            for (NSDictionary* dicCuisine in arrayCuisine) {
                int valid = [[dicCuisine objectForKey:@"cuisineValidCurrent"] integerValue];
                if (valid == 1) {
                    TSGlobalObj* global = [[TSGlobalObj alloc]init];
                    global.uid = [dicCuisine objectForKey:@"cuisineId"];
                    global.name = [dicCuisine objectForKey:@"cuisineDesc"];
                    global.type = GlobalDataCuisine_2;
                    
                }
            }
            
            if (restaurantObj.cuisineTier2Array.count > 0) {
                TSGlobalObj* cuisineObj = [restaurantObj.cuisineTier2Array objectAtIndex:0];
                restaurantObj.cuisineTier2 = cuisineObj.name;
            }
            else
                restaurantObj.cuisineTier2 = @"";
            
            global.restaurantObj = restaurantObj;
            [_arrDataRestaurant addObject:global];
            
        }
        [tbvResult reloadData];
    }
    if (key == 2) {
        [_arrDataRegion removeAllObjects];
        NSArray* array = [response objectFromJSONString];
        for (NSDictionary* dic in array) {
            TSGlobalObj* global = [[TSGlobalObj alloc]init];
            global.type = GlobalDataCity;
            global.uid = [dic objectForKey:@"cityId"];
            global.name = [NSString stringWithFormat:@"%@, %@", [dic objectForKey:@"city"],  [dic objectForKey:@"state"]];
            
            TSCityObj* cityObj = [[TSCityObj alloc]init];
            
            cityObj.uid              = [dic objectForKey:@"cityId"];
            cityObj.cityName         = [dic objectForKey:@"city"];
            cityObj.stateName        = [dic objectForKey:@"state"];
            cityObj.country          = [dic objectForKey:@"country"];
            global.cityObj = cityObj;
            [_arrDataRegion addObject:global];
        }
    }
    if (key == 3) {
        NSDictionary* dicAll = [response objectFromJSONString];
        numberPage = [[dicAll objectForKey:@"maxPaginationId"] integerValue];
        
        NSArray* array = [dicAll objectForKey:@"restaurantsSearchListTileObj"];
        for (NSDictionary* dic in array) {
            TSGlobalObj* global = [[TSGlobalObj alloc]init];
            global.type = GlobalDataRestaurant;
            
            
            
            global.uid = [dic objectForKey:@"restaurantId"];
            global.name = [dic objectForKey:@"restaurantName"];
            
            RestaurantObj* restaurantObj = [[RestaurantObj alloc]init];
            
            restaurantObj.uid =  [dic objectForKey:@"restaurantId"];
            restaurantObj.name = [dic objectForKey:@"restaurantName"];
            restaurantObj.cuisineTier2 = [dic objectForKey:@"cuisineTier2Name"];
            restaurantObj.price     = [dic objectForKey:@"price"];
            restaurantObj.deal      =  [dic objectForKey:@"restaurantDealFlag"];
            restaurantObj.rates     = [[dic objectForKey:@"restaurantRating"] floatValue];
            
            restaurantObj.lattitude     = [[dic objectForKey:@"restaurantLat"] floatValue];
            restaurantObj.longtitude    = [[dic objectForKey:@"restaurantLong"] floatValue];
            restaurantObj.cityObj = [[TSCityObj alloc]init];
            restaurantObj.cityObj.cityName = [dic objectForKey:@"restaurantCity"];
            
            global.restaurantObj = restaurantObj;
            [_arrData addObject:global];
        }
        //_arrData = _arrDataRestaurant;
        [tbvResult reloadData];
        
    }
}

-(BOOL)isExist:(NSMutableArray*)array RestaurantID:(NSString*)uid
{
    for (RestaurantObj* obj in array) {
        if ([obj.uid isEqualToString:uid]) {
            return YES;
        }
    }
    return NO;
}

@end
