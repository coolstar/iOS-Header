//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol _GEODirectionsRequesterServerProxy;

@interface GEODirectionsRequester : NSObject
{
    id <_GEODirectionsRequesterServerProxy> _serverProxy;
}

+ (id)sharedRequester;
+ (void)useRemoteProxy;
+ (void)useLocalProxy;
+ (void)useProxy:(Class)arg1;
- (void).cxx_destruct;
- (void)cancelRequest:(id)arg1;
- (void)startRequest:(id)arg1 auditToken:(id)arg2 skipFinalize:(_Bool)arg3 isDoomRequest:(_Bool)arg4 requestPriority:(id)arg5 callbackQueue:(id)arg6 finished:(CDUnknownBlockType)arg7 networkActivity:(CDUnknownBlockType)arg8 error:(CDUnknownBlockType)arg9;
- (void)startRequest:(id)arg1 auditToken:(id)arg2 skipFinalize:(_Bool)arg3 isDoomRequest:(_Bool)arg4 requestPriority:(id)arg5 finished:(CDUnknownBlockType)arg6 networkActivity:(CDUnknownBlockType)arg7 error:(CDUnknownBlockType)arg8;
- (void)startRequest:(id)arg1 callbackQueue:(id)arg2 finished:(CDUnknownBlockType)arg3 networkActivity:(CDUnknownBlockType)arg4 error:(CDUnknownBlockType)arg5;
- (void)startRequest:(id)arg1 finished:(CDUnknownBlockType)arg2 networkActivity:(CDUnknownBlockType)arg3 error:(CDUnknownBlockType)arg4;
- (void)finalizeRequest:(id)arg1;
- (id)init;

@end
