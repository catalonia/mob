//
//  RestaurantDetailVC.m
//  TasteSync
//
//  Created by Victor on 12/28/12.
//  Copyright (c) 2012 Mobioneer. All rights reserved.
//

#import "RestaurantDetailVC.h"
#import "CommonHelpers.h"
#import "ResRecommendVC.h"
#import "ResQuestionVC.h"
#import "ResShareView.h"
#import "ResMoreInfoVC.h"
#import "ResPhotoVC.h"
#import "ResMenuVC.h"
#import "ResReserveVC.h"
#import "RateCustom.h"
#import "ResDealVC.h"
#import "LeaveATipVC.h"

@interface RestaurantDetailVC ()<UIScrollViewDelegate,ResShareViewDelegate,UIAlertViewDelegate>
{
    __weak IBOutlet UIScrollView *scrollViewPhotos,*scrollViewMain;
    __weak IBOutlet UIView *view1,*view2,*view3,*view4;
    __weak IBOutlet UILabel *lbName,*lbDetail,*lbsortMSg,*lbLongMsg;    
    __weak IBOutlet UIButton *btSave,*btUserQuestion,*btMore, *btMenu, *btMoreInfo,*btReviews,*btReserve,*btAddToMyFavorites , *btBack, *btRestaurant;
    BOOL isSaved, restaurantChains, isAddToMyFaves;
    RateCustom *rateCustom;    
    ResShareView *shareView ;    
    ResRecommendObj *resRecommendObj ;
    UITextView *tvNote ;
    
    
    CGFloat *offset;
}

- (IBAction)actionQuestion:(id)sender;

- (IBAction)actionRestaurant:(id)sender;

- (IBAction)actionShare:(id)sender;

- (IBAction)actionSave:(id)sender;

- (IBAction)actionMore:(id)sender;

- (IBAction)actionMenu:(id)sender ;

- (IBAction)actionMoreInfo:(id)sender;

- (IBAction)actionAvatar:(id)sender;

- (IBAction)actionDeal:(id)sender;

- (IBAction)actionAddToMyFavorites:(id)sender;

- (IBAction)actionLeaveATip:(id)sender;

- (IBAction)actionMorePhoto:(id)sender;




@end

@implementation RestaurantDetailVC

@synthesize restaurantObj=_restaurantObj;

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
    [CommonHelpers setBackgroudImageForViewRestaurant:self.view];
    
   
    [self configView];
}

- (void) viewWillAppear:(BOOL)animated
{
    [super viewWillAppear:animated];
    self.navigationController.navigationBarHidden = YES;
    if (_restaurantObj.isSaved) {
        [CommonHelpers setBackgroundImage:[UIImage imageNamed:@"ic_saved_on.png"] forButton:btSave];

    }else
    {
        [CommonHelpers setBackgroundImage:[UIImage imageNamed:@"ic_saved.png"] forButton:btSave];

    }
    if (self.selectedIndex != 2) {
        btBack.hidden = NO;
        btRestaurant.hidden = YES;
    }
    else
    {
        btBack.hidden = YES;
        btRestaurant.hidden = NO;
    }
}

- (void)viewDidAppear:(BOOL)animated
{
    [super viewDidAppear:animated];
    
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

# pragma mark - IBAction Define

- (IBAction) actionBackToSelectedIndex:(id)sender
{
    [self.navigationController popViewControllerAnimated:NO];
    [[[CommonHelpers appDelegate] tabbarBaseVC] actionBackToSelectedIndex:self.selectedIndex];
}
- (IBAction)actionRestaurant:(id)sender
{
    [self.navigationController popViewControllerAnimated:YES];
}



- (IBAction)actionShare:(id)sender
{
    debug(@"actionShare");
    [CommonHelpers showShareView:self andObj:_restaurantObj];
}

- (IBAction)actionSave:(id)sender
{
    debug(@"actionSave");
    
  
        if ([UserDefault userDefault].loginStatus == NotLogin) {
            [[CommonHelpers appDelegate] showLoginDialog];
        }
        else
        {
            if (!_restaurantObj.isSaved) {
                
                [CommonHelpers setBackgroundImage:[UIImage imageNamed:@"ic_saved_on.png"] forButton:btSave];
                _restaurantObj.isSaved = YES;
                
                
            }
            else
            {
                [CommonHelpers setBackgroundImage:[UIImage imageNamed:@"ic_saved.png"] forButton:btSave];
                _restaurantObj.isSaved = NO;            }

        }

    

}

- (IBAction)actionMore:(id)sender
{
    debug(@"actionMore");
    ResRecommendVC *vc = [[ResRecommendVC alloc] initWithNibName:@"ResRecommendVC" bundle:nil];
    vc.resRecommendObj = resRecommendObj;
    vc.restaurantObj = _restaurantObj;
    [self.navigationController pushViewController:vc animated:YES];

}



- (IBAction)actionMenu:(id)sender
{
    debug(@"actionMenu");
    ResMenuVC *vc = [[ResMenuVC alloc] initWithNibName:@"ResMenuVC" bundle:nil];
    vc.restaurantObj = _restaurantObj;
    [self.navigationController pushViewController:vc animated:YES];

}

- (IBAction)actionMoreInfo:(id)sender
{
    debug(@"actionMoreInfo");
    ResMoreInfoVC *vc = [[ResMoreInfoVC alloc] initWithNibName:@"ResMoreInfoVC" bundle:nil];
    vc.restaurantObj = _restaurantObj;
    [self.navigationController pushViewController:vc animated:YES];

}


- (IBAction)actionQuestion:(id)sender
{
    ResQuestionVC *vc = [[ResQuestionVC alloc] initWithNibName:@"ResQuestionVC" bundle:nil];
    [self.navigationController pushViewController:vc animated:YES];
}

- (IBAction)actionDeal:(id)sender
{
    ResDealVC *vc = [[ResDealVC alloc] initWithNibName:@"ResDealVC" bundle:nil];
    vc.restaurantObj = _restaurantObj;
    [self.navigationController pushViewController:vc animated:YES];
}



- (IBAction)actionAvatar:(id)sender
{

    [[[CommonHelpers appDelegate] tabbarBaseVC] actionProfile:resRecommendObj.user];
    
}

- (IBAction)actionAddToMyFavorites:(id)sender
{
    if ([UserDefault userDefault].loginStatus != NotLogin) {
        if (!_restaurantObj.isFavs) {
            _restaurantObj.isFavs = TRUE;
            [CommonHelpers setBackgroundImage:[UIImage imageNamed:@"ic_bt_addedtomyfaves.png"] forButton:btAddToMyFavorites];
        }
        else
        {
            _restaurantObj.isFavs = FALSE;
            [CommonHelpers setBackgroundImage:[UIImage imageNamed:@"ic_bt_addtomyfaves.png"] forButton:btAddToMyFavorites];
        }
    }
    else
    {
        [[CommonHelpers appDelegate] showLoginDialog];

    }
    
}

- (IBAction)actionLeaveATip:(id)sender
{
    LeaveATipVC *vc = [[LeaveATipVC alloc] initWithNibName:@"LeaveATipVC" bundle:nil];
    vc.restaurantObj = _restaurantObj;
    [self.navigationController pushViewController:vc animated:YES];
    
}

- (IBAction)actionMorePhoto:(id)sender
{
    [self showPhotoDetail:nil];
}

# pragma mark - others

- (void) configView
{
    [scrollViewMain setContentSize:CGSizeMake(320, 580)];
    
    resRecommendObj = [[ResRecommendObj alloc] init];
    resRecommendObj.title = @"Victor recommends for ";
    resRecommendObj.detail = @"Victor wrote : it's really bored ...";
    UserObj *user = [[UserObj alloc] init];
    user.avatar = [UIImage imageNamed:@"avatar.png"];
    user.firstname = @"Victor";
    user.lastname = @"NGO";
    resRecommendObj.user = user;
    [self setupHorizontalScrollView];
    if (_restaurantObj) {
        lbName.text = _restaurantObj.name;
        lbDetail.text = @"Chinese, $$, New York, 3.1mi";
       
    }
}
- (void)setupHorizontalScrollView
{
    scrollViewPhotos.delegate = self;
    
    [scrollViewPhotos setCanCancelContentTouches:NO];
    
    scrollViewPhotos.indicatorStyle = UIScrollViewIndicatorStyleWhite;
    scrollViewPhotos.clipsToBounds = NO;
    scrollViewPhotos.scrollEnabled = NO;
    scrollViewPhotos.pagingEnabled = YES;
    
    NSUInteger nimages = 0;
    NSInteger tot=0;
    CGFloat cx = 0;
    for (; ; nimages++) {
        NSString *imageName = [NSString stringWithFormat:@"frame1.png"];
        UIImage *image = [UIImage imageNamed:imageName];
        if (tot==3) {
            break;
        }
        if (4==nimages) {
            nimages=0;
        }
        
        UIImageView *imageView = [[UIImageView alloc] initWithImage:image];
        UIButton *btn = [[UIButton alloc] init];
        
        CGRect rect = imageView.frame;
        rect.size.height = 60;
        rect.size.width = 60;
        rect.origin.x = cx;
        rect.origin.y = 0;
        
        imageView.frame = rect;
        btn.frame = rect;
        [btn addTarget:self action:@selector(showPhotoDetail:) forControlEvents:UIControlEventTouchUpInside];
        [scrollViewPhotos addSubview:btn];
        [scrollViewPhotos addSubview:imageView];
        
        cx += imageView.frame.size.width+30;
        tot++;
    }
   
//    [scrollViewPhotos setFrame:CGRectMake(30, 340, 260, 90)];
    
//    [scrollViewPhotos setContentSize:CGSizeMake(260, [scrollViewPhotos bounds].size.height)];
    
    debug(@"scrollview x-> %f, y-> %f, width-> %f, height-> %f",scrollViewPhotos.frame.origin.x,scrollViewPhotos.frame.origin.y,scrollViewPhotos.frame.size.width,scrollViewPhotos.frame.size.height) ;
}

- (void) showPhotoDetail:(id) params
{
    debug(@"showPhotoDetail");
    ResPhotoVC *vc = [[ResPhotoVC alloc] initWithNibName:@"ResPhotoVC" bundle:nil];
    vc.restaurantObj = _restaurantObj;
    [self.navigationController pushViewController:vc animated:YES];
    
}

- (void)alertView:(UIAlertView *)alertView clickedButtonAtIndex:(NSInteger)buttonIndex
{
    debug(@"alertView -> clickedButtonAtIndex");
    switch (buttonIndex) {
        case 0:
            debug(@"cancel");
            break;
            
            case 1:
            debug(@"save with note -> %@",tvNote.text);
            [CommonHelpers setBackgroundImage:[UIImage imageNamed:@"ic_bt_saverestaurants.png"] forButton:btSave];
            _restaurantObj.isSaved = YES;
            
            break;
        default:
            break;
    }
}

@end
