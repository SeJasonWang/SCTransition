//
//  SCPresentTransition.h
//  SCTransitionManager
//
//  Created by sichenwang on 16/2/7.
//  Copyright © 2016年 sichenwang. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SCPresentTransition : NSObject<UIViewControllerAnimatedTransitioning>

/**
 *  动画时长.
 */
@property (nonatomic, assign) NSTimeInterval duration;

@end
