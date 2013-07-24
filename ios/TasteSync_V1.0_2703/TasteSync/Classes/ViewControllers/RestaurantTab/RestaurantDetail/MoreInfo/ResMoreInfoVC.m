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

- (void)viewDidLoad
{
    [super viewDidLoad];
    [CommonHelpers setBackgroudImageForViewRestaurant:self.view];
    // Do any additional setup after loading the view from its nib.
    
    CLLocationCoordinate2D coordi = CLLocationCoordinate2DMake(40.624, -73.7183);
    AddressAnnotation *restaurantPlace = [[AddressAnnotation alloc] initWithName:@"Nanking" details:@"143 Broadway, New york, USA" coordinate:coordi];
    [self displayLocation:restaurantPlace];
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


@end
