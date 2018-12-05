//
//  GcdTimer.h
//  liuyujia
//
//  Created by yujia liu on 2018/12/5.
//  Copyright © 2018 yujia liu. All rights reserved.
//  GCD 定时器

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface GcdTimer : NSObject

+ (NSString *)execTask:(void(^)(void))task
                 start:(NSTimeInterval)start
              interval:(NSTimeInterval)interval
               repeats:(BOOL)repeats
                 async:(BOOL)async;

+ (NSString *)execTask:(id)target
              selector:(SEL)selector
                 start:(NSTimeInterval)start
              interval:(NSTimeInterval)interval
               repeats:(BOOL)repeats
                 async:(BOOL)async;

+ (void)cancelTask:(NSString *)name;

@end

NS_ASSUME_NONNULL_END
