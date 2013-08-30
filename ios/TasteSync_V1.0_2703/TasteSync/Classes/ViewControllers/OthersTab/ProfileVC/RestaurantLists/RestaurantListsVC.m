//
//  RestaurantListsVC.m
//  TasteSync
//
//  Created by Victor on 3/1/13.
//  Copyright (c) 2013 Mobioneer. All rights reserved.
//

#import "RestaurantListsVC.h"
#import "CommonHelpers.h"

@interface RestaurantListsVC ()<UIActionSheetDelegate>
{
    BOOL filterViewShown;
    BOOL isRecommended, isFavs, isTips, isSaved;
}

@end

@implementation RestaurantListsVC

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
    [self initUI];
    self.arrDataRestaurant = [[NSMutableArray alloc]init];
    // Do any additional setup after loading the view from its nib.
}

- (void) viewWillAppear:(BOOL)animated
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
    [tbvRestaurant setFrame:CGRectMake(10, 60, 300, 300)];

    viewFilterExtends.hidden = YES;
    if (_userObj) {
        lbTitle.text = [NSString stringWithFormat:@"%@ %@'s Restaurant List",_userObj.firstname,_userObj.lastname];
    }
    else
    {
        lbTitle.text = @"You have been to";
    }
}

- (void)requestData:(RestaurantType)type
{
    CRequest* request = [[CRequest alloc]initWithURL:@"showProfileRestaurants" RQType:RequestTypePost RQData:RequestDataUser RQCategory:ApplicationForm withKey:type];
    request.delegate = self;
    [request setFormPostValue:[UserDefault userDefault].userID forKey:@"userId"];
    [request setFormPostValue:[NSString stringWithFormat:@"%d",type] forKey:@"type"];
    [request setFormPostValue:@"0" forKey:@"from"];
    [request setFormPostValue:@"0" forKey:@"to"];
    [request startFormRequest];
}

# pragma mark - IBAction's Define
- (IBAction)actionBack:(id)sender
{
    [self.navigationController popViewControllerAnimated:YES];
}
- (IBAction)actionNewsfeed:(id)sender
{
//    [[[CommonHelpers appDelegate] tabbarBaseVC] actionNewsfeed];
    UIActionSheet *actionSheet = [[UIActionSheet alloc]initWithTitle:APP_NAME delegate:self cancelButtonTitle:@"Cancel" destructiveButtonTitle:nil otherButtonTitles:@"Facebook",@"Twitter", @"Tumblr",@"Email", nil];
    actionSheet.actionSheetStyle = UIActionSheetStyleBlackOpaque;
    
    [actionSheet showFromTabBar:self.tabBarController.tabBar];
    
}

- (IBAction)actionDoneFilter:(id)sender
{
    filterViewShown = FALSE;
    viewFilterExtends.hidden = YES;
    viewFilter.hidden = NO;
    [tbvRestaurant setFrame:CGRectMake(10, 60, 300, 300)];
    [scrollViewMain setContentSize:CGSizeMake(320, 500)];
}

- (IBAction)actionFilter:(id)sender
{
    if (filterViewShown) {
        filterViewShown = FALSE;
        viewFilterExtends.hidden = YES;
        viewFilter.hidden = NO;
        [tbvRestaurant setFrame:CGRectMake(10, 60, 300, 300)];
        [scrollViewMain setContentSize:CGSizeMake(320, 500)];

    
    }
    else
    {
        filterViewShown = TRUE;
        viewFilterExtends.hidden = NO;
        viewFilter.hidden = YES;
        [tbvRestaurant setFrame:CGRectMake(10, 240, 300, 300)];
        [scrollViewMain setContentSize:CGSizeMake(320, 600)];

    }
}
- (IBAction)actionChooseFilter:(id)sender
{
    UIButton *bt = (UIButton *) sender;
    if (bt== btRecommended) {
        if (isRecommended) {
            isRecommended = FALSE;
            [self removeType:RestaurantTypeRecomodation];
            [CommonHelpers setBackgroundImage:[UIImage imageNamed:@"ic_bt_recommended.png"] forButton:btRecommended];
        }
        else
        {
            isRecommended = TRUE;
            [self requestData:RestaurantTypeRecomodation];
            [CommonHelpers setBackgroundImage:[UIImage imageNamed:@"ic_bt_recommended_on.png"] forButton:btRecommended];
        }
    }
    else  if (bt== btFavs) {
        if (isFavs) {
            isFavs = FALSE;
            [self removeType:RestaurantTypeFavorated];
            [CommonHelpers setBackgroundImage:[UIImage imageNamed:@"ic_bt_favs.png"] forButton:btFavs];
        }
        else
        {
            isFavs = TRUE;
            [self requestData:RestaurantTypeFavorated];
            [CommonHelpers setBackgroundImage:[UIImage imageNamed:@"ic_bt_favs_on.png"] forButton:btFavs];
        }
    } else  if (bt== btTips) {
        if (isTips) {
            isTips = FALSE;
            [self removeType:RestaurantTypeTips];
            [CommonHelpers setBackgroundImage:[UIImage imageNamed:@"ic_bt_tips.png"] forButton:btTips];
        }
        else
        {
            isTips = TRUE;
            [self requestData:RestaurantTypeTips];
            [CommonHelpers setBackgroundImage:[UIImage imageNamed:@"ic_bt_tips_on.png"] forButton:btTips];
        }
    } else  if (bt== btSaved) {
        if (isSaved) {
            isSaved = FALSE;
            [self removeType:RestaurantTypeSaved];
            [CommonHelpers setBackgroundImage:[UIImage imageNamed:@"ic_bt_saved125_off.png"] forButton:btSaved];
        }
        else
        {
            isSaved = TRUE;
            [self requestData:RestaurantTypeSaved];
            [CommonHelpers setBackgroundImage:[UIImage imageNamed:@"ic_bt_saved125_on.png.png"] forButton:btSaved];
        }
    }
    else
    {
        
    }
}


#pragma mark - Table view data source

- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView
{
    
    return 1;
}

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section
{
   
    if (_arrDataRestaurant) {
        return  _arrDataRestaurant.count;
    }
    
    return 0;
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    if (tableView==tbvRestaurant) {
        static NSString *CellIndentifier = @"restaurant_profile_cell";
        
        RestaurantProfileCell *cell = (RestaurantProfileCell *)[tableView dequeueReusableCellWithIdentifier:CellIndentifier];
        
        if (cell==nil) {
            NSLog(@"cell is nil");
            cell =(RestaurantProfileCell *) [[[NSBundle mainBundle ] loadNibNamed:@"RestaurantProfileCell" owner:self options:nil] objectAtIndex:0];
            
            
        }
        
        [cell initForCell:[_arrDataRestaurant objectAtIndex:indexPath.row]];
        
        return cell;
    }
    return nil;
   
    
}


- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath
{
    [[[CommonHelpers appDelegate] tabbarBaseVC] actionSelectRestaurant:[_arrDataRestaurant objectAtIndex:indexPath.row] selectedIndex:3];

}

-(void)responseData:(NSData *)data WithKey:(int)key UserData:(id)userData
{
    NSString* response = [[NSString alloc]initWithData:data encoding:NSUTF8StringEncoding];
    NSLog(@"%@",response);
        //[_arrDataRestaurant removeAllObjects];
        NSArray* array = [response objectFromJSONString];
        for (NSDictionary* dic in array) {
            NSString* restaurantID = [NSString stringWithFormat:@"%@", [dic objectForKey:@"restauarntId"]];
            if ([self checkRestaurant:restaurantID]) {
                RestaurantObj* restaurantObj        = [[RestaurantObj alloc]init];
                restaurantObj.type                           = key;
                restaurantObj.uid                             =  [dic objectForKey:@"restauarntId"];
                restaurantObj.factualId                    = [dic objectForKey:@"factualId"];
                restaurantObj.name                         = [dic objectForKey:@"restaurantName"];
                restaurantObj.isOpenNow               =  [[dic objectForKey:@"openNowFlag"] isEqualToString:@"1"]?YES:NO;
                restaurantObj.deal                            =  [dic objectForKey:@"restaurantDealFlag"];
                if (![restaurantObj.deal isEqual:[NSNull null]]) {
                    if ([restaurantObj.deal isEqualToString:@""])
                        restaurantObj.isDeal = NO;
                    else
                        restaurantObj.isDeal = YES;
                }
                restaurantObj.isMoreInfo                  =  [[dic objectForKey:@"moreInfoFlag"]  isEqualToString:@"1"]?YES:NO;
                restaurantObj.isMenuFlag                =  [[dic objectForKey:@"menuFlag"] isEqualToString:@"1"]?YES:NO;
                restaurantObj.isSaved                      =  [[dic objectForKey:@"userSavedFlag"] isEqualToString:@"1"]?YES:NO;
                restaurantObj.isFavs                         =  [[dic objectForKey:@"userFavFlag"]  isEqualToString:@"1"]?YES:NO;
                restaurantObj.isTipFlag                     =  [[dic objectForKey:@"userTipFlag"]  isEqualToString:@"1"]?YES:NO;
                restaurantObj.isReco                        =  [[dic objectForKey:@"userRecommendedFlag"]  isEqualToString:@"1"]?YES:NO;
                
                restaurantObj.rates = [[dic objectForKey:@"restaurantRating"] floatValue];
                restaurantObj.lattitude = [[dic objectForKey:@"restaurantLat"] floatValue];
                restaurantObj.longtitude = [[dic objectForKey:@"restaurantLong"] floatValue];
                restaurantObj.price = [dic objectForKey:@"price"];
                //restaurantObj.cuisineTier2.name = [dic objectForKey:@"cuisineTier2Name"];
                
                TSCityObj* cityObj = [[TSCityObj alloc]init];
                NSDictionary* dicCity = [dic objectForKey:@"restaurantCity"];
                cityObj.uid = [dicCity objectForKey:@"cityId"];
                cityObj.country = [dicCity objectForKey:@"country"];
                cityObj.stateName = [dicCity objectForKey:@"state"];
                cityObj.cityName = [dicCity objectForKey:@"city"];
                restaurantObj.cityObj = cityObj;
                
                [self.arrDataRestaurant addObject:restaurantObj];
            }
    }
    [tbvRestaurant reloadData];
}
- (BOOL)checkRestaurant:(NSString*)str
{
    for (RestaurantObj* obj in _arrDataRestaurant) {
        NSString* str1 = [NSString stringWithFormat:@"%@", obj.uid];
        if ([str1 isEqualToString:str]) {
            return NO;
        }
    }
    return YES;
}
- (void) removeType:(RestaurantType)type
{
    for (RestaurantObj* obj in _arrDataRestaurant) {
        if (obj.type == type) {
            [self.arrDataRestaurant removeObject:obj];
        }
    }
    [tbvRestaurant reloadData];
}
@end
