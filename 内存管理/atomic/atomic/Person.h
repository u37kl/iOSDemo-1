//
//  Person.h
//  atomic
//
//  Created by yunna on 2018/11/22.
//  Copyright © 2018年 yunna. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface Person : NSObject

@property (atomic,copy) NSString *name;
//@property (atomic,copy) NSString *name1;

@end

NS_ASSUME_NONNULL_END
