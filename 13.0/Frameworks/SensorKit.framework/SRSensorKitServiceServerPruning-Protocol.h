//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString;

@protocol SRSensorKitServiceServerPruning
- (void)removeAllSamplesForAllSensors;
- (void)removeAllSamplesForCurrentSensor;
- (void)requestFileHandleForPruningAfterSegment:(NSString *)arg1 reply:(void (^)(NSDictionary *))arg2;
- (void)requestFileHandleForPruningSample:(double)arg1 reply:(void (^)(NSDictionary *))arg2;
- (void)startPruningForSensor:(NSString *)arg1 deviceId:(NSString *)arg2;
@end

