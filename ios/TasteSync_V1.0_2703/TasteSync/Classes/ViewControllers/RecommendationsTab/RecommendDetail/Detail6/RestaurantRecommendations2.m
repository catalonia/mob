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

@interface RestaurantRecommendations2 ()<UITableViewDelegate, UITableViewDataSource>

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
    // Do any additional setup after loading the view from its nib.
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

    
//    Recommend2Obj *obj = [[Recommend2Obj alloc] init];
//    RestaurantObj *restaurant = [[RestaurantObj alloc] init];


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
   
    return 3;
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    static NSString *cellIdentifier = @"restaurant_recommendation_cell";
    
    RestaurantRecommendationCell *cell = [tableView dequeueReusableCellWithIdentifier:cellIdentifier];
    if (cell == nil) {
        cell = (RestaurantRecommendationCell *)[[[NSBundle mainBundle] loadNibNamed:@"RestaurantRecommendationCell" owner:self options:nil] objectAtIndex:0];
        
    }
    
// code for prototype test 
    
    switch (indexPath.row) {
        case 0:
        {
            [cell initCellTest1];
        }
            break;
            
        case 1:
        {
            [cell initCellTest2];

        }
            break;
        case 2:
        {
            [cell initCellTest3];

        }
            break;
            
        default:
        {
            [cell initCellTest1];

        }
            break;
    }
    return cell;
    
}

- (void) tableView:(UITableView *)tableView didDeselectRowAtIndexPath:(NSIndexPath *)indexPath
{
    /*
    debug(@"RestaurantRecommendations2 - > didDeselectRowAtIndexPath");
    RestaurantObj *testObj = [[RestaurantObj alloc] init];
    testObj.name = @"Nanking";
    [[[CommonHelpers appDelegate] tabbarBaseVC] actionSelectRestaurant:testObj];
     
     */
}

- (CGFloat)tableView:(UITableView *)tableView heightForRowAtIndexPath:(NSIndexPath *)indexPath
{
    switch (indexPath.row) {
        case 0:
            {
                return 90;
            }
            break;
        case 1:
        {
            return 130;
        }
            break;
        case 2:
        {
            return 180;
        }
            break;
            
        default:
        {
            return 80;
        }
            break;
    }
}
@end
