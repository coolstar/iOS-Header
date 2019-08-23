//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SBProximitySensorControlling-Protocol.h"

@class NSMutableArray, NSString, SBHIDUILockAssertion;

@interface SBHIDInterface : NSObject <SBProximitySensorControlling>
{
    unsigned long long _lockState;
    NSMutableArray *_assertions;
    SBHIDUILockAssertion *_pocketTouchesAssertion;
    _Bool _proximityDetectionEnabled;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)resetProximityCalibration;
@property(nonatomic, getter=isProximityDetectionEnabled) _Bool proximityDetectionEnabled;
- (id)suspendProximityDetectionAndMultitouchForSource:(long long)arg1 reason:(id)arg2;
- (id)suspendProximityDetectionForSource:(long long)arg1 reason:(id)arg2;
- (void)reevaluateHIDLockAssertionsForSource:(long long)arg1;
- (void)removeHIDLockAssertion:(id)arg1 source:(long long)arg2;
- (id)addStartupHIDLockAssertion;
@property(nonatomic) _Bool pocketTouchesExpected;
- (id)_addHIDLockedAssertionForProximity:(_Bool)arg1 multitouch:(_Bool)arg2 source:(long long)arg3 reason:(id)arg4;
- (void)_reevaluateLockStateForSource:(long long)arg1;
- (void)_setLockState:(unsigned long long)arg1 source:(long long)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

