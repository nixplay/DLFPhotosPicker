//
//  DLFPhotoCell.h
//  PhotosPicker
//
//  Created by  on 11/26/14.
//  Copyright (c) 2014 Delightful. All rights reserved.
//

#import <UIKit/UIKit.h>
#define LIGHT_BLUE_CGCOLOR [[UIColor colorWithRed:(99/255.0f)  green:(176/255.0f)  blue:(228.0f/255.0f) alpha:1.0] CGColor]
@interface DLFPhotoCell : UICollectionViewCell

@property (nonatomic, strong) UIImage *thumbnailImage;

@property (strong) IBOutlet UIImageView *imageView;

@end
