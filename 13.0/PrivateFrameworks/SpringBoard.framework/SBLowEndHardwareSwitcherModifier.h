//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBSwitcherModifier.h>

@interface SBLowEndHardwareSwitcherModifier : SBSwitcherModifier
{
    unsigned long long _options;
    _Bool _floatingAppVisibleOverSplitView;
    _Bool _floatingAppVisibleOverExclusiveForegroundApp;
}

- (_Bool)_shouldSimplifyForTodayViewOrSpotlight;
- (_Bool)_shouldSimplifyForOpenFolder;
- (_Bool)_shouldResignActiveAppsUnderFloatingApp;
- (long long)keyboardSuppressionMode;
- (long long)sceneDeactivationReason;
- (_Bool)wantsResignActiveAssertion;
- (id)handleMainTransitionEvent:(id)arg1;
- (double)wallpaperScale;
- (double)homeScreenScale;
- (double)homeScreenAlpha;
- (id)initWithSimplificationOptions:(unsigned long long)arg1;

@end
