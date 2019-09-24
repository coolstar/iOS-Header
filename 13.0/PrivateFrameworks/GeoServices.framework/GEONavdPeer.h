//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEONavdClientInfo, NSMutableDictionary, NSXPCConnection;

@interface GEONavdPeer : NSObject
{
    NSXPCConnection *_connection;
    NSMutableDictionary *_entitlementCache;
    GEONavdClientInfo *_clientInfo;
    _Bool _expectingUpdates;
}

@property(nonatomic) _Bool expectingUpdates; // @synthesize expectingUpdates=_expectingUpdates;
@property(readonly, nonatomic) GEONavdClientInfo *clientInfo; // @synthesize clientInfo=_clientInfo;
@property(readonly, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)hasEntitlement:(id)arg1;
- (void)updateConnection:(id)arg1;
- (id)initWithXPCConnection:(id)arg1;

@end
