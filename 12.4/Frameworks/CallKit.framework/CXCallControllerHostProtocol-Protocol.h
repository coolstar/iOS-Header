//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CallKit/NSObject-Protocol.h>

@class CXTransaction;

@protocol CXCallControllerHostProtocol <NSObject>
- (oneway void)requestTransaction:(CXTransaction *)arg1 reply:(void (^)(NSError *))arg2;
- (oneway void)requestCalls:(void (^)(NSArray *))arg1;
@end
