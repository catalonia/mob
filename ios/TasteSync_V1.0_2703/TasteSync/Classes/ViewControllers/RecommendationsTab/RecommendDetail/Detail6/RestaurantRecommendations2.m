//
//  RestaurantRecommendations2.m
//  TasteSync
//
//  Created by Victor on 3/14/13.
//  Copyright (c) 2013 Mobioneer. All rights reserved.
//

#import "RestaurantRecommendations2.h"
#import "RestaurantRecommendationCell.h"
#import "CommonHelpers.h"
#import "MoreUserRecommendationsVC.h"
#import "ReplyRecomendationObj.h"

@interface RestaurantRecommendations2 ()<UITableViewDelegate, UITableViewDataSource>
{
    __weak IBOutlet UILabel* askQuestion;
}
@end

@implementation RestaurantRecommendations2

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
    [self initData];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (void) initData
{
    self.arrData = [[NSMutableArray alloc] init];
    _notificationObj.read = TRUE;
    
    NSString* link = [NSString stringWithFormat:@"recos4you?userid=%@&recorequestid=%@",[UserDefault userDefault].userID, self.notificationObj.linkId];
    CRequest* request = [[CRequest alloc]initWithURL:link RQType:RequestTypeGet RQData:RequestDataAsk RQCategory:ApplicationForm withKey:1];
    request.delegate = self;
    [request startFormRequest];
    
}

- (void) viewWillAppear:(BOOL)animated
{
    [tbv reloadData];
}
#pragma mark - IBAction's Define

- (IBAction)actionBack:(id)sender
{
    [self.navigationController popViewControllerAnimated:YES];
}
- (IBAction)actionNewsFeed:(id)sender
{
    [[[CommonHelpers appDelegate] tabbarBaseVC] actionNewsfeed];
}

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section
{
   
    return [self.arrData count];
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    static NSString *cellIdentifier = @"restaurant_recommendation_cell";
    
    RestaurantRecommendationCell *cell = [tableView dequeueReusableCellWithIdentifier:cellIdentifier];
    if (cell == nil) {
        cell = (RestaurantRecommendationCell *)[[[NSBundle mainBundle] loadNibNamed:@"RestaurantRecommendationCell" owner:self options:nil] objectAtIndex:0];
        
    }
    
    RestaurantObj* restaurantObj = [self.arrData objectAtIndex:indexPath.row];
    NSLog(@"%d",restaurantObj.recommendArray.count);
    switch (restaurantObj.recommendArray.count) {
        case 1:
        {
            [cell initCellTest1:restaurantObj];
        }
            break;
            
        case 2:
        {
            [cell initCellTest2:restaurantObj];

        }
            break;
        default:
        {
            [cell initCellTest3:restaurantObj];

        }
            break;
    }
    return cell;
    
}

- (void) tableView:(UITableView *)tableView didDeselectRowAtIndexPath:(NSIndexPath *)indexPath
{
    
}

- (CGFloat)tableView:(UITableView *)tableView heightForRowAtIndexPath:(NSIndexPath *)indexPath
{
    static NSString *cellIdentifier = @"restaurant_recommendation_cell";
    
    RestaurantRecommendationCell *cell = [tableView dequeueReusableCellWithIdentifier:cellIdentifier];
    if (cell == nil) {
        cell = (RestaurantRecommendationCell *)[[[NSBundle mainBundle] loadNibNamed:@"RestaurantRecommendationCell" owner:self options:nil] objectAtIndex:0];
        
    }
    RestaurantObj* restaurantObj = [self.arrData objectAtIndex:indexPath.row];

    switch (restaurantObj.recommendArray.count) {
        case 1:
            {
                return 90;
            }
            break;
        case 2:
        {
            return 130;
        }
            break;
        default:
        {
            return 180;
        }
            break;
    }
}

-(void)responseData:(NSData *)data WithKey:(int)key UserData:(id)userData
{
    NSString* responseString = [[NSString alloc]initWithData:data encoding:NSUTF8StringEncoding];
    NSLog(@"%@",responseString);
    NSDictionary* dicResponse = [responseString objectFromJSONString];
    askQuestion.text = [dicResponse objectForKey:@"recorequestText"];
    NSArray* arrayResponse = [dicResponse objectForKey:@"restaurantsForYouObjList"];
    for (NSDictionary* dic in arrayResponse) {
        RestaurantObj* obj = [[RestaurantObj alloc]init];
        obj.uid = [dic objectForKey:@"restaurantId"];
        obj.name = [dic objectForKey:@"restaurantName"];
        obj.cuisineTier2 = [dic objectForKey:@"cuisineTier2Name"];
        obj.price = [dic objectForKey:@"price"];
        obj.cityObj = [[TSCityObj alloc]init];
        obj.cityObj.cityName = [dic objectForKey:@"restaurantCity"];
        obj.lattitude = [[dic objectForKey:@"restaurantLat"] floatValue];
        obj.longtitude = [[dic objectForKey:@"restaurantLong"] floatValue];
        obj.deal = [dic objectForKey:@"restaurantDealFlag"];
        obj.rates = [[dic objectForKey:@"restaurantRating"] floatValue];
        obj.recommendArray = [[NSMutableArray alloc]init];
        
        NSArray* arrayReply = [dic objectForKey:@"recommendationsForYouList"];
        for (NSDictionary* dic2 in arrayReply) {
            ReplyRecomendationObj* replyObj = [[ReplyRecomendationObj alloc]init];
            replyObj.replyText = [dic2 objectForKey:@"replyText"];
            replyObj.recommenderUserFolloweeFlag = [dic2 objectForKey:@"recommenderUserFolloweeFlag"];
            NSDictionary* dicReply = [dic2 objectForKey:@"recommendeeUser"];
            replyObj.userObj = [[UserObj alloc]init];
            replyObj.userObj.uid = [dicReply objectForKey:@"userId"];
            replyObj.userObj.name = [dicReply objectForKey:@"name"];
            replyObj.userObj.avatarUrl = [dicReply objectForKey:@"photo"];
            [obj.recommendArray addObject:replyObj];
        }
        [self.arrData addObject:obj];
    }
    [tbv reloadData];
}

@end
