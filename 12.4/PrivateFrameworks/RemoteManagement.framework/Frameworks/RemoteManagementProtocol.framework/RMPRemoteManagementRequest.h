//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString;

@interface RMPRemoteManagementRequest : CEMPayloadBase
{
    NSString *_requestUUID;
    NSString *_requestType;
}

+ (_Bool)supportsSecureCoding;
+ (id)requestForPayload:(id)arg1 error:(id *)arg2;
@property(copy, nonatomic) NSString *requestType; // @synthesize requestType=_requestType;
@property(copy, nonatomic) NSString *requestUUID; // @synthesize requestUUID=_requestUUID;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)serialize;
- (_Bool)loadRequestFromDictionary:(id)arg1 error:(id *)arg2;

@end
