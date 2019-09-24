//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoverSheet/CSPageViewController.h>

#import <CoverSheet/CSPageViewControllerProtocol-Protocol.h>
#import <CoverSheet/CSTodayViewControllerDelegate-Protocol.h>
#import <CoverSheet/SBUICoronaAnimationControllerParticipant-Protocol.h>
#import <CoverSheet/SBUISpotlightInitiating-Protocol.h>

@class CSAppearance, CSBehavior, CSLayoutStrategy, CSPresentation, CSTodayContentViewController, CSTodayViewController, NSArray, NSSet, NSString, SBViewControllerTransitionContext, UIColor, _UILegibilitySettings;
@protocol CSCoverSheetViewControllerProtocol, CSCoverSheetViewPresenting, UICoordinateSpace;

@interface CSTodayPageViewController : CSPageViewController <CSTodayViewControllerDelegate, SBUICoronaAnimationControllerParticipant, CSPageViewControllerProtocol, SBUISpotlightInitiating>
{
    CSLayoutStrategy *_layoutStrategy;
    CSTodayContentViewController *_contentViewController;
}

+ (_Bool)isAvailableForConfiguration;
+ (unsigned long long)requiredCapabilities;
@property(retain, nonatomic) CSTodayContentViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
@property(retain, nonatomic) CSLayoutStrategy *layoutStrategy; // @synthesize layoutStrategy=_layoutStrategy;
- (void).cxx_destruct;
@property(readonly, nonatomic) CSTodayViewController *todayViewController; // @dynamic todayViewController;
- (void)coronaAnimationController:(id)arg1 willAnimateCoronaTransitionWithAnimator:(id)arg2;
- (void)coverSheetTodayViewControllerDidFocusSearchView:(id)arg1;
- (void)coverSheetTodayViewController:(id)arg1 contentViewsDidChange:(id)arg2;
- (_Bool)_isPortrait;
- (_Bool)_listBelowDateTime;
- (double)listInsetX;
- (double)customListWidth;
- (unsigned long long)listWidthStrategy;
- (unsigned long long)listLayout;
- (double)minimumDateToListSpacing;
- (double)dateTimeInsetX;
@property(readonly, copy, nonatomic) NSString *pageRole;
- (unsigned long long)dateTimeLayout;
- (void)updateTransitionWhileRubberBandingInProgress:(_Bool)arg1;
- (id)displayLayoutElementIdentifier;
- (void)aggregateBehavior:(id)arg1;
- (void)aggregateAppearance:(id)arg1;
- (id)spotlightHeaderAcquiringViewController;
- (void)cleanupAfterSpotlightDismissal;
- (void)resetForSpotlightDismissalAnimated:(_Bool)arg1;
@property(retain, nonatomic) SBViewControllerTransitionContext *transitionContext;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy, nonatomic) CSAppearance *activeAppearance;
@property(readonly, copy, nonatomic) CSBehavior *activeBehavior;
@property(readonly, copy, nonatomic) NSString *appearanceIdentifier;
@property(readonly, nonatomic) _Bool authenticated;
@property(readonly, nonatomic) UIColor *backgroundColor;
@property(readonly, nonatomic) long long backgroundStyle;
@property(readonly, copy, nonatomic) NSSet *components;
@property(readonly, copy, nonatomic) NSString *coverSheetIdentifier;
@property(nonatomic) __weak id <CSCoverSheetViewControllerProtocol> coverSheetViewController;
@property(readonly, nonatomic) double customIdleExpirationTimeout;
@property(readonly, nonatomic) double customIdleWarningTimeout;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) CSPresentation *externalPresentation;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) long long idleTimerDuration;
@property(readonly, nonatomic) long long idleTimerMode;
@property(readonly, nonatomic) long long idleWarnMode;
@property(readonly, nonatomic) _UILegibilitySettings *legibilitySettings;
@property(readonly, nonatomic) long long notificationBehavior;
@property(readonly, nonatomic) long long participantState;
@property(readonly, nonatomic) long long presentationAltitude;
@property(readonly, nonatomic) __weak id <UICoordinateSpace> presentationCoordinateSpace;
@property(readonly, nonatomic) long long presentationPriority;
@property(readonly, copy, nonatomic) NSArray *presentationRegions;
@property(readonly, nonatomic) long long presentationStyle;
@property(readonly, nonatomic) long long presentationTransition;
@property(readonly, nonatomic) long long presentationType;
@property(nonatomic) __weak id <CSCoverSheetViewPresenting> presenter;
@property(readonly, nonatomic) long long proximityDetectionMode;
@property(readonly, nonatomic) unsigned long long restrictedCapabilities;
@property(readonly, nonatomic) long long scrollingStrategy;
@property(readonly) Class superclass;
@property(nonatomic, getter=isTransitioning) _Bool transitioning;

@end
