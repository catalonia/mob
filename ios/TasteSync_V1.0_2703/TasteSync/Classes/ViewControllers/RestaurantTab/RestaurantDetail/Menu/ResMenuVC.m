//
//  ResMenuVC.m
//  TasteSync
//
//  Created by Victor on 1/10/13.
//  Copyright (c) 2013 Mobioneer. All rights reserved.
//

#import "ResMenuVC.h"
#import "CommonHelpers.h"
#import "ResQuestionVC.h"
#import "ResMenuCell.h"
#import "MenuObj.h"

@interface ResMenuVC ()<UITableViewDataSource,UITableViewDelegate>
{
    __weak IBOutlet UILabel *lbResName,*lbResDetail;
    __weak IBOutlet UIView *viewRes;
    __weak IBOutlet UITableView *tbvmenu;
}

- (IBAction)actionBack:(id)sender;
- (IBAction)actionShare:(id)sender;
- (IBAction)actionQuestion:(id)sender;


@end

@implementation ResMenuVC

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
    tbvmenu.separatorStyle = UITableViewCellSelectionStyleNone ;

    
    if (_arrData==nil) {
        self.arrData = [[NSMutableArray alloc] init ];
        for (int i=0; i<4;i++) {
            MenuObj *menuObj = [[MenuObj alloc] init];
            if (i==0) {
                menuObj.kind = @"Appetizers";
            }
            else  if  (i==1) {
                menuObj.kind = @"Noodles";
            }else
            {
                menuObj.kind = @"Drinks";
            }
            
            NSMutableArray *arrFood = [[NSMutableArray alloc] init];
            
            for (int j=0; j<6; j++) {
                FoodObj *foodObj = [[FoodObj alloc] init];
                foodObj.name = @"Chicken Hakla";
                foodObj.price = j;
                [arrFood addObject:foodObj];
            }
            menuObj.foodArr = arrFood;
            
            [self.arrData addObject:menuObj];
        }
    }
    // Do any additional setup after loading the view from its nib.
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
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
    
    return _arrData.count;
}



- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section
{
    MenuObj *obj = [_arrData objectAtIndex:section];
    
    if (obj.foodArr) {
        return obj.foodArr.count;
    }
   
    
    return 0;
}

- (NSString *)tableView:(UITableView *)tableView titleForHeaderInSection:(NSInteger)section
{
    MenuObj *obj = [_arrData objectAtIndex:section];
    return obj.kind;
}

- (CGFloat)tableView:(UITableView *)tableView heightForHeaderInSection:(NSInteger)section
{
    return 40;
}
- (UIView *)tableView:(UITableView *)tableView viewForHeaderInSection:(NSInteger)section
{
    NSString *sectionTitle = [self tableView:tableView titleForHeaderInSection:section];
    if (sectionTitle == nil) {
        return nil;
    }
    
    // Create label with section title
    UILabel *label = [[UILabel alloc] init] ;
    label.frame = CGRectMake(20, 6, 300, 30);
    label.backgroundColor = [UIColor clearColor];
//    label.textColor = [UIColor colorWithHue:(136.0/360.0)  // Slightly bluish green
//                                 saturation:1.0
//                                 brightness:0.60
//                                      alpha:1.0];
    label.textColor = [UIColor whiteColor];
    label.shadowColor = [UIColor whiteColor];
    label.shadowOffset = CGSizeMake(0.0, 1.0);
    label.font = [UIFont boldSystemFontOfSize:13];
    label.text = sectionTitle;
    
    // Create header view and add label as a subview
    UIView *view = [[UIView alloc] initWithFrame:CGRectMake(0, 0, 320, 30)];
    [view addSubview:label];
    
    return view;
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    
    static NSString *CellIndentifier = @"resmenu_cell";
    
    ResMenuCell *cell = (ResMenuCell *)[tableView dequeueReusableCellWithIdentifier:CellIndentifier];
    
    if (cell==nil) {
        NSLog(@"cell is nil");
        cell =(ResMenuCell *) [[[NSBundle mainBundle ] loadNibNamed:@"ResMenuCell" owner:self options:nil] objectAtIndex:0];
        
        
    }
    
    MenuObj *menuObj = [_arrData objectAtIndex:indexPath.section];    
    
    [cell initForCell:[menuObj.foodArr objectAtIndex:indexPath.row]];
    
    return cell;
    
    
}


@end
