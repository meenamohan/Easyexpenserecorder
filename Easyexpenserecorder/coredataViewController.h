//
//  coredataViewController.h
//  Easyexpenserecorder
//
//  Created by BSA Univ11 on 04/02/14.
//  Copyright (c) 2014 BSA Univ11. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface coredataViewController : UIViewController
@property (strong, nonatomic) IBOutlet UITextField *category;
- (IBAction)addentrybutton:(id)sender;

@end
