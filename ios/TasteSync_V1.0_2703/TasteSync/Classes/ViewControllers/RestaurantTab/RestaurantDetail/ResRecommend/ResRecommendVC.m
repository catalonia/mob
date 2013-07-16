//
//  ResRecommendVC.m
//  TasteSync
//
//  Created by Victor on 1/4/13.
//  Copyright (c) 2013 Mobioneer. All rights reserved.
//

#import "ResRecommendVC.h"
#import "ResRecommendDetailVC.h"
#import "CommonHelpers.h"
#import "ResQuestionVC.h"

@interface ResRecommendVC ()<UITableViewDataSource,UITableViewDelegate>
{
    __weak IBOutlet UITableView *tbvRecommend;
    __weak IBOutlet UILabel *lbName, *lbDetail;

}

- (IBAction)actionQuestion:(id)sender;

- (IBAction)actionBack:(id)sender;

- (IBAction)actionShare:(id)sender;




@end

@implementation ResRecommendVC

@synthesize arrData=_arrData,
resRecommendObj=_resRecommendObj,
restaurantObj=_restaurantObj;

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
    [CommonHelpers setBackgroudImageForViewRestaurant:self.view];
    // Do any additional setup after loading the view from its nib.

    if (!_arrData) {
        self.arrData = [[NSMutableArray alloc] init ];
        for (int i= 0; i<5; i++) {
            UserObj *user = [[UserObj alloc] init];
            user.firstname = @"Victor";
            user.lastname = @"NGO";
            user.avatar = [UIImage imageNamed:@"avatar.png"];
            ResRecommendObj *obj = [[ResRecommendObj alloc] init];
            obj.user = user;
            obj.numberOfLikes = i+20;
            obj.title = @"Victor N. recommends for Dinner";
            obj.detail = @"haiz";
            [self.arrData addObject:obj];
        }
    }
    
    [self configView];

}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (void) viewWillAppear:(BOOL)animated
{
    [super viewWillAppear:animated];
    self.navigationController.navigationBarHidden = YES;
}

- (void) configView
{
    if (_restaurantObj) {
        lbName.text = _restaurantObj.name;
        lbDetail.text = @"Chinese , $$, New York, 3.1 mi";
    }
}

# pragma mark - IBAction 's Define

- (IBAction)actionQuestion:(id)sender
{
    ResQuestionVC *vc = [[ResQuestionVC alloc] initWithNibName:@"ResQuestionVC" bundle:nil];
    vc.restaurantObj = _restaurantObj;
    [self.navigationController pushViewController:vc animated:YES];
}

- (IBAction)actionBack:(id)sender
{
    [self.navigationController popViewControllerAnimated:YES];

}


- (IBAction)actionShare:(id)sender
{
    [CommonHelpers showShareView:nil andObj:_restaurantObj];

}



# pragma mark - UITableView

- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView
{
    return 1;
}

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section
{
    if (_arrData) {
        return _arrData.count;
    }
    
    NSLog(@"return number row 1");
    return 0;
}



- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    
    NSLog(@"cellForRowAtIndexPath");
    
    static NSString *CellIndentifier = @"res_recommend_cell";
    
    ResRecommendCell *cell = (ResRecommendCell *)[tableView dequeueReusableCellWithIdentifier:CellIndentifier];
    
    if (cell==nil) {
        NSLog(@"cell is nil");
        cell =(ResRecommendCell *) [[[NSBundle mainBundle ] loadNibNamed:@"ResRecommendCell" owner:self options:nil] objectAtIndex:0];
       
        
    }
    
    
    
    ResRecommendObj *obj = [_arrData objectAtIndex:indexPath.row];
    [cell initForCell:obj];
    
    
    return cell;
}

#pragma mark - Table view delegate

- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath
{
    ResRecommendDetailVC *vc = [[ResRecommendDetailVC alloc] initWithNibName:@"ResRecommendDetailVC" bundle:nil];
    vc.resRecommendObj = [_arrData objectAtIndex:indexPath.row];
    vc.restaurantObj = _restaurantObj;
    [self.navigationController pushViewController:vc animated:YES];
    
    
}


@end
