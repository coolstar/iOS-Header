//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_os_log;

@interface SGDPowerBudgetThrottlingState : NSObject
{
    struct _opaque_pthread_mutex_t _lock;
    NSObject<OS_os_log> *_log;
    struct {
        unsigned int magic;
        int opsLeft;
        long long nsecLeft;
    } _state;
    unsigned long long _absTimeAtOpStart;
    int _fd;
    _Bool _opInProgress;
    _Bool _dirty;
}

- (void).cxx_destruct;
- (unsigned long long)discretionaryOpsLeft;
- (void)refill;
- (void)endWork;
- (void)startWork;
- (_Bool)canDoDiscretionaryWork;
- (void)_writeThrottleStateLocked;
- (void)_writeThrottleState;
- (void)_readThrottleState;
- (void)dealloc;
- (id)initWithPath:(id)arg1 log:(id)arg2;

@end
