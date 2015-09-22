//
//  OuterSpaceTableViewController.h
//  OutOfThisWorld
//
//  Created by Dustin M on 9/9/15.
//  Copyright (c) 2015 Vento. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SpaceObject.h"
#import "addedSpaceObjectsViewController.h"

@interface OuterSpaceTableViewController : UITableViewController <AddedSpaceObjectViewControllerDelegate>

@property (strong, nonatomic) NSMutableArray *planets;
@property (strong, nonatomic) NSMutableArray *addedSpaceObjects;

@end
