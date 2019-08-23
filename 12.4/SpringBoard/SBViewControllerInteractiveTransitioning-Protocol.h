//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SBViewControllerPercentDrivenTransitionUpdating-Protocol.h"
#import "SBViewControllerReversibleTransitioning-Protocol.h"
#import "UIViewControllerInteractiveTransitioning-Protocol.h"

@protocol SBViewControllerContextTransitioning;

@protocol SBViewControllerInteractiveTransitioning <UIViewControllerInteractiveTransitioning, SBViewControllerPercentDrivenTransitionUpdating, SBViewControllerReversibleTransitioning>
- (void)finishInteractiveTransition;
- (void)startInteractiveTransition:(id <SBViewControllerContextTransitioning>)arg1;
@end

