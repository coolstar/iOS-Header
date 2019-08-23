//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SBAnalyticsBackendEventHandling-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface SBAnalyticsBackend : NSObject <SBAnalyticsBackendEventHandling>
{
    NSMutableArray *_asyncEventHandlers;
    NSMutableArray *_syncEventHandlers;
    NSMutableDictionary *_stateQueryHandlers;
    NSObject<OS_dispatch_queue> *_queryHandlerQueue;
    NSObject<OS_dispatch_queue> *_asyncHandlerQueue;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)stateForQueryName:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)registerForQueryName:(unsigned long long)arg1 handler:(CDUnknownBlockType)arg2;
- (_Bool)handleEvent:(unsigned long long)arg1 withContext:(id)arg2;
- (void)registerSynchronousEventHandler:(id)arg1;
- (void)registerEventHandler:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

