//
//  UIView+ARAnimation.h
//  ARAnimationDemo
//
//  Created by AugustRush on 15/10/21.
//  Copyright © 2015年 AugustRush. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AREasingCurveFunction.h"

/**
 *  手动初始化 ARAnimation 动画库
 *  注意：在app启动时，必须手动调用 + (void)ARAnimationInit; 方法，进行ARAnimation 初始化，
 才能正常使用 ARAnimation
 */
@interface UIView (ARAnimation)

/**
 *  手动初始化 ARAnimation 动画库
 *  注意：在app启动时，必须手动调用该方法，进行ARAnimation 初始化，
            才能正常使用 ARAnimation
 */
+ (void)ARAnimationInit;

// basic
+ (void)AR_animationWithDuration:(NSTimeInterval)duration
                      animations:(void (^)(void))animations;

+ (void)AR_animationWithDuration:(NSTimeInterval)duration
                      animations:(void (^)(void))animations
                      completion:(void (^)(void))completion;

+ (void)AR_animationWithDuration:(NSTimeInterval)duration
                           delay:(CFTimeInterval)delay
                      animations:(void (^)(void))animations
                      completion:(void (^)(void))completion;

+ (void)AR_animationWithDuration:(NSTimeInterval)duration
                           delay:(CFTimeInterval)delay
                          easing:(AREasingCurve)easing
                      animations:(void (^)(void))animations
                      completion:(void (^)(void))completion;

+ (void)AR_animationWithDuration:(NSTimeInterval)duration
                           delay:(CFTimeInterval)delay
                     repeatCount:(NSUInteger)repeatCount
                    autoreverses:(BOOL)autoreverses
                          easing:(AREasingCurve)easing
                      animations:(void (^)(void))animations
                      completion:(void (^)(void))completion;

// spring
+ (void)AR_springAnimationWithDuration:(NSTimeInterval)duration
                            animations:(void (^)(void))animations;

+ (void)AR_springAnimationWithDuration:(NSTimeInterval)duration
                            animations:(void (^)(void))animations
                            completion:(void (^)(void))completion;

+ (void)AR_springAnimationWithDuration:(NSTimeInterval)duration
                                 delay:(CFTimeInterval)delay
                            animations:(void (^)(void))animations
                            completion:(void (^)(void))completion;

+ (void)AR_springAnimationWithDuration:(NSTimeInterval)duration
                                 delay:(CFTimeInterval)delay
                                  mass:(CGFloat)mass
                               damping:(CGFloat)damping
                             stiffness:(CGFloat)stiffness
                       initialVelocity:(CGFloat)initialVelocity
                            animations:(void (^)(void))animations
                            completion:(void (^)(void))completion;

+ (void)AR_springAnimationWithDuration:(NSTimeInterval)duration
                                 delay:(CFTimeInterval)delay
                           repeatCount:(NSUInteger)repeatCount
                          autoreverses:(BOOL)autoreverses
                                  mass:(CGFloat)mass
                               damping:(CGFloat)damping
                             stiffness:(CGFloat)stiffness
                       initialVelocity:(CGFloat)initialVelocity
                            animations:(void (^)(void))animations
                            completion:(void (^)(void))completion;

@end
