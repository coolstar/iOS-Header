//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SiriInstrumentation/NSSecureCoding-Protocol.h>
#import <SiriInstrumentation/SISchemaLocation-Protocol.h>

@class NSData, NSString;

@interface SISchemaLocation : PBCodable <SISchemaLocation, NSSecureCoding>
{
    float _latitude;
    float _longitude;
    float _horizontalAccuracyInMeters;
}

@property(nonatomic) float horizontalAccuracyInMeters; // @synthesize horizontalAccuracyInMeters=_horizontalAccuracyInMeters;
@property(nonatomic) float longitude; // @synthesize longitude=_longitude;
@property(nonatomic) float latitude; // @synthesize latitude=_latitude;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
