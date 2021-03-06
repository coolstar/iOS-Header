//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSXPCListenerDelegate-Protocol.h"

@class NSString, NSTimer;

@interface MCTeslaGatekeeper : NSObject <NSXPCListenerDelegate>
{
    NSTimer *_idleTimer;
    double _machTimeScaleFactor;
}

+ (id)sharedGatekeeper;
@property double machTimeScaleFactor; // @synthesize machTimeScaleFactor=_machTimeScaleFactor;
@property(retain, nonatomic) NSTimer *idleTimer; // @synthesize idleTimer=_idleTimer;
- (void).cxx_destruct;
- (void)resetIdleTimer;
- (void)idleTimerDidFire:(id)arg1;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

