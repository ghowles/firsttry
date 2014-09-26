//
//  XYZToDoItem.h
//  firsttry
//
//  Created by ghowles on 9/25/14.
//  Copyright (c) 2014 ghowles. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface XYZToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end