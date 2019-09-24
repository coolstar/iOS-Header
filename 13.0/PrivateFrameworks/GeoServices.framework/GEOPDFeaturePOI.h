//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDVenueBuilding, GEOPDVenueContainer, GEOPDVenueDirectoryGroup, NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDFeaturePOI : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    CDStruct_158f0f88 _readerMark;
    PBUnknownFields *_unknownFields;
    GEOPDVenueBuilding *_building;
    GEOPDVenueDirectoryGroup *_directoryGroup;
    NSMutableArray *_levels;
    GEOPDVenueContainer *_venueContainer;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_building:1;
        unsigned int read_directoryGroup:1;
        unsigned int read_levels:1;
        unsigned int read_venueContainer:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_building:1;
        unsigned int wrote_directoryGroup:1;
        unsigned int wrote_levels:1;
        unsigned int wrote_venueContainer:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
+ (Class)levelType;
- (void).cxx_destruct;
- (void)clearUnknownFields:(_Bool)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(retain, nonatomic) GEOPDVenueDirectoryGroup *directoryGroup;
@property(readonly, nonatomic) _Bool hasDirectoryGroup;
- (void)_readDirectoryGroup;
- (id)levelAtIndex:(unsigned long long)arg1;
- (unsigned long long)levelsCount;
- (void)_addNoFlagsLevel:(id)arg1;
- (void)addLevel:(id)arg1;
- (void)clearLevels;
@property(retain, nonatomic) NSMutableArray *levels;
- (void)_readLevels;
@property(retain, nonatomic) GEOPDVenueBuilding *building;
@property(readonly, nonatomic) _Bool hasBuilding;
- (void)_readBuilding;
@property(retain, nonatomic) GEOPDVenueContainer *venueContainer;
@property(readonly, nonatomic) _Bool hasVenueContainer;
- (void)_readVenueContainer;

@end
