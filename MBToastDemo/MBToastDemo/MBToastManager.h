//
//  MBToastManager.h
//  MBToastDemo
//
//  Created by ZhangXiaofei on 17/2/22.
//  Copyright © 2017年 Yuri. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, MBToastPosition) {
    MBToastPositionTop          = 0,
    MBToastPositionCenter       = 1 << 0,
    MBToastPositionBottom       = 2 << 1,
    MBToastPositionPadTop       = 3 << 2,
    MBToastPositionPadBottom    = 4 << 3
};

@interface MBToastManager : NSObject

+ (void)setTapDismissEnable:(BOOL)tapDismissEnable;

+ (BOOL)tapDismissEnable;

+ (void)setQueueEnable:(BOOL)queueEnable;

+ (BOOL)queueEnable;

+ (void)setDuration:(NSTimeInterval)duration;

+ (NSTimeInterval)duration;

+ (void)setPosition:(MBToastPosition)position;

+ (MBToastPosition)position;

@end
