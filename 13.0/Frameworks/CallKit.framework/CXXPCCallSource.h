//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CallKit/CXCallSource.h>

@class NSSet, NSString, NSURL, NSXPCConnection;

@interface CXXPCCallSource : CXCallSource
{
    _Bool _hasVoIPBackgroundMode;
    NSString *_bundleIdentifier;
    NSURL *_bundleURL;
    NSXPCConnection *_connection;
    NSString *_applicationIdentifier;
    NSSet *_capabilities;
}

@property(nonatomic) _Bool hasVoIPBackgroundMode; // @synthesize hasVoIPBackgroundMode=_hasVoIPBackgroundMode;
@property(copy, nonatomic) NSSet *capabilities; // @synthesize capabilities=_capabilities;
@property(copy, nonatomic) NSString *applicationIdentifier; // @synthesize applicationIdentifier=_applicationIdentifier;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) NSURL *bundleURL; // @synthesize bundleURL=_bundleURL;
@property(retain, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (void).cxx_destruct;
- (id)vendorProtocolDelegate;
- (_Bool)isPermittedToUsePrivateAPI;
- (_Bool)isPermittedToUsePublicAPI;
- (int)processIdentifier;
- (id)identifier;
- (_Bool)isConnected;
- (void)dealloc;
- (id)initWithConnection:(id)arg1;
- (id)init;

@end

