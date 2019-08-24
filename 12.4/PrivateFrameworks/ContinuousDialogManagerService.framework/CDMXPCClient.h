//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContinuousDialogManagerService/CDMXPCListenerService-Protocol.h>
#import <ContinuousDialogManagerService/CDMXPCListenerServiceDelegate-Protocol.h>

@class NSString, NSXPCConnection;
@protocol CDMXPCClientDelegate;

@interface CDMXPCClient : NSObject <CDMXPCListenerServiceDelegate, CDMXPCListenerService>
{
    NSXPCConnection *_connection;
    id <CDMXPCClientDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)handleServiceAceUpdate:(id)arg1;
- (void)handleClientAceUpdate:(id)arg1;
- (id)_remoteObjectProxy;
- (void)_clearConnectionWithError:(id)arg1;
- (id)_connection;
- (void)disconnect;
- (void)connect;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
