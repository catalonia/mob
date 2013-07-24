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

@interface AskVC ()<TagObjDelegate,TagViewDelegate>
{
    BOOL filterViewShown;
    BOOL chooseRegion;
    CGRect scrollPosition;    
    TagView *tagView;
    NSMutableArray *arrDataAsk;
    UITextField *cTextField;
    NSString *region;

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
    [scrollViewCusine setContentSize:CGSizeMake(2100, 30)];
    [scrollViewOccassion setContentSize:CGSizeMake(1100, 30)];
    [scrollViewWho setContentSize:CGSizeMake(800, 30)];
    [scrollViewPrice setContentSize:CGSizeMake(500, 30)];
    [scrollViewTheme setContentSize:CGSizeMake(1500, 30)];
    [scrollViewTypeOf setContentSize:CGSizeMake(1200, 30)];
    
    
    for (int i= 0; i< [[[CommonHelpers appDelegate] arrCuisine] count]; i++) {
        [segCtrCusine setTitle:[[[CommonHelpers appDelegate ] arrCuisine ] objectAtIndex:i] forSegmentAtIndex:i];
        
        
    }
    for (int i= 0; i< [[[CommonHelpers appDelegate] arrOccasion] count]; i++) {
        [segCtrOccasion setTitle:[[[CommonHelpers appDelegate ] arrOccasion ] objectAtIndex:i] forSegmentAtIndex:i];
        
    }
    for (int i= 0; i< [[[CommonHelpers appDelegate] arrPrice] count]; i++) {
        [segCtrPrice setTitle:[[[CommonHelpers appDelegate ] arrPrice ] objectAtIndex:i] forSegmentAtIndex:i];
    }
    for (int i= 0; i< [[[CommonHelpers appDelegate] arrTheme] count]; i++) {
        [segCtrTheme setTitle:[[[CommonHelpers appDelegate ] arrTheme ] objectAtIndex:i] forSegmentAtIndex:i];
    }
    for (int i= 0; i< [[[CommonHelpers appDelegate] arrTypeOfRestaurant] count]; i++) {
        [segCtrTypeOf setTitle:[[[CommonHelpers appDelegate ] arrTypeOfRestaurant ] objectAtIndex:i] forSegmentAtIndex:i];
    }
    for (int i= 0; i< [[[CommonHelpers appDelegate] arrWhoAreUWith] count]; i++) {
        [segCtrWho setTitle:[[[CommonHelpers appDelegate ] arrWhoAreUWith ] objectAtIndex:i] forSegmentAtIndex:i];
        
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
    self.arrDataRegion = [[NSMutableArray alloc] initWithObjects:@"Chinatown, New York, NY",@"Chappaqua, NY",@"Njius, Chjas, CA",@"New York, NY", nil];   
    
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
        AskRecommendationsVC *vc = [[AskRecommendationsVC alloc] initWithNibName:@"AskRecommendationsVC" bundle:nil];
        [self.navigationController pushViewController:vc animated:YES];
    }

}

- (IBAction)actionSegmentControl:(id)sender
{
    UISegmentedControl *segCtr = (UISegmentedControl *)sender;
    debug(@"segCtr selectedIndex -> %d", segCtr.selectedSegmentIndex);
    
    
    NSString *strObj;

    if (segCtr == segCtrCusine) {
        strObj = [[[CommonHelpers appDelegate] arrCuisine] objectAtIndex:segCtr.selectedSegmentIndex];
    }else
    if (segCtr == segCtrOccasion) {
        strObj =[[[CommonHelpers appDelegate] arrOccasion] objectAtIndex:segCtr.selectedSegmentIndex];
    }else
    if (segCtr == segCtrPrice) {
        strObj =[[[CommonHelpers appDelegate] arrPrice] objectAtIndex:segCtr.selectedSegmentIndex];
    }else
    if (segCtr == segCtrTheme) {
        strObj =[[[CommonHelpers appDelegate] arrTheme] objectAtIndex:segCtr.selectedSegmentIndex];
    }else
    if (segCtr == segCtrTypeOf) {
        strObj = [[[CommonHelpers appDelegate] arrTypeOfRestaurant] objectAtIndex:segCtr.selectedSegmentIndex];
    }else
    if (segCtr == segCtrWho) {
        strObj =[[[CommonHelpers appDelegate] arrWhoAreUWith] objectAtIndex:segCtr.selectedSegmentIndex];
    }else
    {
        
    }
    
      
    if ([arrDataAsk containsObject:strObj]) {
        
        debug(@"unselect obj");
        [arrDataAsk removeObject:strObj];
        
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
        [arrDataAsk addObject:strObj];
        [tagView addTagObj:strObj delegate:self andTagDefault:NO];
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
    
    NSString *strtxt = [_arrDataFilter objectAtIndex:indexPath.row];
    
    cell.textLabel.text = strtxt;
    //        cell.textLabel.textAlignment = UITextAlignmentRight;
    cell.textLabel.textColor = [UIColor whiteColor];
    [cell.textLabel setFont:[UIFont boldSystemFontOfSize:13]];
    
    
    
    return cell;
}

- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath
{
    
    if (chooseRegion) {
        
        NSString *strObj = [_arrDataFilter objectAtIndex:indexPath.row];
        tfRegion.text = strObj;
        region = strObj;
        tbvFilter.hidden = YES;
        [_arrDataFilter removeAllObjects];


    }
    else
    {
        
        NSString *strObj = [_arrDataFilter objectAtIndex:indexPath.row];
        [arrDataAsk addObject:strObj];
        [tagView addTagObj:strObj delegate:self];
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
        
    if (chooseRegion) {
        
        for (NSString *strObj in _arrDataRegion) {
           
            NSString  *ustrObj =  [strObj uppercaseString];
            NSString *utxt =   [txt uppercaseString];
            
            int diff = strncmp([ustrObj UTF8String], [utxt UTF8String], utxt.length);
                       
            
            if (/*p!=NULL*/ diff == 0) {
                [self.arrDataFilter addObject:strObj];
            }
            
        }

    }else
    {
        
        debug(@"SearchLocal : txt -> %@",txt);
        for (NSString *strObj in _arrData) {
            /*
            char *p;
            p = strstr([strObj UTF8String], [txt UTF8String]);
             
             */
            
         NSString  *ustrObj =  [strObj uppercaseString];
         NSString *utxt =   [txt uppercaseString];
            
            int diff = strncmp([ustrObj UTF8String], [utxt UTF8String], utxt.length);
            
                        
            if (/*p!=NULL*/ diff == 0) {
                [self.arrDataFilter addObject:strObj];
            }
            
        }
        
        
        for (NSString *obj in arrDataAsk) {
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
        tfRegion.text = region;

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

- (void) tagObj:(TagObj *)tagObj didChangeTextFieldWithString:(NSString *) aString
{
    debug(@"AskVC -> tagObj-> didChangeTextFieldWithString:%@",aString);
    [self searchLocal:aString];
}

- (void) tagObj:(TagObj *)tagObj didDeleteString:(NSString *)aString
{
    debug(@"AskVC -> tagObj-> didDeleteString:%@",aString);
    if (aString == nil) {
        if (arrDataAsk.count>0) {
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



@end
