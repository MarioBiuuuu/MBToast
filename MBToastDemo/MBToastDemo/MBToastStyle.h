//
//  MBToastStyle.h
//  MBToastDemo
//
//  Created by ZhangXiaofei on 17/2/22.
//  Copyright © 2017年 Yuri. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class MBToastStyle;

@interface MBToastStyle : NSObject

/**
 *  主视图背景色
 */
@property (nonatomic, strong) UIColor *backgroundColor;

/**
 *  标题文字颜色
 */
@property (nonatomic, strong) UIColor *titleColor;

/**
 *  内容文字颜色
 */
@property (nonatomic, strong) UIColor *messageColor;

/**
 *  标题文字字体
 */
@property (nonatomic, strong) UIFont *titleFont;

/**
 *  标题内容字体
 */
@property (nonatomic, strong) UIFont *messageFont;

/**
 *  图片大小
 */
@property (nonatomic, assign) CGSize imageSize;

/**
 *  主视图水平间距
 */
@property (nonatomic, assign) CGFloat horizonalPadding;

/**
 *  获取默认style
 *
 * @return  MBToast默认值
 */
+ (MBToastStyle *)defaultStyle;

- (instancetype)initWithDefaultStyle;
@end
