//
//  addedSpaceObjectsViewController.h
//  OutOfThisWorld
//
//  Created by Dustin M on 9/17/15.
//  Copyright (c) 2015 Vento. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SpaceObject.h"

@protocol AddedSpaceObjectViewControllerDelegate <NSObject>

@required

-(void)addSpaceObject:(SpaceObject *) spaceObject;
-(void)didCancel;

@end

@interface addedSpaceObjectsViewController : UIViewController

@property (weak, nonatomic) id <AddedSpaceObjectViewControllerDelegate> delegate;

@property (strong, nonatomic) IBOutlet UITextField *nameTextField;
@property (strong, nonatomic) IBOutlet UITextField *nicknameTextField;
@property (strong, nonatomic) IBOutlet UITextField *diameterTextField;
@property (strong, nonatomic) IBOutlet UITextField *temperatureTextField;
@property (strong, nonatomic) IBOutlet UITextField *numberOfMoonsTextField;
@property (strong, nonatomic) IBOutlet UITextField *interestingFactTextField;

- (IBAction)cancelButtonPressed:(UIButton *)sender;
- (IBAction)addButtonPressed:(UIButton *)sender;

@end
