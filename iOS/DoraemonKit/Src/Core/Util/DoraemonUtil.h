//
//  DoraemonUtil.h
//  DoraemonKitDemo
//
//  Created by yixiang on 2017/12/11.
//  Copyright © 2017年 yixiang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface DoraemonUtil : NSObject

@property (nonatomic, assign) NSInteger fileSize;

+ (NSString *)dateFormatTimeInterval:(NSTimeInterval)timeInterval;

+ (NSString *)dateFormatNSDate:(NSDate *)date;

+ (NSString *)dateFormatNow;

// byte格式化为 B KB MB 方便流量查看
+ (NSString *)formatByte:(CGFloat)byte;

+ (void)savePerformanceDataInFile:(NSString *)fileName data:(NSString *)data;

+ (NSString *)dictToJsonStr:(NSDictionary *)dict;

+ (NSDictionary *)dictionaryWithJsonString:(NSString *)jsonString;

+ (NSString *)formatTimeIntervalToMS:(NSTimeInterval)timeInterval;

//获取某一条文件路径的文件大小
- (void)getFileSizeWithPath:(NSString *)path;

//删除某一路径下的所有文件
+ (void)clearFileWithPath:(NSString *)path;

+ (void)clearLocalDatas;

+ (void)openPlugin:(UIViewController *)vc __attribute__((deprecated("此方法已弃用,请使用[DoraemonHomeWindow openPlugin:vc];")));

+ (UIViewController *)rootViewControllerForKeyWindow __attribute__((deprecated("此方法已弃用,请使用[UIViewController rootViewControllerForKeyWindow]")));

+ (UIViewController *)topViewControllerForKeyWindow __attribute__((deprecated("此方法已弃用,请使用[UIViewController topViewControllerForKeyWindow]")));
@end
