//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SBUIMainScreenAnimationController.h"

@class SBAppStatusBarSettingsAssertion, SBMainAlertManager, SBRemoteAlertAdapter, SBWindowSelfHostWrapper, UIStatusBarStyleRequest;

@interface SBUIAnimationFadeRemoteAlertToHome : SBUIMainScreenAnimationController
{
    SBMainAlertManager *_alertManager;
    SBRemoteAlertAdapter *_alert;
    SBAppStatusBarSettingsAssertion *_hideStatusBarAssertion;
    SBWindowSelfHostWrapper *_appHostWrapper;
    UIStatusBarStyleRequest *_targetStatusBarStyleRequest;
}

- (void).cxx_destruct;
- (_Bool)_shouldDismissBanner;
- (void)_cleanupAnimation;
- (void)_startAnimation;
- (void)_prepareAnimation;
- (id)animationSettings;
- (double)animationDuration;
- (void)dealloc;
- (id)initWithTransitionContextProvider:(id)arg1;

@end

