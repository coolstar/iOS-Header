//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/NSObject-Protocol.h>

@class NSSet;

@protocol PGGraphUpdateInventory <NSObject>
@property(readonly, nonatomic) NSSet *identifiersForMomentRelatedToDeletedPersons;
@property(readonly, nonatomic) NSSet *identifiersForMomentRelatedToUpdatedPersons;
@property(readonly, nonatomic) NSSet *localIdentifiersOfPersonsToUpdate;
@property(readonly, nonatomic) NSSet *localIdentifiersOfPersonsToDelete;
@property(readonly, nonatomic) NSSet *localIdentifiersOfPersonsToInsert;
@property(readonly, nonatomic) NSSet *localIdentifiersOfHighlightsToUpdate;
@property(readonly, nonatomic) NSSet *localIdentifiersOfHighlightsToDelete;
@property(readonly, nonatomic) NSSet *localIdentifiersOfHighlightsToInsert;
@property(readonly, nonatomic) NSSet *localIdentifiersOfMomentsToUpdate;
@property(readonly, nonatomic) NSSet *localIdentifiersOfMomentsToDelete;
@property(readonly, nonatomic) NSSet *localIdentifiersOfMomentsToInsert;
@property(readonly, nonatomic) _Bool hasPersonsToUpdate;
@property(readonly, nonatomic) _Bool hasPersonsToDelete;
@property(readonly, nonatomic) _Bool hasPersonsToInsert;
@property(readonly, nonatomic) _Bool hasHighlightDayGroupsToInsert;
@property(readonly, nonatomic) _Bool hasHighlightsToUpdate;
@property(readonly, nonatomic) _Bool hasHighlightsToDelete;
@property(readonly, nonatomic) _Bool hasHighlightsToInsert;
@property(readonly, nonatomic) _Bool hasMomentsToUpdate;
@property(readonly, nonatomic) _Bool hasMomentsToDelete;
@property(readonly, nonatomic) _Bool hasMomentsToInsert;
@property(nonatomic) _Bool isResumingFullAnalysis;
@property(readonly, nonatomic) long long updateType;
- (NSSet *)highlightsToProcessForKind:(unsigned short)arg1 withHighlightUpdateTypes:(unsigned long long)arg2 includeHighlightsToIngest:(_Bool)arg3;
- (NSSet *)momentsToProcessForMomentUpdateTypes:(unsigned long long)arg1 includeMomentsToIngest:(_Bool)arg2;
@end
