//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SBNestingViewController;
@protocol SBViewControllerTransitionCoordinator;

@protocol SBNestingViewControllerTransitionObserver <NSObject>

@optional
- (void)nestingViewController:(SBNestingViewController *)arg1 willPerformOperation:(long long)arg2 onViewController:(SBNestingViewController *)arg3 withTransitionCoordinator:(id <SBViewControllerTransitionCoordinator>)arg4;
@end

