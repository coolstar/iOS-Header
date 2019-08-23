//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SBViewControllerInteractiveAnimatedTransitioning-Protocol.h"
#import "_UISettingsKeyObserver-Protocol.h"

@class NSString, SBMiscellaneousSystemAnimationSettings, SBSearchBackdropView, SPUISearchViewController, UIView;
@protocol SBSpotlightInitiating, SBViewControllerContextTransitioning;

@interface SBSpotlightTransitionAnimator : NSObject <_UISettingsKeyObserver, SBViewControllerInteractiveAnimatedTransitioning>
{
    SBMiscellaneousSystemAnimationSettings *_settings;
    id <SBViewControllerContextTransitioning> _transitionContext;
    double _percentComplete;
    double _transitionDuration;
    unsigned long long _transitionToken;
    unsigned long long _operation;
    UIView *_touchSwallowingView;
    UIView *_containerView;
    UIView *_searchView;
    SBSearchBackdropView *_backdropView;
    _Bool _ownsBackdropView;
    CDStruct_3e878e9e _pulldownInterval;
    id <SBSpotlightInitiating> _initiatingViewController;
    SPUISearchViewController *_spotlightViewController;
    _Bool _hidesAcquiredSearchHeader;
}

@property(nonatomic) _Bool hidesAcquiredSearchHeader; // @synthesize hidesAcquiredSearchHeader=_hidesAcquiredSearchHeader;
- (void).cxx_destruct;
- (double)_percentVisibleForPercentComplete:(double)arg1;
- (_Bool)_shouldAllowFullMotion;
- (unsigned long long)_searchBackdropLowQualityStyleForStyle;
- (_Bool)_shouldUseDarkTintForStyle;
- (_Bool)_shouldUseBlurForStyle;
- (void)_prototypeSettingsChanged;
- (void)_restoreSpotlightHeaderToInitiatingViewControllerForCancellation:(_Bool)arg1;
- (void)_restoreSpotlightHeaderToInitiatingViewController;
- (void)_configureSpotlightHeaderFromInitiatingViewController;
- (void)_cleanupAfterAnimating:(_Bool)arg1;
- (void)_animateIntoSearch:(_Bool)arg1;
- (void)_finishInteractiveTransition:(id)arg1 withCompletionSpeed:(double)arg2 completionCurve:(long long)arg3;
- (void)_cancelInteractiveTransition:(id)arg1 withCompletionSpeed:(double)arg2 completionCurve:(long long)arg3;
- (void)_updateTransitionIntoSearch:(_Bool)arg1 percentComplete:(double)arg2;
- (void)_animateInteractiveTransition:(id)arg1;
- (void)_prepareToAnimate;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (_Bool)supportsRestarting;
- (double)percentComplete;
- (void)finishInteractiveTransition:(id)arg1 withCompletionSpeed:(double)arg2 completionCurve:(long long)arg3;
- (void)cancelTransition:(id)arg1 withCompletionSpeed:(double)arg2 completionCurve:(long long)arg3;
- (void)updateTransition:(id)arg1 withPercentComplete:(double)arg2;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (_Bool)shouldMoveIntoSearchOnCancel;
- (_Bool)shouldMoveIntoSearch;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

