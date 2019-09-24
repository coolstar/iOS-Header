//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <VectorKit/NSCopying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VKPShieldIndexEntry : PBCodable <NSCopying>
{
    CDStruct_95bda58d _defaultForFeatureTypes;
    CDStruct_95bda58d _shieldTypes;
    NSString *_artworkIdentifier;
}

@property(retain, nonatomic) NSString *artworkIdentifier; // @synthesize artworkIdentifier=_artworkIdentifier;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (void)setDefaultForFeatureTypes:(int *)arg1 count:(unsigned long long)arg2;
- (int)defaultForFeatureTypeAtIndex:(unsigned long long)arg1;
- (void)addDefaultForFeatureType:(int)arg1;
- (void)clearDefaultForFeatureTypes;
@property(readonly, nonatomic) int *defaultForFeatureTypes;
@property(readonly, nonatomic) unsigned long long defaultForFeatureTypesCount;
- (void)setShieldTypes:(int *)arg1 count:(unsigned long long)arg2;
- (int)shieldTypesAtIndex:(unsigned long long)arg1;
- (void)addShieldTypes:(int)arg1;
- (void)clearShieldTypes;
@property(readonly, nonatomic) int *shieldTypes;
@property(readonly, nonatomic) unsigned long long shieldTypesCount;
@property(readonly, nonatomic) _Bool hasArtworkIdentifier;
- (void)dealloc;

@end
