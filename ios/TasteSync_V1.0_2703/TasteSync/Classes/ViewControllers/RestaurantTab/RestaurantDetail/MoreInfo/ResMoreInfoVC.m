//
//  ResMoreInfoVC.m
//  TasteSync
//
//  Created by Victor on 1/5/13.
//  Copyright (c) 2013 Mobioneer. All rights reserved.
//

#import "ResMoreInfoVC.h"
#import "CommonHelpers.h"
#import "ResQuestionVC.h"

@interface ResMoreInfoVC ()<MKMapViewDelegate>
{
    __weak IBOutlet MKMapView *mapView;
    __weak IBOutlet UILabel* lbName;
    __weak IBOutlet UILabel* _phone;
    __weak IBOutlet UILabel* _address;
    __weak IBOutlet UILabel* _website;
    __weak IBOutlet UILabel* _lblTitle;
    __weak IBOutlet UIButton* gotolink;
    __weak IBOutlet UIScrollView* flagScroll;
}

- (IBAction)actionBack:(id)sender;
- (IBAction)actionShare:(id)sender;
- (IBAction)actionQuestion:(id)sender;

@end


@implementation ResMoreInfoVC

@synthesize restaurantObj=_restaurantObj;

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        // Custom initialization
    }
    return self;
}

- (id)initWithRestaurantObj:(RestaurantObj*)restaurantObj
{
    self = [super initWithNibName:@"ResMoreInfoVC" bundle:nil];
    if (self) {
        self.restaurantObj = restaurantObj;
    }
    return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];
    [CommonHelpers setBackgroudImageForViewRestaurant:self.view];
    // Do any additional setup after loading the view from its nib.
    lbName.text = self.restaurantObj.name ;
    _lblTitle.text = [CommonHelpers getInformationRestaurant:self.restaurantObj];
    
    NSString* link = [NSString stringWithFormat:@"extendedinfo?userid=%@&restaurantid=%@",[UserDefault userDefault].userID, self.restaurantObj.uid];
    CRequest* request = [[CRequest alloc]initWithURL:link RQType:RequestTypeGet RQData:RequestDataRestaurant RQCategory:ApplicationForm withKey:1];
    request.delegate = self;
    [request startFormRequest];
    
   
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

-(void) displayLocation : (AddressAnnotation *) addAnnotation
{
    MKCoordinateRegion region;
    MKCoordinateSpan span;
    span.latitudeDelta = 0.2;
    span.longitudeDelta = 0.2;
    
    region.span = span;
    region.center = addAnnotation.coordinate;
    
    [mapView addAnnotation:addAnnotation];
    [mapView setRegion:region];
    [mapView regionThatFits:region];
    
    
}

-(IBAction)callAction:(id)sender
{
    [[UIApplication sharedApplication] openURL:[NSURL URLWithString:[NSString stringWithFormat:@"tel://%@",self.restaurantObj.phone]]];
}
-(IBAction)gotoWebsite:(id)sender
{
    [[UIApplication sharedApplication] openURL:[NSURL URLWithString:_restaurantObj.website]];
}

-(void)addFlag:(NSString*)name Key:(NSString*)key
{
    NSString* str = [NSString stringWithFormat:@"%@",name];
    if ([str isEqualToString:@"true"]) {
        UILabel* label = [[UILabel alloc]initWithFrame:CGRectMake(0, flagScroll.contentSize.height+2, 300, 12)];
        label.font = [UIFont fontWithName:@"Helvetica Neue" size:12];
        label.text = [NSString stringWithFormat:@"%@: Yes", key];
        label.backgroundColor = [UIColor colorWithRed:1.0 green:1.0 blue:1.0 alpha:0.0];
        label.textColor = [UIColor colorWithRed:1.0 green:1.0 blue:1.0 alpha:1.0];
        [flagScroll addSubview:label];
        flagScroll.contentSize = CGSizeMake(flagScroll.contentSize.width, flagScroll.contentSize.height + 15);
    }
}

-(void)responseData:(NSData *)data WithKey:(int)key UserData:(id)userData
{
    NSString* response = [[NSString alloc]initWithData:data encoding:NSUTF8StringEncoding];
    NSLog(@"%@",response);
    NSDictionary* dic = [response objectFromJSONString];
    _phone.text = [NSString stringWithFormat:@"Phone: %@",[dic objectForKey:@"phoneNumber"]];
    _restaurantObj.phone = [dic objectForKey:@"phoneNumber"];
    _address.text = [dic objectForKey:@"address"];
    [self addFlag:[dic objectForKey:@"healthyOptionsFlag"] Key:@"Healthy Options"];
    [self addFlag:[dic objectForKey:@"wifiFlag"] Key:@"Wifi"];
    [self addFlag:[dic objectForKey:@"payCashonlyFlag"] Key:@"Pay Cashonly"];
    [self addFlag:[dic objectForKey:@"reservationsFlag"] Key:@"Reservations"];
    [self addFlag:[dic objectForKey:@"open24HoursFlag"] Key:@"Open 24 Hours"];
    [self addFlag:[dic objectForKey:@"parkingFlag"] Key:@"Parking"];
    [self addFlag:[dic objectForKey:@"parkingValetFlag"] Key:@"Parking Valet"];
    [self addFlag:[dic objectForKey:@"parkingFreeFlag"] Key:@"Parking Free"];
    [self addFlag:[dic objectForKey:@"parkingGarageFlag"] Key:@"Parking Garage"];
    [self addFlag:[dic objectForKey:@"parkingLotFlag"] Key:@"Parking Lot"];
    [self addFlag:[dic objectForKey:@"parkingStreetFlag"] Key:@"Parking Street"];
    [self addFlag:[dic objectForKey:@"parkingValidatedFlag"] Key:@"Parking Validated"];
    [self addFlag:[dic objectForKey:@"smokingFlag"] Key:@"Smoking"];
    [self addFlag:[dic objectForKey:@"accessibleWheelchairFlag"] Key:@"Accessible Wheel Chair"];
    [self addFlag:[dic objectForKey:@"alcoholFlag"] Key:@"Alcohol"];
    [self addFlag:[dic objectForKey:@"alcoholBarFlag"] Key:@"Alcohol Bar"];
    [self addFlag:[dic objectForKey:@"alcoholBeerWineFlag"] Key:@"Alcohol Beer Wine"];
    [self addFlag:[dic objectForKey:@"alcoholByobFlag"] Key:@"Alcohol Byob"];
    [self addFlag:[dic objectForKey:@"groupsGoodForFlag"] Key:@" Good for Groups"];
    [self addFlag:[dic objectForKey:@"kidsGoodForFlag"] Key:@"Good for Kids"];
    [self addFlag:[dic objectForKey:@"kidsMenuFlag"] Key:@"Kids Menu"];
    [self addFlag:[dic objectForKey:@"mealBreakfastFlag"] Key:@"Meal Breakfast"];
    [self addFlag:[dic objectForKey:@"mealCaterFlag"] Key:@"Meal Cater"];
    [self addFlag:[dic objectForKey:@"mealDeliverFlag"] Key:@"Meal Deliver"];
    [self addFlag:[dic objectForKey:@"mealDinnerFlag"] Key:@"Meal Dinner"];
    [self addFlag:[dic objectForKey:@"mealLunchFlag"] Key:@"Meal Lunch"];
    [self addFlag:[dic objectForKey:@"mealTakeoutFlag"] Key:@"Meal Takeout"];
    [self addFlag:[dic objectForKey:@"optionsGlutenfreeFlag"] Key:@"Options Glutenfree"];
    [self addFlag:[dic objectForKey:@"optionsLowfatFlag"] Key:@"Options Lowfat"];
    [self addFlag:[dic objectForKey:@"optionsOrganicFlag"] Key:@"Options Organic"];
    [self addFlag:[dic objectForKey:@"optionsVeganFlag"] Key:@"Options Vegan"];
    [self addFlag:[dic objectForKey:@"optionsVegetarianFlag"] Key:@"Options Vegetarian"];
    [self addFlag:[dic objectForKey:@"roomPrivateFlag"] Key:@"Room Private"];
    [self addFlag:[dic objectForKey:@"seatingOutdoorFlag"] Key:@"Seating Outdoor"];
    
    NSString* website = [NSString stringWithFormat:@"%@",[dic objectForKey:@"website"]];
    if (![website isEqualToString:@""]) {
        _restaurantObj.website = website;
        _website.text = @"Visit Restaurant Website";
    }
    else{
        mapView.frame = CGRectMake(mapView.frame.origin.x, 155, mapView.frame.size.width, mapView.frame.size.height);
        gotolink.enabled = NO;
    }
    CLLocationCoordinate2D coordi = CLLocationCoordinate2DMake(self.restaurantObj.lattitude, self.restaurantObj.longtitude);
    AddressAnnotation *restaurantPlace = [[AddressAnnotation alloc] initWithName:self.restaurantObj.name details:[dic objectForKey:@"address"] coordinate:coordi];
    [self displayLocation:restaurantPlace];
}


@end
