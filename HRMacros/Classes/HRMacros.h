//
//  HRMacros.h
//  Pods
//
//  Created by 郑振兴 on 2017/5/23.
//
//

#ifndef Macros_h
#define Macros_h

//判断设备类型
#define iPhone4 ([UIScreen mainScreen].bounds.size.height == 480)
#define iPhone5 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640, 1136), [[UIScreen mainScreen] currentMode].size) : NO)
#define iPhone6 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? (CGSizeEqualToSize(CGSizeMake(750, 1334), [[UIScreen mainScreen] currentMode].size)) : NO)
#define iPhone6plus ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? (CGSizeEqualToSize(CGSizeMake(1125, 2001), [[UIScreen mainScreen] currentMode].size) || CGSizeEqualToSize(CGSizeMake(1242, 2208), [[UIScreen mainScreen] currentMode].size)) : NO)

#define kScreenHeight [UIScreen mainScreen].bounds.size.height
#define kScreenWidth [UIScreen mainScreen].bounds.size.width

#define iPhoneX (kScreenWidth == 375.f && kScreenHeight == 812.f ? YES : NO)
// 适配iPhone X 状态栏高度
#define HR_StatusBarHeight (iPhoneX ? 44.f : 20.f)
// 适配iPhone X 导航栏高度
#define HR_NavHeight (iPhoneX ? 88.f : 64.f)
// 适配iPhone X Tabbar距离底部的距离
#define HR_TabbarSafeBottomMargin (iPhoneX ? 34.f : 0.f)
// 适配iPhone X Tabbar高度
#define HR_TabbarHeight (iPhoneX ? (49.f + 34.f) : 49.f)


#define kWidth4(R) (R) * (kScreenWidth) / 320 //这里的320我是针对4s为标准适配的,如果需要其他标准可以修改
#define kHeight4(R) (iPhone4 ? R : ((R) * (kScreenHeight) / 480)) //这里的480我是针对4s为标准适配的,如果需要其他标准可以修改

#define kWidth5(R) (R) * (kScreenWidth) / 320 //这里的320我是针对5s为标准适配的,如果需要其他标准可以修改
#define kHeight5(R) (iPhone5 ? R : ((R) * (kScreenHeight) / 568)) //这里的568我是针对5s为标准适配的,如果需要其他标准可以修改

#define kWidth6(R) (R) * (kScreenWidth) / 375 //这里的375我是针对6s为标准适配的,如果需要其他标准可以修改
#define kHeight6(R) (iPhone6 ? R : ((R) * (kScreenHeight) / 667)) //这里的667我是针对6s为标准适配的,如果需要其他标准可以修改

#define kWidth6p(R) (R) * (kScreenWidth) / 414 //这里的414我是针对6p为标准适配的,如果需要其他标准可以修改
#define kHeight6p(R) (iPhone6plus ? R : ((R) * (kScreenHeight) / 736)) //这里的736我是针对6p为标准适配的,如果需要其他标准可以修改

#define font4_5(R) (R) * (kScreenWidth) / 320.0 //这里是4s\5s屏幕字体
#define font6(R) (R) * (kScreenWidth) / 375.0 //这里是6屏幕字体
#define font6p(R) (R) * (kScreenWidth) / 414.0 //这里是6p屏幕字体

#define FontMake4_5(size) [UIFont systemFontOfSize:font4_5(size)]
#define FontMake6(size) [UIFont systemFontOfSize:font6(size)]
#define FontMake6p(size) [UIFont systemFontOfSize:font6p(size)]

//懒加载
#define HR_LAZY(object, assignment) (object = object ?: assignment)
//GCD
#define HRBACK(block) dispatch_async(dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0), block)
#define HRMAIN(block) dispatch_async(dispatch_get_main_queue(), block)

//日志打印
#define LogError(frmt, ...) DDLogError(frmt, ##__VA_ARGS__)
#define LogWarn(frmt, ...) DDLogWarn(frmt, ##__VA_ARGS__)
#define LogInfo(frmt, ...) DDLogInfo(frmt, ##__VA_ARGS__)
#define LogDebug(frmt, ...) DDLogDebug(frmt, ##__VA_ARGS__)
#define LogVerbose(frmt, ...) DDLogVerbose(frmt, ##__VA_ARGS__)

#endif /* Macros_h */
