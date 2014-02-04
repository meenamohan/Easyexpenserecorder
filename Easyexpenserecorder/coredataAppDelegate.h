//
//  coredataAppDelegate.h
//  Easyexpenserecorder
//
//  Created by BSA Univ11 on 04/02/14.
//  Copyright (c) 2014 BSA Univ11. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface coredataAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;
-(NSArray*)getAllEasyexpenserecorderCategorytable;

@end
