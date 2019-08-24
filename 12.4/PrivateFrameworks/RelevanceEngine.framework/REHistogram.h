//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RelevanceEngine/NSCopying-Protocol.h>

@class REFeature, REFeatureValue;

@interface REHistogram : NSObject <NSCopying>
{
    REFeature *_feature;
}

@property(readonly, nonatomic) REFeature *feature; // @synthesize feature=_feature;
- (void).cxx_destruct;
- (void)enumerateValuesUsingBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)countOfValuesBetweenMinValue:(id)arg1 maxValue:(id)arg2;
- (unsigned long long)countForValue:(id)arg1;
- (void)removeValue:(id)arg1;
- (void)addValue:(id)arg1;
@property(readonly, nonatomic) REFeatureValue *standardDeviation;
@property(readonly, nonatomic) REFeatureValue *mean;
@property(readonly, nonatomic) unsigned long long count;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithFeature:(id)arg1 binningSize:(id)arg2;
- (id)initWithFeature:(id)arg1;

@end
