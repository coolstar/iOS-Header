//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TeaUI/NSObject-Protocol.h>

@class TUDynamicBarAnimator;

@protocol TUDynamicBarAnimatorDelegate <NSObject>
- (void)dynamicBarAnimatorWillLeaveSteadyState:(TUDynamicBarAnimator *)arg1;
- (void)dynamicBarAnimatorWillEnterSteadyState:(TUDynamicBarAnimator *)arg1;
- (_Bool)dynamicBarAnimator:(TUDynamicBarAnimator *)arg1 canHideBarsByDraggingWithOffset:(double)arg2;
- (void)dynamicBarAnimatorOutputsDidChange:(TUDynamicBarAnimator *)arg1;
@end
