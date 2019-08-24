//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AttentionAwareness/AWFrameworkClient-Protocol.h>

@class AWAttentionAwarenessConfiguration, AWAttentionEvent, AWClientPollWaiter, NSString;
@protocol NSXPCProxyCreating, OS_dispatch_queue;

@interface AWAttentionAwarenessClient : NSObject <AWFrameworkClient>
{
    NSObject<OS_dispatch_queue> *_queue;
    AWClientPollWaiter *_pollWaiter;
    id <NSXPCProxyCreating> _remoteClientProxy;
    unsigned long long _suspensionCount;
    _Bool _invalidated;
    NSObject<OS_dispatch_queue> *_clientQueue;
    CDUnknownBlockType _clientBlock;
    int _clientState;
    AWAttentionAwarenessConfiguration *_configuration;
}

+ (void)initialize;
@property(copy, nonatomic) AWAttentionAwarenessConfiguration *configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;
- (id)unitTestSampler;
- (void)useUnitTestSampling:(_Bool)arg1;
- (void)notifyPollEventType:(unsigned long long)arg1 event:(id)arg2;
- (void)notifyEvent:(id)arg1;
- (_Bool)invalidateWithError:(id *)arg1;
- (_Bool)suspendWithError:(id *)arg1;
- (_Bool)invalidateRemoteClientWithError:(id *)arg1;
- (_Bool)resumeWithError:(id *)arg1;
- (id)reconnect;
- (_Bool)cancelPollForAttentionWithError:(id *)arg1;
- (_Bool)pollForAttentionWithTimeout:(double)arg1 event:(id *)arg2 error:(id *)arg3;
- (_Bool)pollForAttentionWithTimeout:(double)arg1 queue:(id)arg2 block:(CDUnknownBlockType)arg3 error:(id *)arg4;
- (void)setEventHandlerWithQueue:(id)arg1 block:(CDUnknownBlockType)arg2;
- (_Bool)resetAttentionLostTimeoutWithError:(id *)arg1;
@property(readonly, retain, nonatomic) AWAttentionEvent *lastEvent;
- (_Bool)invokeRequiringClient:(_Bool)arg1 error:(id *)arg2 block:(CDUnknownBlockType)arg3;
- (_Bool)_invokeRequiringClient:(_Bool)arg1 error:(id *)arg2 block:(CDUnknownBlockType)arg3;
- (void)setConfiguration:(id)arg1 shouldReset:(_Bool)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
