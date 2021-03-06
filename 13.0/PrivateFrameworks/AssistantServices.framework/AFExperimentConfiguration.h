//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/NSCopying-Protocol.h>
#import <AssistantServices/NSSecureCoding-Protocol.h>

@class AFExperimentGroup, NSArray, NSString;

@interface AFExperimentConfiguration : NSObject <NSCopying, NSSecureCoding>
{
    long long _type;
    NSString *_identifier;
    NSString *_version;
    AFExperimentGroup *_controlGroup;
    NSArray *_experimentGroups;
    NSString *_salt;
}

+ (_Bool)supportsSecureCoding;
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;
@property(readonly, copy, nonatomic) NSString *salt; // @synthesize salt=_salt;
@property(readonly, copy, nonatomic) NSArray *experimentGroups; // @synthesize experimentGroups=_experimentGroups;
@property(readonly, copy, nonatomic) AFExperimentGroup *controlGroup; // @synthesize controlGroup=_controlGroup;
@property(readonly, copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)description;
- (id)initWithType:(long long)arg1 identifier:(id)arg2 version:(id)arg3 controlGroup:(id)arg4 experimentGroups:(id)arg5 salt:(id)arg6;
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;

@end

