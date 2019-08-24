//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/_HKFilter.h>

@interface _HKAppleWatchSampleFilter : _HKFilter
{
    _Bool _matchAppleWatchSamples;
}

+ (_Bool)supportsSecureCoding;
+ (id)filterForKeyPath:(id)arg1 predicateOperatorType:(unsigned long long)arg2 value:(id)arg3 dataTypes:(id)arg4;
+ (id)filterMatchingAppleWatchSamples:(_Bool)arg1;
@property(readonly, nonatomic) _Bool matchAppleWatchSamples; // @synthesize matchAppleWatchSamples=_matchAppleWatchSamples;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)acceptsDataObject:(id)arg1;

@end
