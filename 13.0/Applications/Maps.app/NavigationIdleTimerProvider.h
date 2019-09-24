//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBSDisplayLayoutObserver-Protocol.h"

@class FBSDisplayLayoutMonitor, NSString, NSTimer, NSUUID;

__attribute__((visibility("hidden")))
@interface NavigationIdleTimerProvider : NSObject <FBSDisplayLayoutObserver>
{
    _Bool _hasSecureAppAssertion;
    _Bool _displayingInSecureWindow;
    _Bool _displayingInMainWindow;
    _Bool _shouldDisableIdleTimer;
    _Bool _isDeviceLocked;
    _Bool _isScreenOn;
    FBSDisplayLayoutMonitor *_displayMonitor;
    unsigned long long _coverSheetDimmingState;
    unsigned long long _mainWindowDimmingState;
    _Bool _userLockedScreenForCurrentManeuver;
    _Bool _guidanceAffectsDimming;
    unsigned long long _lastSeenGuidanceState;
    int _lastSeenManeuverType;
    NSUUID *_lastSeenManeuverID;
    unsigned long long _lastSeenAlertState;
    _Bool _displayWasPersistent;
    _Bool _wasShowingLaneGuidance;
    _Bool _wasShowingTrafficIncidentAlert;
    CDUnknownBlockType _changeHandler;
    CDUnknownBlockType _undimHandler;
    NSTimer *_idleDelayTimer;
}

@property(retain, nonatomic) NSTimer *idleDelayTimer; // @synthesize idleDelayTimer=_idleDelayTimer;
@property(copy, nonatomic) CDUnknownBlockType undimHandler; // @synthesize undimHandler=_undimHandler;
@property(copy, nonatomic) CDUnknownBlockType changeHandler; // @synthesize changeHandler=_changeHandler;
- (void).cxx_destruct;
- (void)_refreshDimmingStates;
- (void)_didReceiveGuidanceUpdateWithNewState:(unsigned long long)arg1 maneuver:(int)arg2 maneuverID:(id)arg3 alert:(unsigned long long)arg4 showingLaneGuidance:(_Bool)arg5 showingTrafficIncidentAlert:(_Bool)arg6;
- (void)updateGuidanceState:(id)arg1;
- (void)_notifiyShouldDisableIdleTimer;
- (void)_unconditionallyReenableIdleTimer;
- (void)_undimScreenIfNeeded;
- (void)_updateIdleTimer;
- (_Bool)_isIdleTimerDisabled;
- (void)_lockButtonPressed;
- (void)layoutMonitor:(id)arg1 didUpdateDisplayLayout:(id)arg2 withContext:(id)arg3;
- (void)dealloc;
- (void)updateHasSecureAppAssertion:(_Bool)arg1 displayingInSecureWindow:(_Bool)arg2 displayingInMainWindow:(_Bool)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
