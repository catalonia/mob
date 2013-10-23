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
    self.arrData = [[NSMutableArray alloc] init ];
    NSString* link = [NSString stringWithFormat:@"buzz?userid=%@&restaurantid=%@",[UserDefault userDefault].userID,_restaurantObj.uid];
    CRequest* request = [[CRequest alloc]initWithURL:link RQType:RequestTypeGet RQData:RequestDataRestaurant RQCategory:ApplicationForm withKey:1];
    request.delegate = self;
    [request startFormRequest];
    
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
        lbDetail.text = [CommonHelpers getInformationRestaurant:_restaurantObj];
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
//    ResRecommendDetailVC *vc = [[ResRecommendDetailVC alloc] initWithNibName:@"ResRecommendDetailVC" bundle:nil];
//    vc.resRecommendObj = [_arrData objectAtIndex:indexPath.row];
//    vc.restaurantObj = _restaurantObj;
//    [self.navigationController pushViewController:vc animated:YES];
    
    
}


-(void)responseData:(NSData *)data WithKey:(int)key UserData:(id)userData
{
    NSString* response = [[NSString alloc]initWithData:data encoding:NSUTF8StringEncoding];
    NSLog(@"response: %@",response);
    if (key == 1) {
        [self.arrData removeAllObjects];
        NSArray* array = [response objectFromJSONString];
        for (NSDictionary* dicResponse in array) {
            NSDictionary* dic = [dicResponse objectForKey:@"recommenderUser"];
            UserObj *user = [[UserObj alloc] init];
            user.name = [dic objectForKey:@"name"];
            user.avatarUrl = [dic objectForKey:@"photo"];
            user.uid = [dic objectForKey:@"userId"];
            ResRecommendObj *obj = [[ResRecommendObj alloc] init];
            obj.user = user;
            obj.numberOfLikes = 0;
            obj.title = [dicResponse objectForKey:@"recorequestText"];
            obj.detail = [dicResponse objectForKey:@"replyText"];
            [self.arrData addObject:obj];
        }
    }
    
}

@end
