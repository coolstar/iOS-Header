//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardHome/SBViewControllerTransitionRestartedReporting-Protocol.h>
#import <SpringBoardHome/UIViewControllerTransitionCoordinatorContext-Protocol.h>

@class BSUIAnimationFactory;

@protocol SBViewControllerTransitionCoordinatorContext <UIViewControllerTransitionCoordinatorContext, SBViewControllerTransitionRestartedReporting>
- (_Bool)wasPreviousPhaseInteractive;
- (unsigned long long)transitionAnimationOptions;
- (BSUIAnimationFactory *)transitionAnimationFactory;
@end
