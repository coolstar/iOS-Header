//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBSwitcherModifier.h>

@class SBFullScreenAppLayoutSwitcherModifier;

@interface SBAppUnderFloatingSwitcherSwitcherModifier : SBSwitcherModifier
{
    SBFullScreenAppLayoutSwitcherModifier *_fullScreenAppLayoutModifier;
}

- (void).cxx_destruct;
- (_Bool)wantsAsynchronousSurfaceRetentionAssertion;
- (_Bool)wantsMinificationFilter;
- (_Bool)wantsAsynchronousRenderingAssertion;
- (long long)keyboardSuppressionMode;
- (long long)sceneDeactivationReason;
- (_Bool)wantsResignActiveAssertion;
- (_Bool)isHomeGrabberVisible;
- (id)initWithActiveAppLayout:(id)arg1;

@end
