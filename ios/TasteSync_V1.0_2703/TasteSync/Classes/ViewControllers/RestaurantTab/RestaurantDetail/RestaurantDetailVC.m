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
#import "TSPhotoRestaurantObj.h"
#import "PhotoVC.h"

@interface RestaurantDetailVC ()<UIScrollViewDelegate,ResShareViewDelegate,UIAlertViewDelegate>
{
    __weak IBOutlet UIScrollView *scrollViewPhotos,*scrollViewMain;
    __weak IBOutlet UIView *view1,*view2,*view3,*view4,*viewImage, *viewDeal;
    __weak IBOutlet UILabel *lbName,*lbDetail,*lbsortMSg,*lbLongMsg;    
    __weak IBOutlet UIButton *btSave,*btUserQuestion,*btMore, *btMenu, *btMoreInfo,*btReviews,*btReserve,*btAddToMyFavorites , *btBack, *btRestaurant;
    
    __weak IBOutlet UIImageView* _avatarImageView;
    UserObj* _userBuzz;
    __weak IBOutlet UILabel* lbOpenNow, *lbDeal;
    BOOL isSaved, restaurantChains, isAddToMyFaves;
    RateCustom *rateCustom;    
    ResShareView *shareView ;    
    ResRecommendObj *resRecommendObj ;
    UITextView *tvNote ;
    
    NSMutableArray* _arrayPhoto;
    CGFloat _locationImage;
    NSString* _urlImage;
    int _tagImage;
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

@synthesize restaurantObj = _restaurantObj;

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        // Custom initialization
    }
    return self;
}

- (id)initWithRestaurantObj:(RestaurantObj *)restaurantObj
{
    self = [super initWithNibName:@"RestaurantDetailVC" bundle:nil];
    if (self) {
        self.restaurantObj = restaurantObj;
        _arrayPhoto = [[NSMutableArray alloc]init];
    }
    return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];
    
    
    lbDetail.text = [CommonHelpers getInformationRestaurant:self.restaurantObj];
    
    // Do any additional setup after loading the view from its nib.
    [CommonHelpers setBackgroudImageForViewRestaurant:self.view];
    NSString* link = [NSString stringWithFormat:@"details?userid=%@&restaurantid=%@",[UserDefault userDefault].userID, self.restaurantObj.uid];
    CRequest* request = [[CRequest alloc]initWithURL:link RQType:RequestTypeGet RQData:RequestDataRestaurant RQCategory:ApplicationForm withKey:1];
    request.delegate = self;
    [request startFormRequest];
    
}

- (void) viewWillAppear:(BOOL)animated
{
    [super viewWillAppear:animated];
    
    self.navigationController.navigationBarHidden = YES;
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
            NSString* saveFlag = @"";
            if (!_restaurantObj.isSaved)
                saveFlag = @"1";
            else
                saveFlag = @"0";
            CRequest* request = [[CRequest alloc]initWithURL:@"save" RQType:RequestTypePost RQData:RequestDataRestaurant RQCategory:ApplicationForm withKey:3];
            request.delegate = self;
            [request setFormPostValue:[UserDefault userDefault].userID forKey:@"userid"];
            [request setFormPostValue:_restaurantObj.uid forKey:@"restaurantid"];
            [request setFormPostValue:saveFlag forKey:@"userrestaurantsavedflag"];
            [request startFormRequest];
           

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
        ResMenuVC *vc = [[ResMenuVC alloc] initWithRestaurantObj:_restaurantObj];
        [self.navigationController pushViewController:vc animated:YES];
}

- (IBAction)actionMoreInfo:(id)sender
{
    debug(@"actionMoreInfo");
    ResMoreInfoVC *vc = [[ResMoreInfoVC alloc] initWithRestaurantObj:self.restaurantObj];
    [self.navigationController pushViewController:vc animated:YES];

}


- (IBAction)actionQuestion:(id)sender
{
    ResQuestionVC *vc = [[ResQuestionVC alloc] initWithRestaurantObj:self.restaurantObj];
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
        
        NSString* saveFavFlag = @"";
        if (!_restaurantObj.isFavs)
            saveFavFlag = @"1";
        else
            saveFavFlag = @"0";
        CRequest* request = [[CRequest alloc]initWithURL:@"savefavs" RQType:RequestTypePost RQData:RequestDataRestaurant RQCategory:ApplicationForm withKey:4];
        request.delegate = self;
        [request setFormPostValue:[UserDefault userDefault].userID forKey:@"userid"];
        [request setFormPostValue:_restaurantObj.uid forKey:@"restaurantid"];
        [request setFormPostValue:saveFavFlag forKey:@"userrestaurantfavflag"];
        [request startFormRequest];
        
    }
    else
    {
        [[CommonHelpers appDelegate] showLoginDialog];

    }
    
}

- (IBAction)actionLeaveATip:(id)sender
{
    LeaveATipVC *vc = [[LeaveATipVC alloc] initWithRestaurantObj:_restaurantObj];
    [self.navigationController pushViewController:vc animated:YES];
    
}

- (IBAction)actionMorePhoto:(id)sender
{
    ResPhotoVC* restPhoto = [[ResPhotoVC alloc]initWithArrayPhoto:_restaurantObj];
    [self.navigationController pushViewController:restPhoto animated:YES];
}

# pragma mark - others

- (void) configView
{
    [scrollViewMain setContentSize:CGSizeMake(320, 580)];
    if (_restaurantObj.isSaved) {
        [CommonHelpers setBackgroundImage:[UIImage imageNamed:@"ic_saved_on.png"] forButton:btSave];
        
    }else
    {
        [CommonHelpers setBackgroundImage:[UIImage imageNamed:@"ic_saved.png"] forButton:btSave];
        
    }
    
    if (_restaurantObj.isFavs) {
        [CommonHelpers setBackgroundImage:[UIImage imageNamed:@"ic_bt_addedtomyfaves.png"] forButton:btAddToMyFavorites];
    }
    else
    {
        [CommonHelpers setBackgroundImage:[UIImage imageNamed:@"ic_bt_addtomyfaves.png"] forButton:btAddToMyFavorites];
    }
    
    lbDeal.text = self.restaurantObj.deal;
    
    if (!self.restaurantObj.isMenuFlag) {
        btMenu.hidden = YES;
    }
    
    if (!self.restaurantObj.isMoreInfo) {
        btMoreInfo.hidden = YES;
    }
    
    resRecommendObj = [[ResRecommendObj alloc] init];
    resRecommendObj.title = @"Victor recommends for ";
    resRecommendObj.detail = @"Victor wrote : it's really bored ...";
    UserObj *user = [[UserObj alloc] init];
    user.avatar = [UIImage imageNamed:@"avatar.png"];
    user.firstname = @"Victor";
    user.lastname = @"NGO";
    resRecommendObj.user = user;
//    [self setupHorizontalScrollView];
    if (_restaurantObj) {
        lbName.text = self.restaurantObj.name;
    }
}
- (void)setupHorizontalScrollView
{
    scrollViewPhotos.delegate = self;
    [scrollViewPhotos setContentSize:CGSizeMake(90*[_arrayPhoto count], [scrollViewPhotos bounds].size.height)];
   // [scrollViewPhotos setCanCancelContentTouches:NO];
    
    scrollViewPhotos.indicatorStyle = UIScrollViewIndicatorStyleWhite;
    scrollViewPhotos.clipsToBounds = YES;
    scrollViewPhotos.scrollEnabled = YES;
    scrollViewPhotos.pagingEnabled = YES;
    
    NSInteger tot=0;
    CGFloat cx = 15;
    //for (; ; nimages++)
    for (TSPhotoRestaurantObj* photoObj in _arrayPhoto)
    {
       _urlImage = [NSString stringWithFormat:@"%@%dx%d%@", photoObj.prefix, photoObj.width, photoObj.height, photoObj.suffix];
        _locationImage = cx;
        _tagImage = [_arrayPhoto count] + tot ;
        [NSThread detachNewThreadSelector:@selector(loadImage) toTarget:self withObject:nil];
        
        CGRect rect;
        rect.size.height = 60;
        rect.size.width = 60;
        rect.origin.x = cx;
        rect.origin.y = 0;
        
        UIButton *btn = [[UIButton alloc] init];
        
        UIImage* image = [UIImage imageNamed:@"frame1.png"];
        
        btn.frame = rect;
        btn.tag = tot;
        [btn setBackgroundImage:image forState:UIControlStateNormal];
        [btn setBackgroundImage:image forState:UIControlStateHighlighted];
        [btn addTarget:self action:@selector(showPhotoDetail:) forControlEvents:UIControlEventTouchUpInside];
        [scrollViewPhotos addSubview:btn];
        
        UIActivityIndicatorView *activityView=[[UIActivityIndicatorView alloc] initWithActivityIndicatorStyle:UIActivityIndicatorViewStyleWhiteLarge];
        activityView.frame = rect;
        activityView.tag = [_arrayPhoto count] + tot;
        [activityView startAnimating];
        [scrollViewPhotos addSubview:activityView];
        
        cx += rect.size.width+30;
        tot++;
    }
   
//    [scrollViewPhotos setFrame:CGRectMake(30, 340, 260, 90)];
    
    
    debug(@"scrollview x-> %f, y-> %f, width-> %f, height-> %f",scrollViewPhotos.frame.origin.x,scrollViewPhotos.frame.origin.y,scrollViewPhotos.frame.size.width,scrollViewPhotos.frame.size.height) ;
}

- (void) showPhotoDetail:(id) params
{
    debug(@"showPhotoDetail");
    UIButton* button = (UIButton*)params;
    NSLog(@"TAG: %d",button.tag);
    int data;
    
    NSMutableArray* array = [[NSMutableArray alloc]init];
    for (int i = 0; i < [_arrayPhoto count]; i++) {
        TSPhotoRestaurantObj* obj = [_arrayPhoto objectAtIndex:i];
        if (obj.image != nil) {
            if (i == button.tag) {
                data = [array count];
            }
            [array addObject:obj];
        }
        
        
    }
    
    PhotoVC* photo = [[PhotoVC alloc]initWithArrayPhotos:array AtIndex:button.tag];
    [self.navigationController pushViewController:photo animated:YES];
    
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
-(void)responseData:(NSData *)data WithKey:(int)key UserData:(id)userData
{
    NSString* response = [[NSString alloc]initWithData:data encoding:NSUTF8StringEncoding];
    NSLog(@"%@",response);
    if (key == 1) {
        NSDictionary* dicResponse = [response objectFromJSONString];
        NSString* str = [dicResponse objectForKey:@"openNowFlag"];
        if (![str isKindOfClass:([NSNull class])]) {
            self.restaurantObj.isOpenNow                =  [[dicResponse objectForKey:@"openNowFlag"] isEqualToString:@"1"]?YES:NO;
            if (_restaurantObj.isOpenNow)
                lbOpenNow.text = @"Open Now";
            else
                lbOpenNow.text = @"Closed Now";
        }
        else
        {
            lbOpenNow.text = @"";
        }
        self.restaurantObj.deal                            =  [dicResponse objectForKey:@"dealHeadline"];
        if ([self.restaurantObj.deal isEqualToString:@""]) 
            self.restaurantObj.isDeal = NO;
        else
            self.restaurantObj.isDeal = YES;
        
        self.restaurantObj.isMoreInfo                  =  [[dicResponse objectForKey:@"moreInfoFlag"]  isEqualToString:@"1"]?YES:NO;
        self.restaurantObj.isMenuFlag                =  [[dicResponse objectForKey:@"menuFlag"] isEqualToString:@"1"]?YES:NO;
        self.restaurantObj.isSaved                      =  [[dicResponse objectForKey:@"userRestaurantSavedFlag"] isEqualToString:@"1"]?YES:NO;
        self.restaurantObj.isFavs                         =  [[dicResponse objectForKey:@"userRestaurantFavFlag"]  isEqualToString:@"1"]?YES:NO;
        self.restaurantObj.isTipFlag                     =  [[dicResponse objectForKey:@"userRestaurantTipFlag"]  isEqualToString:@"1"]?YES:NO;
        [self configView];
        
        NSArray* dicPhoto = [dicResponse objectForKey:@"photoList"];
        
        if (dicPhoto.count > 0) {
            for (NSDictionary* dic in dicPhoto) {
                TSPhotoRestaurantObj* obj = [[TSPhotoRestaurantObj alloc]init];
                obj.uid                              = [dic objectForKey:@"restaurantId"];
                obj.photoId                       = [dic objectForKey:@"photoId"];
                obj.prefix                          = [dic objectForKey:@"prefix"];
                obj.suffix                           = [dic objectForKey:@"suffix"];
                obj.width                           = [[dic objectForKey:@"width"] intValue];
                obj.height                          = [[dic objectForKey:@"height"] intValue];
                obj.ultimateSourceName = [dic objectForKey:@"ultimateSourceName"];
                obj.ultimateSourceUrl      = [dic objectForKey:@"ultimateSourceUrl"];
                obj.photoSource               =  [dic objectForKey:@"photoSource"];
                [_arrayPhoto addObject:obj];
            }
        }
        else
        {
            btMenu.frame = CGRectMake(btMenu.frame.origin.x, 55, btMenu.frame.size.width, btMenu.frame.size.height);
            btMoreInfo.frame = CGRectMake(btMoreInfo.frame.origin.x, 55, btMoreInfo.frame.size.width, btMoreInfo.frame.size.height);
            viewImage.hidden = YES;
        }
        
        NSDictionary* dic = [dicResponse objectForKey:@"restaurantBuzz"];
        if (![dic  isKindOfClass:[NSNull class]]) {
            _userBuzz = [[UserObj alloc]init];
            lbLongMsg.text = [dic objectForKey:@"replyText"];
            NSDictionary* dicUser = [dic objectForKey:@"recommenderUser"];
            lbsortMSg.text = [NSString stringWithFormat:@"%@ recommends for you",[dicUser objectForKey:@"name"]];
            _userBuzz.avatarUrl = [dicUser objectForKey:@"photo"];
            _userBuzz.uid = [dicUser objectForKey:@"userId"];
            [NSThread detachNewThreadSelector:@selector(loadImageUserObj) toTarget:self withObject:nil];
        }
        else
        {
            view4.frame = CGRectMake(view4.frame.origin.x, view4.frame.origin.y - 102, view4.frame.size.width, view4.frame.size.height);
            viewImage.frame = CGRectMake(viewImage.frame.origin.x, viewImage.frame.origin.y - 102, viewImage.frame.size.width, viewImage.frame.size.height);
            view2.hidden = YES;
        }
        
        if (self.restaurantObj.isDeal) {
            lbDeal.text = self.restaurantObj.deal;
        }
        else
        {
            view4.frame = CGRectMake(view4.frame.origin.x, view4.frame.origin.y - 43, view4.frame.size.width, view4.frame.size.height);
            viewImage.frame = CGRectMake(viewImage.frame.origin.x, viewImage.frame.origin.y - 43, viewImage.frame.size.width, viewImage.frame.size.height);
            view2.frame = CGRectMake(view2.frame.origin.x, view2.frame.origin.y - 43, view2.frame.size.width, view2.frame.size.height);
            viewDeal.hidden = YES;
        }
        
        
        [self setupHorizontalScrollView];
    }
    if (key == 3) {
        if (!_restaurantObj.isSaved) {
            
            [CommonHelpers setBackgroundImage:[UIImage imageNamed:@"ic_saved_on.png"] forButton:btSave];
            _restaurantObj.isSaved = YES;
            
            
        }
        else
        {
            [CommonHelpers setBackgroundImage:[UIImage imageNamed:@"ic_saved.png"] forButton:btSave];
            _restaurantObj.isSaved = NO;
        }
    }
    if (key == 4) {
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
}

-(void)loadImage
{
    int tag = _tagImage;
    CGRect rect = CGRectMake(_locationImage, 0, 60, 60);
    UIImage *image = [[UIImage alloc] initWithData:[NSData dataWithContentsOfURL:[NSURL URLWithString:_urlImage]]];
    UIImageView *imageView = [[UIImageView alloc] initWithImage:image];
    imageView.frame = rect;
    [scrollViewPhotos addSubview:imageView];
    for (UIView* view in scrollViewPhotos.subviews) {
        if (view.tag == tag) {
            UIActivityIndicatorView* activity= ( UIActivityIndicatorView*)view;
            [activity stopAnimating];
            [activity removeFromSuperview];
        }
    }
    
    TSPhotoRestaurantObj* obj = [_arrayPhoto objectAtIndex:tag - [_arrayPhoto count]];
    obj.image = image;
}

-(void)loadImageUserObj
{
    UIImage *image = [[UIImage alloc] initWithData:[NSData dataWithContentsOfURL:[NSURL URLWithString:_userBuzz.avatarUrl]]];
    _userBuzz.avatar = image;
    _avatarImageView.image = image;
}

@end
