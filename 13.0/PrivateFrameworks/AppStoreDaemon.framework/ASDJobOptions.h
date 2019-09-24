//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppStoreDaemon/NSSecureCoding-Protocol.h>

@class ASDJobManifest, NSXPCConnection;

@interface ASDJobOptions : NSObject <NSSecureCoding>
{
    NSXPCConnection *_endpoint;
    ASDJobManifest *_manifest;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) ASDJobManifest *manifest; // @synthesize manifest=_manifest;
@property(retain, nonatomic) NSXPCConnection *endpoint; // @synthesize endpoint=_endpoint;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
