//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface _HKWeightedAverageBuilder : NSObject
{
    double _startTime;
}

- (id)_weightedAverageStatisticsWithValuesAndTimes:(vector_b70ce118 *)arg1 unit:(id)arg2 sorted:(_Bool)arg3 error:(id *)arg4;
- (id)weightedAverageWithSamples:(id)arg1 sorted:(_Bool)arg2 error:(id *)arg3;
- (id)initWithStartDate:(id)arg1;

@end
