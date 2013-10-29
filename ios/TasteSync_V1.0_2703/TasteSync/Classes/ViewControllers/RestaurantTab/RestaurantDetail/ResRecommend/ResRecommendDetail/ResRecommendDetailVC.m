//
//  ResRecommendDetailVC.m
//  TasteSync
//
//  Created by Victor on 1/4/13.
//  Copyright (c) 2013 Mobioneer. All rights reserved.
//

#import "ResRecommendDetailVC.h"
#import "FriendFilterCell.h"
#import "CommonHelpers.h"
#import "ResQuestionVC.h"

@interface ResRecommendDetailVC ()
{
    __weak IBOutlet UILabel *lbName,*lbDetail;
    __weak IBOutlet UILabel *lbTitle, *lbLikes;
    __weak IBOutlet UITextView *tvDetail;
    __weak IBOutlet UITableView *tbvUser;
    __weak IBOutlet UIButton *btFollow,*btLike;
    
}

- (IBAction)actionBack:(id)sender;
- (IBAction)actionShare:(id)sender;
- (IBAction)actionLike:(id)sender;
- (IBAction)actionFollow:(id)sender;
- (IBAction)actionQuestion:(id)sender;
- (IBAction)actionAvatar:(id)sender;

@end

@implementation ResRecommendDetailVC

@synthesize arrData=_arrData,
resRecommendObj =_resRecommendObj,
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
    [self configView];
    self.arrData = [[NSMutableArray alloc] init ];
    for (int i=0; i<10; i++) {
        UserObj *user = [[UserObj alloc] init];
        user.avatar = [UIImage imageNamed:@"avatar.png"];
        user.firstname = @"Victor" ;
        user.lastname = @"NGO";
        
        [self.arrData addObject:user];
    }
}

- (void) viewWillAppear:(BOOL)animated
{
    [super viewWillAppear:animated];
    self.navigationController.navigationBarHidden = YES;
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

# pragma mark - IBAction's define


- (IBAction)actionBack:(id)sender
{
    [self.navigationController popViewControllerAnimated:YES];
}

- (IBAction)actionShare:(id)sender
{
//    [CommonHelpers showShareView:nil andObj:_restaurantObj];
}
- (IBAction)actionLike:(id)sender
{
    if ([UserDefault userDefault].loginStatus == NotLogin) {
        [[CommonHelpers appDelegate] showLoginDialog];
    }
    else
    {
        if (_resRecommendObj.isLike) {
            _resRecommendObj.isLike = NO;
            [CommonHelpers setBackgroundImage:[UIImage imageNamed:@"ic_like.png"] forButton:btLike];
            _resRecommendObj.numberOfLikes --;
        }
        else
        {
            _resRecommendObj.isLike = YES;
            [CommonHelpers setBackgroundImage:[UIImage imageNamed:@"ic_like_on.png"] forButton:btLike];
            _resRecommendObj.numberOfLikes ++;
        }
        
        if (_resRecommendObj.numberOfLikes == 0) {
            lbLikes.hidden = YES;
        }
        else if (_resRecommendObj.numberOfLikes ==1)
        {
            lbLikes.hidden = NO;
            lbLikes.text = [NSString stringWithFormat:@"%d Like",_resRecommendObj.numberOfLikes];
            
        }
        else
        {
            lbLikes.hidden = NO;
            lbLikes.text = [NSString stringWithFormat:@"%d Likes",_resRecommendObj.numberOfLikes];
        }


    }
       
}
- (IBAction)actionFollow:(id)sender
{
    if ([UserDefault userDefault].loginStatus == NotLogin) {
        [[CommonHelpers appDelegate] showLoginDialog];
    }
    else
    {
        btFollow.hidden = YES;

    }
}
- (IBAction)actionQuestion:(id)sender
{
    ResQuestionVC *vc = [[ResQuestionVC alloc] initWithNibName:@"ResQuestionVC" bundle:nil];
    vc.restaurantObj = _restaurantObj;
    [self.navigationController pushViewController:vc animated:YES];
}

- (IBAction)actionAvatar:(id)sender
{
    [[[CommonHelpers appDelegate] tabbarBaseVC] actionProfile:_resRecommendObj.user];
}

# pragma mark - others

- (void) configView
{
    if (_restaurantObj) {
        lbName.text = _restaurantObj.name;
        lbDetail.text = @"Chinese, $$";
        lbLikes.text = [NSString stringWithFormat:@"%d people like this.",_resRecommendObj.numberOfLikes];
        lbTitle.text = _resRecommendObj.title;
        tvDetail.text = _resRecommendObj.detail;
    
    }
    
}

#pragma mark - Table view data source

- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView
{
    
    return 1;
}

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section
{
    
    if (_arrData) {
        return _arrData.count;
    }
    return 0;
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    static NSString *CellIndentifier = @"friend_filter_cell";
    
    FriendFilterCell *cell = (FriendFilterCell *)[tableView dequeueReusableCellWithIdentifier:CellIndentifier];
    
    if (cell==nil) {
        NSLog(@"cell is nil");
        cell =(FriendFilterCell *) [[[NSBundle mainBundle ] loadNibNamed:@"FriendFilterCell" owner:self options:nil] objectAtIndex:0];
        
        
    }
    
    [cell initForCell:[_arrData objectAtIndex:indexPath.row]];
    
    return cell;
}

@end
