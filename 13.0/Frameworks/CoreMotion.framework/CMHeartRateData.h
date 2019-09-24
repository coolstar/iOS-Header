//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreMotion/CMLogItem.h>

#import <CoreMotion/SRSampling-Protocol.h>

@class NSDate, NSString;

@interface CMHeartRateData : CMLogItem <SRSampling>
{
    _Bool _error;
    double _heartRate;
    double _confidence;
    NSDate *_startDate;
    long long _dataSource;
    long long _mode;
}

+ (id)modeName:(long long)arg1;
+ (id)dataSourceName:(long long)arg1;
+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) long long mode; // @synthesize mode=_mode;
@property(readonly, nonatomic) long long dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) _Bool error; // @synthesize error=_error;
@property(readonly, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(readonly, nonatomic) double confidence; // @synthesize confidence=_confidence;
@property(readonly, nonatomic) double heartRate; // @synthesize heartRate=_heartRate;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithHeartRate:(double)arg1 confidence:(double)arg2 timestamp:(double)arg3 startDate:(id)arg4 error:(_Bool)arg5 dataSource:(long long)arg6 mode:(long long)arg7;
- (id)initWithBinarySampleRepresentation:(id)arg1 metadata:(id)arg2 timestamp:(double)arg3;
- (id)binarySampleRepresentation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
