//
//  ICGNavigationController.h
//  ICGTransitionAnimation
//
//  Created by HuongDo on 5/12/14.
//  Copyright (c) 2014 ichigo. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AnimationControllers/ICGBaseAnimation.h"

@interface ICGNavigationController : UINavigationController <UINavigationControllerDelegate>

/** 
 Animation for the transition
 */
@property (strong, nonatomic) ICGBaseAnimation *animationController;

/**
 Whether interaction should be enabled for transitioning
 */
@property (assign, nonatomic) BOOL interactionEnabled;

/** Inits with rootViewController and transitioning animations
 @param animation Animation for the transition
 @return An instance of ICGFancyNavigationController
 */
- (id)initWithRootViewController:(UIViewController *)rootViewController withAnimation:(ICGBaseAnimation *)animation;
- (id<UIViewControllerAnimatedTransitioning>)navigationController:(UINavigationController *)navigationController animationControllerForOperation:(UINavigationControllerOperation)operation fromViewController:(UIViewController *)fromVC toViewController:(UIViewController *)toVC;
- (id <UIViewControllerInteractiveTransitioning>)navigationController:(UINavigationController *)navigationController interactionControllerForAnimationController:(id <UIViewControllerAnimatedTransitioning>)animationController;
@end
