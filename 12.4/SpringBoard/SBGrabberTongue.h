//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SBSystemGestureRecognizerDelegate-Protocol.h"

@class NSString, UIImageView, UIPanGestureRecognizer, UIView, _UIBackdropView;
@protocol SBGrabberTongueDelegate;

@interface SBGrabberTongue : NSObject <SBSystemGestureRecognizerDelegate>
{
    _Bool _invalidated;
    UIPanGestureRecognizer *_edgePullGestureRecognizer;
    UIView *_tongueContainer;
    _UIBackdropView *_tongueBackdropView;
    UIImageView *_tongueChevron;
    _Bool _tongueVisible;
    _Bool _inPullGesture;
    _Bool _inShowTongueGesture;
    _Bool _inDismissTongueGesture;
    _Bool _inAmbiguousGesture;
    _Bool _beganAmbiguousPullGesture;
    unsigned long long _screenEdge;
    unsigned long long _systemGestureType;
    UIView *_containingView;
    double _gestureStartTime;
    id <SBGrabberTongueDelegate> _delegate;
}

@property(readonly, nonatomic) __weak id <SBGrabberTongueDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_handlePullGesture:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)viewForSystemGestureRecognizer:(id)arg1;
- (void)_updateCancelsTouchesWithRecognizer:(id)arg1;
- (double)_edgeOrientedVelocityForRecognizer:(id)arg1;
- (double)_distanceFromEdgeForRecognizer:(id)arg1;
- (struct CGAffineTransform)_transformForTongueContainer;
- (struct CGRect)_chevronFrameForTongueBounds:(struct CGRect)arg1;
- (struct UIEdgeInsets)_grabberTongueScreenInsets;
- (struct CGRect)_frameForTongueWhenVisible:(_Bool)arg1;
- (void)_presentTongueAnimated:(_Bool)arg1;
- (void)_dismissTongueWithStyle:(long long)arg1 animated:(_Bool)arg2;
- (void)_cancelPendingTongueDismissRequests;
- (void)_dismissTongue:(id)arg1;
- (id)_newChevronView;
- (id)_newBackdropViewWithColorStyle:(long long)arg1;
- (id)_createEdgePullGestureRecognizerWithAction:(SEL)arg1;
- (void)_createTongueAndGestureRecognizersIfNecessaryWithColorStyle:(long long)arg1;
- (void)_didPresentInteractively:(id)arg1;
- (void)_willPresentInteractively:(id)arg1;
- (void)_didDismiss;
- (void)_willDismiss;
- (void)_willPresent;
- (void)_pullGestureCanceled:(id)arg1;
- (void)_pullGestureEnded:(id)arg1;
- (void)_pullGestureUpdated:(id)arg1;
- (void)_pullGestureBegan:(id)arg1;
- (double)_centerOnScreenEdge;
- (double)_ambiguousActivationMarginIfHonored;
- (double)_ambiguousActivationMargin;
- (_Bool)_shouldAllowSecondSwipeWithRecognizer:(id)arg1;
- (_Bool)_shouldReceiveTouch:(id)arg1;
- (_Bool)_shouldShowTongueOnFirstSwipeWithRecognizer:(id)arg1;
- (_Bool)_tongueOrPullEnabled;
@property(readonly, nonatomic, getter=isVisible) _Bool visible;
- (_Bool)isEdgeLocationInGrabberRegion:(double)arg1;
- (double)edgeLocationForTouch:(id)arg1;
- (double)edgeOrientedVelocity;
- (double)distanceFromEdge;
- (id)edgePullGestureRecognizer;
- (_Bool)dismissWithStyle:(long long)arg1 animated:(_Bool)arg2;
- (void)presentAnimated:(_Bool)arg1;
- (void)uninstall;
- (void)installInView:(id)arg1 withColorStyle:(long long)arg2;
- (void)invalidate;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 edge:(unsigned long long)arg2 type:(unsigned long long)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

