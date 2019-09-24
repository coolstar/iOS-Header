//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <KeychainCircle/NSSecureCoding-Protocol.h>

@class NSString;

@interface KCPairingChannelContext : NSObject <NSSecureCoding>
{
    NSString *_model;
    NSString *_modelVersion;
    NSString *_modelClass;
    NSString *_osVersion;
    NSString *_uniqueDeviceID;
    NSString *_uniqueClientID;
    NSString *_intent;
}

+ (_Bool)supportsSecureCoding;
@property(retain) NSString *intent; // @synthesize intent=_intent;
@property(retain) NSString *uniqueClientID; // @synthesize uniqueClientID=_uniqueClientID;
@property(retain) NSString *uniqueDeviceID; // @synthesize uniqueDeviceID=_uniqueDeviceID;
@property(retain) NSString *osVersion; // @synthesize osVersion=_osVersion;
@property(retain) NSString *modelClass; // @synthesize modelClass=_modelClass;
@property(retain) NSString *modelVersion; // @synthesize modelVersion=_modelVersion;
@property(retain) NSString *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;

@end
