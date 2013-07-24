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
}

- (IBAction)actionSelect:(id)sender;

@end

@implementation ResPhotoCell

- (void) initForCell:(UIImage *) image1 image2:(UIImage *)image2 image3:(UIImage *) image3
{
    if (image1) {
        iv1.image = image1;
    }
    if (image2) {
        iv2.image = image2;
    }
    if (image3) {
        iv3.image = image3;
    }
}

- (IBAction)actionSelect:(id)sender
{
    UIButton *bt = (UIButton *) sender;
    switch (bt.tag) {
        case 1:
        {
            [self.delegate resPhotoCell:self tag:1];
        }
            break;
        case 2:
        {
            [self.delegate resPhotoCell:self tag:2];

        }
            break;
        case 3:
        {
            [self.delegate resPhotoCell:self tag:3];

        }
            break;
            
        default:
            break;
    }
}


@end
