//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBIntentResponse-Protocol.h>

@class NSString, _INPBIntentResponsePayloadFailure, _INPBIntentResponsePayloadSuccess, _INPBUserActivity;

@interface _INPBIntentResponse : PBCodable <_INPBIntentResponse, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int requiresAuthentication:1;
        unsigned int requiresProtectedData:1;
        unsigned int type:1;
    } _has;
    _Bool _requiresAuthentication;
    _Bool _requiresProtectedData;
    int _type;
    _INPBIntentResponsePayloadFailure *_payloadFailure;
    _INPBIntentResponsePayloadSuccess *_payloadSuccess;
    _INPBUserActivity *_userActivity;
}

@property(retain, nonatomic) _INPBUserActivity *userActivity; // @synthesize userActivity=_userActivity;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) _Bool requiresProtectedData; // @synthesize requiresProtectedData=_requiresProtectedData;
@property(nonatomic) _Bool requiresAuthentication; // @synthesize requiresAuthentication=_requiresAuthentication;
@property(retain, nonatomic) _INPBIntentResponsePayloadSuccess *payloadSuccess; // @synthesize payloadSuccess=_payloadSuccess;
@property(retain, nonatomic) _INPBIntentResponsePayloadFailure *payloadFailure; // @synthesize payloadFailure=_payloadFailure;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(readonly, nonatomic) _Bool hasUserActivity;
- (int)StringAsType:(id)arg1;
- (id)typeAsString:(int)arg1;
@property(nonatomic) _Bool hasType;
@property(nonatomic) _Bool hasRequiresProtectedData;
@property(nonatomic) _Bool hasRequiresAuthentication;
@property(readonly, nonatomic) _Bool hasPayloadSuccess;
@property(readonly, nonatomic) _Bool hasPayloadFailure;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
