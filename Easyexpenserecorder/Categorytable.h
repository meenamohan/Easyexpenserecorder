//
//  Categorytable.h
//  Easyexpenserecorder
//
//  Created by BSA Univ11 on 04/02/14.
//  Copyright (c) 2014 BSA Univ11. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Categorytable : NSManagedObject

@property (nonatomic, retain) NSString * category;
@property (nonatomic, retain) NSNumber * id;

@end
