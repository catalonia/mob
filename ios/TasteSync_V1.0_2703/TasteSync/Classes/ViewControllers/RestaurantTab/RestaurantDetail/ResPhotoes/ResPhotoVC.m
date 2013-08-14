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
#import "TSPhotoRestaurantObj.h"

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

-(id)initWithArrayPhoto:(NSMutableArray*)array RestaurantObj:(RestaurantObj*)restaurant
{
    self = [super initWithNibName:@"ResPhotoVC" bundle:nil];
    if (self) {
        self.restaurantObj = restaurant;
        self.arrData = array;
        NSLog(@"count1: %d", [array count]);
        NSLog(@"count2: %d", [self.arrData count]);
//        self.arrData = [[NSMutableArray alloc]init];
//        for (TSPhotoRestaurantObj* photo in array) {
//            if (photo.image != nil) {
//                [self.arrData addObject:photo];
//            }
//        }
    }
    return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];
    [CommonHelpers setBackgroudImageForViewRestaurant:self.view];
    
    
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
    
    if (_arrData.count %3 == 0) {
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
    
    
    TSPhotoRestaurantObj *photoImage1,*photoImage2,*photoImage3;
    
    if (_arrData.count > indexPath.row*3) {
        photoImage1 = [_arrData objectAtIndex:indexPath.row*3];
    }
    if (_arrData.count > indexPath.row*3+1) {
        photoImage2 = [_arrData objectAtIndex:indexPath.row*3+1];
    }
    if (_arrData.count > indexPath.row*3 + 2) {
        photoImage3 = [_arrData objectAtIndex:indexPath.row*3+2];
    }
    
    [cell initForCell:photoImage1 Index1:indexPath.row*3 image2:photoImage2 Index2:(indexPath.row*3+1) image3:photoImage3 Index3:(indexPath.row*3+2)];
    
    cell.delegate = self;
    
    return cell;
    
    
}

- (void) resPhotoCell:(ResPhotoCell *) resPhotoCell tag:(int) anTag
{
    
    PhotoVC *vc = [[PhotoVC alloc] initWithArrayPhotos:self.arrData AtIndex:anTag];
    [self.navigationController pushViewController:vc animated:YES];
}


@end
