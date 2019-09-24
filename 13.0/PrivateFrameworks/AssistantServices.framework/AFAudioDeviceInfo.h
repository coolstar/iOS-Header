//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/NSCopying-Protocol.h>
#import <AssistantServices/NSSecureCoding-Protocol.h>

@class NSString, NSUUID;

@interface AFAudioDeviceInfo : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _isRemoteDevice;
    NSString *_route;
    NSUUID *_deviceUID;
}

+ (_Bool)supportsSecureCoding;
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;
@property(readonly, copy, nonatomic) NSUUID *deviceUID; // @synthesize deviceUID=_deviceUID;
@property(readonly, nonatomic) _Bool isRemoteDevice; // @synthesize isRemoteDevice=_isRemoteDevice;
@property(readonly, copy, nonatomic) NSString *route; // @synthesize route=_route;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)description;
- (id)initWithRoute:(id)arg1 isRemoteDevice:(_Bool)arg2 deviceUID:(id)arg3;
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;

@end
