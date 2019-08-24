//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDStandardTaskServer.h>

#import <HealthDaemon/HDWorkoutDataDestination-Protocol.h>
#import <HealthDaemon/HDWorkoutDataSource-Protocol.h>
#import <HealthDaemon/HKDataFlowLinkProcessor-Protocol.h>
#import <HealthDaemon/HKGymKitDataSourceServerInterface-Protocol.h>

@class HDWorkoutBasicDataSource, HKDataFlowLink, HKSource, HKWorkoutDataSourceConfiguration, NSObject, NSString, NSUUID;
@protocol HDWorkoutDataAccumulator, OS_dispatch_queue;

@interface HDGymKitDataSource : HDStandardTaskServer <HKGymKitDataSourceServerInterface, HKDataFlowLinkProcessor, HDWorkoutDataSource, HDWorkoutDataDestination>
{
    HKWorkoutDataSourceConfiguration *_dataSourceConfiguration;
    HDWorkoutBasicDataSource *_basicDataSource;
    NSObject<OS_dispatch_queue> *_queue;
    HKDataFlowLink *_workoutDataFlowLink;
    HKSource *_localDeviceSource;
}

+ (_Bool)validateConfiguration:(id)arg1 error:(out id *)arg2;
+ (Class)configurationClass;
+ (id)requiredEntitlements;
+ (id)taskIdentifier;
- (void).cxx_destruct;
- (id)_queue_localDeviceSource;
- (_Bool)_queue_shouldAddSample:(id)arg1;
- (id)_localDevicePreferredSampleTypes;
@property(readonly, nonatomic) id <HDWorkoutDataAccumulator> workoutDataAccumulator;
- (void)addMetadata:(id)arg1 dataSource:(id)arg2;
- (void)addWorkoutEvents:(id)arg1 dataSource:(id)arg2;
- (void)addSamples:(id)arg1 dataSource:(id)arg2;
@property(readonly) unsigned long long workoutDataDestinationState;
- (id)quantityTypesToIncludeWhilePaused;
- (void)workoutDataDestination:(id)arg1 requestsFinalDataFrom:(id)arg2 to:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)workoutDataDestination:(id)arg1 didChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (void)workoutDataDestination:(id)arg1 requestsDataFrom:(id)arg2 to:(id)arg3;
@property(readonly, copy) NSUUID *workoutDataProcessorUUID;
@property(readonly) HKDataFlowLink *workoutDataFlowLink;
- (void)connectionInvalidated;
- (id)remoteInterface;
- (id)exportedInterface;
- (void)remote_setDataSourceConfiguration:(id)arg1;
- (void)remote_startTaskServerIfNeeded;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 profile:(id)arg4 delegate:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
