//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/NSObject-Protocol.h>

@class HDXPCClient, NSXPCListenerEndpoint;

@protocol HDHealthDaemonExtension <NSObject>

@optional
- (NSXPCListenerEndpoint *)listenerEndpointForClient:(HDXPCClient *)arg1 error:(id *)arg2;
@end
