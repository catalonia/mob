//
//  ResPhotoCell.m
//  TasteSync
//
//  Created by Victor on 1/10/13.
//  Copyright (c) 2013 Mobioneer. All rights reserved.
//

#import "ResPhotoCell.h"


@interface ResPhotoCell ()
{
    __weak IBOutlet UIImageView *iv1,*iv2,*iv3;
    __weak IBOutlet UIActivityIndicatorView *activity1,*activity2,*activity3;
    __weak IBOutlet UIButton *bt1,*bt2,*bt3;
    int _index1, _index2, _index3;
    
    TSPhotoRestaurantObj* photoRestaurant;
    int _location;
}

- (IBAction)actionSelect:(id)sender;

@end

@implementation ResPhotoCell

- (void) initForCell:(TSPhotoRestaurantObj *) image1 Index1:(int)index1 image2:(TSPhotoRestaurantObj *)image2 Index2:(int)index2 image3:(TSPhotoRestaurantObj *) image3 Index3:(int)index3
{
    
    _index1 = index1;
    _index2 = index2;
    _index3 = index3;
    
    if (image1.image != nil) {
        iv1.image = image1.image;
        bt1.enabled = YES;
        [activity1 stopAnimating];
        [activity1 removeFromSuperview];
    }
    else
    {
        bt1.enabled = NO;
        [activity1 startAnimating];
        photoRestaurant = image1;
        _location = 1;
    }
    if (image2.image != nil) {
        iv2.image = image2.image;
        bt2.enabled = YES;
        [activity2 stopAnimating];
        [activity2 removeFromSuperview];
    }
    else
    {
        bt2.enabled = NO;
        [activity2 startAnimating];
        photoRestaurant = image2;
        _location = 2;
    }
    
    if (image3.image != nil) {
        iv3.image = image3.image;
        bt3.enabled = YES;
        [activity3 stopAnimating];
        [activity3 removeFromSuperview];
    }
    else
    {
        bt3.enabled = NO;
        [activity3 startAnimating];
        photoRestaurant = image2;
        _location = 2;
    }
}

- (IBAction)actionSelect:(id)sender
{
    UIButton *bt = (UIButton *) sender;
    switch (bt.tag) {
        case 1:
        {
            [self.delegate resPhotoCell:self tag:_index1];
        }
            break;
        case 2:
        {
            [self.delegate resPhotoCell:self tag:_index2];

        }
            break;
        case 3:
        {
            [self.delegate resPhotoCell:self tag:_index3];

        }
            break;
            
        default:
            break;
    }
}

@end
