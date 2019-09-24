//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MapsThemeViewController.h"

#import "GuidanceDisplay-Protocol.h"
#import "SteppingPageViewControllerDelegate-Protocol.h"

@class DrivingWalkingSteppingSignGenerator, NSArray, NSLayoutConstraint, NSString, NSUUID, NavActionCoordinator, NavContainerViewController, PedestrianNavSingularView, Route, SteppingPageViewController, UIView;

__attribute__((visibility("hidden")))
@interface PedestrianNavSignViewController : MapsThemeViewController <SteppingPageViewControllerDelegate, GuidanceDisplay>
{
    _Bool _isTransitioningSignModes;
    _Bool _hasArrived;
    int _arrivalManeuver;
    NavActionCoordinator *_coordinator;
    unsigned long long _matchedStepIndex;
    SteppingPageViewController *_pagingViewController;
    PedestrianNavSingularView *_singularNavSignView;
    NSArray *_singularNavSignViewConstraints;
    NSLayoutConstraint *_pagingViewToBottomConstraint;
    NSLayoutConstraint *_singularNavSignToBottomConstraint;
    DrivingWalkingSteppingSignGenerator *_signGenerator;
    unsigned long long _signMode;
    unsigned long long _nextSignMode;
    NSString *_lastSentProceedToRouteDisplayString;
    NSArray *_arrivalTitles;
    NSArray *_arrivalDetails;
    NSUUID *_arrivedSignID;
}

@property(retain, nonatomic) NSUUID *arrivedSignID; // @synthesize arrivedSignID=_arrivedSignID;
@property(copy, nonatomic) NSArray *arrivalDetails; // @synthesize arrivalDetails=_arrivalDetails;
@property(copy, nonatomic) NSArray *arrivalTitles; // @synthesize arrivalTitles=_arrivalTitles;
@property(nonatomic) int arrivalManeuver; // @synthesize arrivalManeuver=_arrivalManeuver;
@property(nonatomic) _Bool hasArrived; // @synthesize hasArrived=_hasArrived;
@property(retain, nonatomic) NSString *lastSentProceedToRouteDisplayString; // @synthesize lastSentProceedToRouteDisplayString=_lastSentProceedToRouteDisplayString;
@property(nonatomic) _Bool isTransitioningSignModes; // @synthesize isTransitioningSignModes=_isTransitioningSignModes;
@property(nonatomic) unsigned long long nextSignMode; // @synthesize nextSignMode=_nextSignMode;
@property(nonatomic) unsigned long long signMode; // @synthesize signMode=_signMode;
@property(retain, nonatomic) DrivingWalkingSteppingSignGenerator *signGenerator; // @synthesize signGenerator=_signGenerator;
@property(retain, nonatomic) NSLayoutConstraint *singularNavSignToBottomConstraint; // @synthesize singularNavSignToBottomConstraint=_singularNavSignToBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *pagingViewToBottomConstraint; // @synthesize pagingViewToBottomConstraint=_pagingViewToBottomConstraint;
@property(retain, nonatomic) NSArray *singularNavSignViewConstraints; // @synthesize singularNavSignViewConstraints=_singularNavSignViewConstraints;
@property(retain, nonatomic) PedestrianNavSingularView *singularNavSignView; // @synthesize singularNavSignView=_singularNavSignView;
@property(retain, nonatomic) SteppingPageViewController *pagingViewController; // @synthesize pagingViewController=_pagingViewController;
@property(readonly, nonatomic) unsigned long long matchedStepIndex; // @synthesize matchedStepIndex=_matchedStepIndex;
@property(nonatomic) __weak NavActionCoordinator *coordinator; // @synthesize coordinator=_coordinator;
- (void).cxx_destruct;
- (double)_systemFittingHeightForSingularNavSignView;
- (void)_performNextSignModeAnimationIfNecessary;
- (void)_configureSingularSignViewForSignMode:(unsigned long long)arg1;
- (_Bool)_isInteractingWithSigns;
- (void)_showSignAtIndex:(long long)arg1;
- (void)_updateSignForStepAtIndex:(long long)arg1 maneuverInfo:(id)arg2;
- (void)_updateDistance:(double)arg1 forStepAtIndex:(long long)arg2;
- (void)setMatchedStepIndex:(unsigned long long)arg1;
- (void)_showArrival;
- (void)_showProceedToRouteWithDisplayString:(id)arg1;
- (_Bool)_isMapViewZoomedOrPanned;
- (void)_animateToSignMode:(unsigned long long)arg1;
- (void)_setupViewsWithInitialSignModeReceivedBeforeViewLoad;
- (void)updatePageIndicatorVisibilityAnimated:(_Bool)arg1;
- (void)showSignAtMatchedStep;
- (void)showSignForStep:(id)arg1;
- (long long)signIndexForStep:(id)arg1;
@property(readonly, nonatomic) NSArray *stepsWithCorrespondingSigns;
@property(retain, nonatomic) Route *route;
- (void)showManeuverAlertForAnnouncementStage:(unsigned long long)arg1;
- (void)setTimeToManeuver:(double)arg1 distanceToManeuver:(double)arg2 distanceText:(id)arg3 forStep:(id)arg4 atStepIndex:(unsigned long long)arg5;
- (void)showProceedingToRouteDistance:(double)arg1 displayString:(id)arg2 forStep:(id)arg3;
- (void)hideSecondaryManeuver;
- (void)showSecondaryManeuverSign:(id)arg1;
- (void)setETA:(id)arg1;
- (void)setDestinationDisplayName:(id)arg1;
- (void)showRecalculationFailed;
- (void)showRecalculating;
- (void)showArrivedUsingSignInfo:(_Bool)arg1;
- (void)showNoGuidance;
- (void)showManeuverSign:(id)arg1 maneuverStepIndex:(unsigned long long)arg2;
- (void)steppingPageViewController:(id)arg1 didTapOnSignAtIndex:(long long)arg2;
- (void)steppingPageViewController:(id)arg1 willDisplayAuxView:(id)arg2 atIndex:(long long)arg3;
- (void)steppingPageViewController:(id)arg1 willDisplaySign:(id)arg2 atIndex:(long long)arg3;
- (void)steppingPageViewControllerDidChangeSignHeight:(id)arg1;
- (void)steppingPageViewControllerUserDidStartScrolling:(id)arg1;
- (void)steppingPageViewController:(id)arg1 didChangeCurrentSign:(long long)arg2 previousSign:(long long)arg3 fromUserGesture:(unsigned long long)arg4;
- (void)updateTheme;
- (void)viewDidLoad;
@property(readonly, nonatomic) UIView *signContentView;
@property(readonly, nonatomic) NavContainerViewController *containerViewController;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (_Bool)_canShowWhileLocked;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic, getter=isGuidanceEnabled) _Bool guidanceEnabled;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
