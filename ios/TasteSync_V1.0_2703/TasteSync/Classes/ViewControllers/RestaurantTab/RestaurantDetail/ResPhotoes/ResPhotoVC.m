//
//  ResPhotoVC.m
//  TasteSync
//
//  Created by Victor on 1/10/13.
//  Copyright (c) 2013 Mobioneer. All rights reserved.
//

#import "ResPhotoVC.h"
#import "CommonHelpers.h"
#import "ResQuestionVC.h"
#import "PhotoVC.h"

@interface ResPhotoVC ()<UITableViewDataSource,UITableViewDelegate,ResPhotoCellDelegate>
{
    __weak IBOutlet UILabel *lbResName;
    __weak IBOutlet UILabel *lbResDetail;
    
}
- (IBAction)actionBack:(id)sender;
- (IBAction)actionShare:(id)sender;
- (IBAction)actionQuestion:(id)sender;

@end

@implementation ResPhotoVC

@synthesize arrData=_arrData,
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
    if (_arrData==nil) {
        self.arrData = [[NSMutableArray alloc] init ];
        for (int i=0; i<17; i++) {
            UIImage *image = [UIImage imageNamed:@"frame1.png"];
            [self.arrData addObject:image];
        }
    }
    
    [self configView];
    // Do any additional setup after loading the view from its nib.
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (void) configView
{
    if (_restaurantObj) {
        lbResName.text = _restaurantObj.name;
        lbResDetail.text = @"Chinese, New York, NY, 3.1mi";
    }
}

# pragma mark - IBAction's Define

- (IBAction)actionBack:(id)sender
{
    [self.navigationController popViewControllerAnimated:YES];
}

- (IBAction)actionShare:(id)sender
{
    [CommonHelpers showShareView:nil andObj:_restaurantObj];
}

- (IBAction)actionQuestion:(id)sender
{
    ResQuestionVC *vc = [[ResQuestionVC alloc] initWithNibName:@"ResQuestionVC" bundle:nil];
    vc.restaurantObj = _restaurantObj;
    [self.navigationController pushViewController:vc animated:YES];
}

# pragma mark - Table view data source

- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView
{
    
    return 1;
}

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section
{
    
    if ((_arrData.count %3)) {
        return _arrData.count/3;
    }
    else
        
    {
        return _arrData.count/3 +1;
    }
    
    return 0;
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    
    static NSString *CellIndentifier = @"resphoto_cell";
    
    ResPhotoCell *cell = (ResPhotoCell *)[tableView dequeueReusableCellWithIdentifier:CellIndentifier];
    
    if (cell==nil) {
        NSLog(@"cell is nil");
        cell =(ResPhotoCell *) [[[NSBundle mainBundle ] loadNibNamed:@"ResPhotoCell" owner:self options:nil] objectAtIndex:0];
        
        
    }
    
    
    UIImage *image1,*image2,*image3;
    
    if (_arrData.count>indexPath.row) {
        image1 = [_arrData objectAtIndex:indexPath.row];
    }
    if (_arrData.count>indexPath.row+1) {
        image2 = [_arrData objectAtIndex:indexPath.row+1];
    }
    if (_arrData.count>indexPath.row) {
        image3 = [_arrData objectAtIndex:indexPath.row+2];
    }
    
    [cell initForCell:image1 image2:image2 image3:image3];
    
    cell.delegate = self;
    
    return cell;
    
    
}

- (void) resPhotoCell:(ResPhotoCell *) resPhotoCell tag:(int) anTag
{
    
    PhotoVC *vc = [[PhotoVC alloc] initWithNibName:@"PhotoVC" bundle:nil];
    [self.navigationController pushViewController:vc animated:YES];
    
    switch (anTag) {
        case 1:
        {
            
        }
            break;
        case 2:
        {
            
        }
            break;
        case 3:
        {
            
        }
            break;
            
        default:
            break;
    }
}


@end
