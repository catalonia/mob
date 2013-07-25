//
//  ResPhotoCell.h
//  TasteSync
//
//  Created by Victor on 1/10/13.
//  Copyright (c) 2013 Mobioneer. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ResPhotoCell;

@protocol ResPhotoCellDelegate <NSObject>

- (void) resPhotoCell:(ResPhotoCell *) resPhotoCell tag:(int) anTag;

@end
@interface ResPhotoCell : UITableViewCell

@property (nonatomic, strong) id<ResPhotoCellDelegate> delegate;

- (void) initForCell:(UIImage *) image1 image2:(UIImage *)image2 image3:(UIImage *) image3;

@end
