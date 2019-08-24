//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "UIFocusEnvironment-Protocol.h"

@class NSArray;
@protocol UIFocusEnvironment;

@protocol _UIFocusEnvironmentPrivate <UIFocusEnvironment>

@optional
@property(readonly, copy, nonatomic, getter=_linearFocusMovementSequences) NSArray *linearFocusMovementSequences;
@property(readonly, nonatomic, getter=_preferredFocusMovementStyle) long long preferredFocusMovementStyle;
@property(readonly, nonatomic, getter=_isEligibleForFocusInteraction) _Bool eligibleForFocusInteraction;
- (_Bool)_reversesLinearFocusWrapping;
- (void)_setNeedsNonDeferredFocusUpdate;
- (id <UIFocusEnvironment>)_parentFocusEnvironment;
@end
