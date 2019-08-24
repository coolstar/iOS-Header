//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Sharing/SFXPCClient.h>

@class NSDate, NSObject;
@protocol OS_dispatch_source;

@interface SFChargingUICoordinator : SFXPCClient
{
    _Bool _activateCalled;
    _Bool _invalidateCalled;
    _Bool _animationSPIAdopted;
    _Bool _runningAsCarry;
    NSDate *_uiUpdateMaxDate;
    NSDate *_uiUpdateRequestDate;
    CDUnknownBlockType _uiUpdateHandler;
    _Bool _uiUpdateMinTimeElapsed;
    _Bool _uiUpdateShouldDismiss;
    NSObject<OS_dispatch_source> *_uiUpdateTimer;
    long long _defaultDuration;
}

@property(nonatomic) long long defaultDuration; // @synthesize defaultDuration=_defaultDuration;
- (void).cxx_destruct;
- (void)onqueue_connectionInvalidated;
- (void)onqueue_connectionInterrupted;
- (void)onqueue_connectionEstablished;
- (_Bool)shouldEscapeXpcTryCatch;
- (id)remoteObjectInterface;
- (id)exportedInterface;
- (id)machServiceName;
- (void)_timingInvalidateMinTimer;
- (void)_timingRestartMinTimer;
- (void)requestAnimationDateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_initialViewControllerDidDisappear;
- (void)initialViewControllerDidDisappear;
- (void)_initialViewControllerDidAppear;
- (void)initialViewControllerDidAppear;
- (void)_dismissUI;
- (void)_sendDismissUIWithReason:(long long)arg1;
- (void)sendDismissUIWithReason:(long long)arg1;
- (void)_requestToDismissUIHandler:(CDUnknownBlockType)arg1;
- (void)requestToDismissUIHandler:(CDUnknownBlockType)arg1;
- (void)_requestToStartAnimationAtDate:(id)arg1;
- (void)requestToStartAnimationAtDate:(id)arg1;
- (void)requestToShowUIWithHandler:(CDUnknownBlockType)arg1;
- (void)_invalidate;
- (void)invalidate;
- (void)_activate;
- (void)activate;

@end
