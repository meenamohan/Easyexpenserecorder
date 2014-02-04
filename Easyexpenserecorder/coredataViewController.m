//
//  coredataViewController.m
//  Easyexpenserecorder
//
//  Created by BSA Univ11 on 04/02/14.
//  Copyright (c) 2014 BSA Univ11. All rights reserved.
//

#import "coredataViewController.h"
#import "Categorytable.h"
#import "coredataAppDelegate.h"

@interface coredataViewController ()


@property (nonatomic, retain) NSManagedObjectContext *managedObjectContext;
@end

@implementation coredataViewController
@synthesize category;

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
    coredataAppDelegate* appDelegate = [UIApplication sharedApplication].delegate;
    
    self.managedObjectContext = appDelegate.managedObjectContext;
   
    // Do any additional setup after loading the view from its nib.
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (IBAction)addentrybutton:(id)sender {
    Categorytable * newEntry = [NSEntityDescription insertNewObjectForEntityForName:@"Categorytable"
                                                      inManagedObjectContext:self.managedObjectContext];
    newEntry.category = self.category.text;
    NSError *error;
    if (![self.managedObjectContext save:&error])
        NSLog(@"Whoops, couldn't save: %@", [error localizedDescription]);
       self.category.text = @"";
    
        
      [self.view endEditing:YES];  
}
@end
