//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@protocol NSXPCProxyCreating
- (id)remoteObjectProxyWithErrorHandler:(void (^)(NSError *))arg1;
- (id)remoteObjectProxy;

@optional
- (id)synchronousRemoteObjectProxyWithErrorHandler:(void (^)(NSError *))arg1;
@end

