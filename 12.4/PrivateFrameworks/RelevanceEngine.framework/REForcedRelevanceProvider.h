//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngine/RERelevanceProvider.h>

@interface REForcedRelevanceProvider : RERelevanceProvider
{
    _Bool _isHistoric;
    float _relevance;
}

+ (id)relevanceSimulatorID;
@property(readonly, nonatomic) _Bool isHistoric; // @synthesize isHistoric=_isHistoric;
@property(readonly, nonatomic) float relevance; // @synthesize relevance=_relevance;
- (id)description;
- (unsigned long long)_hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryEncoding;
- (id)initWithDictionary:(id)arg1;
- (id)initWithForcedRelevance:(float)arg1 isHistoric:(_Bool)arg2;
- (id)initWithForcedRelevance:(float)arg1;

@end
