//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@class NSString;

@interface HDAWDHealthKitExperimentalCondition : PBCodable <NSCopying>
{
    long long _testCondition;
    NSString *_experimentIdentifier;
    struct {
        unsigned int testCondition:1;
    } _has;
}

@property(nonatomic) long long testCondition; // @synthesize testCondition=_testCondition;
@property(retain, nonatomic) NSString *experimentIdentifier; // @synthesize experimentIdentifier=_experimentIdentifier;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasTestCondition;
@property(readonly, nonatomic) _Bool hasExperimentIdentifier;

@end
