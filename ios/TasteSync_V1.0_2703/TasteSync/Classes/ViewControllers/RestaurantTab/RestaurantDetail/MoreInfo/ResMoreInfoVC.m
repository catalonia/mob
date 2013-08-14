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

-(void)responseData:(NSData *)data WithKey:(int)key UserData:(id)userData
{
    NSString* response = [[NSString alloc]initWithData:data encoding:NSUTF8StringEncoding];
    NSDictionary* dic = [response objectFromJSONString];
    _phone.text = [dic objectForKey:@"phoneNumber"];
    _address.text = [dic objectForKey:@"address"];
    CLLocationCoordinate2D coordi = CLLocationCoordinate2DMake(self.restaurantObj.lattitude, self.restaurantObj.longtitude);
    AddressAnnotation *restaurantPlace = [[AddressAnnotation alloc] initWithName:self.restaurantObj.name details:[dic objectForKey:@"address"] coordinate:coordi];
    [self displayLocation:restaurantPlace];
}


@end
