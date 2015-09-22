//
//  SpaceDataViewController.h
//  OutOfThisWorld
//
//  Created by Dustin M on 9/14/15.
//  Copyright (c) 2015 Vento. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SpaceObject.h"

@interface SpaceDataViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>

@property (strong, nonatomic) IBOutlet UITableView *tableView;
@property (strong, nonatomic) SpaceObject *spaceObject;


@end
