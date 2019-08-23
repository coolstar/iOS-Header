//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SBSceneLayoutViewController.h"

#import "SBSceneHandleObserver-Protocol.h"
#import "_UISettingsKeyObserver-Protocol.h"

@class FBScene, FBUIApplicationSceneDeactivationAssertion, NSArray, NSLayoutConstraint, NSMutableSet, NSString, SBHomeGrabberRotationView, SBHomeGrabberSettings, SBHomeGrabberView, SBMainDisplayLayoutState, SBMainDisplaySceneLayoutDropInteractionManager, SBMainDisplaySceneLayoutGestureManager, SBOrientationTransformWrapperView, SBSceneHandleBlockObserver, SBSeparatorView, SBUIKeyboardHomeAffordanceAssertion, UIApplicationSceneClientSettingsDiffInspector, UIStatusBar, UIView;

@interface SBMainDisplaySceneLayoutViewController : SBSceneLayoutViewController <_UISettingsKeyObserver, SBSceneHandleObserver>
{
    SBMainDisplaySceneLayoutGestureManager *_gestureManager;
    SBMainDisplaySceneLayoutDropInteractionManager *_dropInteractionManager;
    NSMutableSet *_pushPopTransformReasons;
    NSMutableSet *_pushPopWallpaperReasons;
    _Bool _showsPushInWallpaper;
    FBUIApplicationSceneDeactivationAssertion *_applicationSceneDeactivationAssertion;
    SBOrientationTransformWrapperView *_contentWrapperView;
    UIView *_contentView;
    SBSeparatorView *_separatorView;
    id _keyboardWillChangeFrameObserver;
    double _separatorViewKeyboardMargin;
    SBHomeGrabberSettings *_homeGrabberSettings;
    SBSceneHandleBlockObserver *_sceneHandleObserver;
    UIApplicationSceneClientSettingsDiffInspector *_clientSettingsInspector;
    _Bool _isKeyboardShowing;
    FBScene *_medusaKeyboardScene;
    SBUIKeyboardHomeAffordanceAssertion *_keyboardHomeAffordanceAssertion;
    UIStatusBar *_statusBar;
    NSMutableSet *_statusBarRequiringReasons;
    NSLayoutConstraint *_homeGrabberTopConstraint;
    NSLayoutConstraint *_homeGrabberBottomConstraint;
    NSLayoutConstraint *_homeGrabberLeftConstraint;
    NSLayoutConstraint *_homeGrabberRightConstraint;
    _Bool _nubHighlighted;
    _Bool __preventsStatusBarAreaUpdate;
    _Bool __preventsCornerRadiusUpdate;
    double _separatorViewAlpha;
    SBHomeGrabberRotationView *_homeGrabberRotationView;
    double _statusBarAlpha;
}

+ (id)prototypeSettingsAnimationSettings;
@property(nonatomic, getter=_statusBarAlpha, setter=_setStatusBarAlpha:) double statusBarAlpha; // @synthesize statusBarAlpha=_statusBarAlpha;
@property(nonatomic, setter=_setPreventsCornerRadiusUpdate:) _Bool _preventsCornerRadiusUpdate; // @synthesize _preventsCornerRadiusUpdate=__preventsCornerRadiusUpdate;
@property(nonatomic, setter=_setPreventsStatusBarAreaUpdate:) _Bool _preventsStatusBarAreaUpdate; // @synthesize _preventsStatusBarAreaUpdate=__preventsStatusBarAreaUpdate;
@property(readonly, nonatomic) SBHomeGrabberRotationView *homeGrabberRotationView; // @synthesize homeGrabberRotationView=_homeGrabberRotationView;
@property(nonatomic, getter=_isNubHighlighted, setter=_setNubHighlighted:) _Bool _nubHighlighted; // @synthesize _nubHighlighted;
@property(nonatomic, setter=_setSeparatorViewAlpha:) double _separatorViewAlpha; // @synthesize _separatorViewAlpha;
- (void).cxx_destruct;
- (struct CGSize)_layoutSizeForLayoutRole:(long long)arg1 spaceConfiguration:(long long)arg2 interfaceOrientation:(long long)arg3 frameOptions:(unsigned long long)arg4;
- (struct CGRect)_layoutFrameForLayoutRole:(long long)arg1 inLayoutState:(id)arg2;
- (unsigned int)_convertAnchorEdge:(unsigned int)arg1 toLayoutOrientation:(long long)arg2;
- (unsigned int)_anchorEdgeForLayoutRole:(long long)arg1;
- (struct CGRect)_separatorViewFrame;
- (void)_createOrDestroyHomeGrabberRotationViewIfNecessary;
- (void)sceneHandle:(id)arg1 didUpdateSettingsWithDiff:(id)arg2 previousSettings:(id)arg3;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (_Bool)_shouldConsiderHomeScreenAsActive;
- (id)_sceneHandleForBottomEdgeLocation:(double)arg1;
- (id)_sceneHandlesIntersectingHomeGrabber;
- (void)_updateHomeGrabberEdgeProtectAndAutoHideWithResetDelay:(double)arg1 unhideDelay:(double)arg2;
- (void)_updateHomeGrabberEdgeProtectAndAutoHideForAppRequest;
- (void)_configureHomeGrabberForSettingsChangeWithDiff:(id)arg1 transitionContext:(id)arg2;
- (void)_configureHomeGrabberForLayoutStateTransition;
- (void)_setUpObservationWithCurrentEntities:(id)arg1 previousEntities:(id)arg2;
- (_Bool)_isEdgeProtectedForHomeGestureAtEdgeLocation:(double)arg1;
@property(readonly, nonatomic) SBHomeGrabberView *_activeHomeGrabberView;
- (_Bool)_shouldDrawHomeGrabber;
- (id)_sceneHandleForLayoutRole:(long long)arg1;
- (void)_updateAuxiliaryViewsWhichWantToAnimateDuringRotation;
- (void)_updateAuxiliaryViews;
- (_Bool)_isLayoutElementViewControllerOccluded:(id)arg1;
- (_Bool)_isCurrentlyRotating;
- (_Bool)_isTransitioningNoninteractivelyFromAppToApp;
- (_Bool)_shouldRotateToLayoutOrientation:(long long)arg1;
- (_Bool)_shouldAdjustViewAffordancesAfterTransition;
- (_Bool)_shouldRepositionViewAfterTransition;
- (_Bool)_shouldDeactivateSceneAndSuppressKeyboard:(id)arg1;
- (_Bool)_layoutStateHasInactiveLayoutElements;
- (void)_doCommonCleanupUponEndingLayoutTransition;
- (void)_beginLayoutStateTransitionWithContext:(id)arg1;
- (void)_addLayoutElementViewController:(id)arg1 forLayoutElement:(id)arg2 entity:(id)arg3;
- (struct CGRect)referenceFrameForIdentifier:(id)arg1 inLayoutState:(id)arg2;
- (struct CGRect)referenceFrameForEntity:(id)arg1 inLayoutState:(id)arg2;
- (id)_displayConfiguration;
- (id)_applicationSceneLayoutElementControllerForLayoutRole:(long long)arg1;
@property(readonly, copy, nonatomic) NSArray *_transitioningAppViewControllers;
@property(readonly, nonatomic) NSArray *appViewControllers;
- (struct CGRect)_updateRectInReferenceCoordinateSpace:(struct CGRect)arg1 withBlock:(CDUnknownBlockType)arg2;
- (struct CGPoint)_updatePointInReferenceCoordinateSpace:(struct CGPoint)arg1 withBlock:(CDUnknownBlockType)arg2;
- (struct CGAffineTransform)_convertTransformFromContentViewCoordinateSpaceToReferenceCoordinateSpace:(struct CGAffineTransform)arg1;
- (struct CGRect)_convertRectFromContentViewCoordinateSpaceToReferenceCoordinateSpace:(struct CGRect)arg1;
- (struct CGPoint)_convertPointFromContentViewCoordinateSpaceToReferenceCoordinateSpace:(struct CGPoint)arg1;
- (struct CGAffineTransform)_convertTransformFromReferenceCoordinateSpaceToContentViewCoordinateSpace:(struct CGAffineTransform)arg1;
- (struct CGRect)_convertRectFromReferenceCoordinateSpaceToContentViewCoordinateSpace:(struct CGRect)arg1;
- (struct CGPoint)_convertPointFromReferenceCoordinateSpaceToContentViewCoordinateSpace:(struct CGPoint)arg1;
- (id)_separatorView;
- (_Bool)_shouldReverseLayoutDirection;
- (void)_updateWallpaperStyleAndBackgroundColorWithAnimationFactory:(id)arg1;
- (void)_endRequiringPushedInWallpaperForReason:(id)arg1 animationFactory:(id)arg2;
- (void)_beginRequiringPushedInWallpaperForReason:(id)arg1 animationFactory:(id)arg2;
- (void)_popOutForReason:(id)arg1 animationFactory:(id)arg2;
- (void)_pushInForReason:(id)arg1 animationFactory:(id)arg2;
- (struct CGAffineTransform)_pushedInTransform;
- (void)setUserResizing:(_Bool)arg1;
- (struct CGRect)_separatorViewReferenceFrameForSpaceConfiguration:(long long)arg1 interfaceOrientation:(long long)arg2 frameOptions:(unsigned long long)arg3;
- (struct CGRect)_referenceFrameForLayoutRole:(long long)arg1 spaceConfiguration:(long long)arg2 interfaceOrientation:(long long)arg3 frameOptions:(unsigned long long)arg4;
- (struct CGSize)_layoutSizeForLayoutRole:(long long)arg1 spaceConfiguration:(long long)arg2 layoutState:(id)arg3;
- (struct CGRect)_referenceFrameForLayoutElement:(id)arg1 inLayoutState:(id)arg2;
- (unsigned int)_layoutSpaceAnchorEdgeForLayoutRole:(long long)arg1;
- (double)_layoutWidthForLayoutRole:(long long)arg1 inSpaceConfiguration:(long long)arg2 interfaceOrientation:(long long)arg3;
- (struct CGRect)_layoutFrameForSize:(struct CGSize)arg1 withRole:(long long)arg2 inInterfaceOrientation:(long long)arg3 frameOptions:(unsigned long long)arg4;
- (void)_updateSuppressingHomeAffordanceBounce;
- (void)_updateKeyboardHomeAffordanceAssertion;
- (_Bool)_shouldTakeKeyboardHomeAffordanceAssertion;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (_Bool)_keyboardIsSuppressedForMedusaKeyboardScene;
- (id)_medusaKeyboardSceneHandle;
- (void)_noteKeyboardIsNotForMedusa;
- (void)_noteKeyboardIsForMedusaWithOwningScene:(id)arg1;
- (void)_requireUnpinPanSystemGestureRecognizerFailureForGestureRecognizer:(id)arg1;
- (id)_trailingStatusBarStyleRequest;
- (id)_leadingStatusBarStyleRequest;
- (struct UIEdgeInsets)_statusBarEdgeInsetsForLayoutState:(id)arg1;
- (struct CGRect)_statusBarAvoidanceFrameForLayoutState:(id)arg1;
@property(readonly, nonatomic) struct CGRect _separatorViewHitTestFrame;
@property(readonly, nonatomic) double _separatorViewWidth;
- (unsigned int)_anchorEdgeForLayoutRole:(long long)arg1 inInterfaceOrientation:(long long)arg2;
- (void)_orderFrontOverlayViews;
- (void)_orderFrontLayoutElementViewControllerForLayoutRole:(long long)arg1;
- (long long)_overrideInterfaceOrientationMechanics;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithSceneManager:(id)arg1;
- (id)animationWrapperViewForLayoutState:(id)arg1 roleMask:(unsigned long long)arg2 interfaceOrientation:(long long)arg3 maskDisplayCorners:(_Bool)arg4;
- (id)_animationWrapperViewForElement:(id)arg1 entity:(id)arg2 layoutState:(id)arg3;
- (void)_rotateAppViewsWithAnimationSettings:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_resizeAppViewsWithAnimationSettings:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_performJiggleHintAnimationForApplicationSceneHandle:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_rotateAppsAnimationControllerWithTransitionRequest:(id)arg1;
- (id)_resizeAppsAnimationControllerWithTransitionRequest:(id)arg1;
- (id)_jiggleAppAnimationControllerForTransitionRequest:(id)arg1;
- (id)animationControllerForRotatingWithTransitionRequest:(id)arg1;
- (id)animationControllerForTransitionRequest:(id)arg1;
- (double)normalizedDismissRightLocation;
- (double)normalizedWideNarrowLocation;
- (double)normalizedHalfHalfLocation;
- (double)normalizedNarrowWideLocation;
- (double)normalizedDismissLeftLocation;
- (id)_requiredStatusBarStyleRequest;
- (_Bool)isRequiringStatusBar;
- (void)_tearDownStatusBar;
- (void)_addStatusBarIfNeeded;
- (id)_createStatusBarWithFrame:(struct CGRect)arg1 interfaceOrientation:(long long)arg2 reason:(id)arg3;
- (void)endRequiringStatusBarForReason:(id)arg1;
- (void)beginRequiringStatusBarForReason:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) SBMainDisplayLayoutState *_transitioningFromLayoutState; // @dynamic _transitioningFromLayoutState;
@property(readonly, nonatomic) SBMainDisplayLayoutState *_transitioningToLayoutState; // @dynamic _transitioningToLayoutState;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) SBMainDisplayLayoutState *layoutState; // @dynamic layoutState;
@property(readonly) Class superclass;

@end

