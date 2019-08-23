//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SBWindow.h"

#import "BSDescriptionProviding-Protocol.h"
#import "SBUIActiveOrientationObserver-Protocol.h"

@class NSCountedSet, NSString, UIViewController;

@interface SBMainScreenActiveInterfaceOrientationWindow : SBWindow <BSDescriptionProviding, SBUIActiveOrientationObserver>
{
    NSCountedSet *_orientationUpdateDisableReasons;
    _Bool _passesTouchesThrough;
    _Bool _ignoresAlerts;
    NSString *_debugName;
    UIViewController *_sb_rootViewController;
}

@property(nonatomic) _Bool ignoresAlerts; // @synthesize ignoresAlerts=_ignoresAlerts;
@property(nonatomic) _Bool passesTouchesThrough; // @synthesize passesTouchesThrough=_passesTouchesThrough;
@property(retain, nonatomic, setter=sb_setRootViewController:) UIViewController *sb_rootViewController; // @synthesize sb_rootViewController=_sb_rootViewController;
@property(readonly, copy, nonatomic) NSString *debugName; // @synthesize debugName=_debugName;
- (void).cxx_destruct;
- (_Bool)isActive;
- (void)_updateInterfaceOrientationToCurrentActiveInterfaceOrientationWithDuration:(double)arg1;
- (void)activeInterfaceOrientationDidChangeToOrientation:(long long)arg1 willAnimateWithDuration:(double)arg2 fromOrientation:(long long)arg3;
- (void)activeInterfaceOrientationWillChangeToOrientation:(long long)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (_Bool)isDisablingInterfaceOrientationChanges;
- (void)enableInterfaceOrientationChangesForReason:(id)arg1;
- (void)disableInterfaceOrientationChangesForReason:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setHidden:(_Bool)arg1;
- (void)setRootViewController:(id)arg1;
- (id)initWithDebugName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

