//
//  MBToastStyle.m
//  MBToastDemo
//
//  Created by ZhangXiaofei on 17/2/22.
//  Copyright © 2017年 Yuri. All rights reserved.
//

#import "MBToastStyle.h"

@implementation MBToastStyle

+ (MBToastStyle *)defaultStyle {
    return [[self alloc] initWithDefaultStyle];
}

- (instancetype)initWithDefaultStyle {
    self = [super init];
    if (self) {
        self.backgroundColor = [[UIColor blackColor] colorWithAlphaComponent:0.8];
        self.titleColor = [UIColor whiteColor];
        self.messageColor = [UIColor whiteColor];
        self.titleFont = [UIFont boldSystemFontOfSize:16.0];
        self.messageFont = [UIFont systemFontOfSize:16.0];
        self.imageSize = CGSizeMake(80.0, 80.0);
    }
    return self;
}

@end
