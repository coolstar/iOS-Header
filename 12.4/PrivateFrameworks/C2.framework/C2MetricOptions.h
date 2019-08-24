//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, NSURL;

@interface C2MetricOptions : NSObject
{
    _Bool _anonymous;
    _Bool _pushTrigger;
    NSURL *_c2MetricsEndpoint;
    unsigned long long _reportFrequency;
    unsigned long long _reportFrequencyBase;
    unsigned long long _reportClientOperationFrequency;
    unsigned long long _reportClientOperationFrequencyBase;
    unsigned long long _reportOperationGroupFrequency;
    unsigned long long _reportOperationGroupFrequencyBase;
    NSString *_clientProcessVersion;
    NSString *_clientProcessBundleId;
    NSString *_container;
    NSString *_environment;
    NSArray *_operationGroups;
    NSArray *_clientOperations;
    CDUnknownBlockType _testBehavior_reportMetric;
}

@property(copy, nonatomic) CDUnknownBlockType testBehavior_reportMetric; // @synthesize testBehavior_reportMetric=_testBehavior_reportMetric;
@property(nonatomic) _Bool pushTrigger; // @synthesize pushTrigger=_pushTrigger;
@property(retain, nonatomic) NSArray *clientOperations; // @synthesize clientOperations=_clientOperations;
@property(retain, nonatomic) NSArray *operationGroups; // @synthesize operationGroups=_operationGroups;
@property(nonatomic) _Bool anonymous; // @synthesize anonymous=_anonymous;
@property(retain, nonatomic) NSString *environment; // @synthesize environment=_environment;
@property(retain, nonatomic) NSString *container; // @synthesize container=_container;
@property(retain, nonatomic) NSString *clientProcessBundleId; // @synthesize clientProcessBundleId=_clientProcessBundleId;
@property(retain, nonatomic) NSString *clientProcessVersion; // @synthesize clientProcessVersion=_clientProcessVersion;
@property(nonatomic) unsigned long long reportOperationGroupFrequencyBase; // @synthesize reportOperationGroupFrequencyBase=_reportOperationGroupFrequencyBase;
@property(nonatomic) unsigned long long reportOperationGroupFrequency; // @synthesize reportOperationGroupFrequency=_reportOperationGroupFrequency;
@property(nonatomic) unsigned long long reportClientOperationFrequencyBase; // @synthesize reportClientOperationFrequencyBase=_reportClientOperationFrequencyBase;
@property(nonatomic) unsigned long long reportClientOperationFrequency; // @synthesize reportClientOperationFrequency=_reportClientOperationFrequency;
@property(nonatomic) unsigned long long reportFrequencyBase; // @synthesize reportFrequencyBase=_reportFrequencyBase;
@property(nonatomic) unsigned long long reportFrequency; // @synthesize reportFrequency=_reportFrequency;
@property(retain, nonatomic) NSURL *c2MetricsEndpoint; // @synthesize c2MetricsEndpoint=_c2MetricsEndpoint;
- (void).cxx_destruct;
- (_Bool)operationGroupTriggered:(id)arg1;
- (_Bool)clientOperationTriggered:(id)arg1;
- (int)generateTriggerWithResponseHeader:(unsigned char)arg1;
- (id)generateCloudKitInfo;
- (id)init;

@end
