//
//  SpaceImageViewController.h
//  OutOfThisWorld
//
//  Created by Dustin M on 9/11/15.
//  Copyright (c) 2015 Vento. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SpaceObject.h"

@interface SpaceImageViewController : UIViewController <UIScrollViewDelegate>

@property (strong, nonatomic) IBOutlet UIScrollView *scrollView;
@property (strong, nonatomic) UIImageView *imageView;
@property (strong, nonatomic) SpaceObject *spaceObject;

@end
