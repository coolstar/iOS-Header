//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IDSHashPersistenceAWDLogging : NSObject
{
}

+ (id)sharedInstance;
- (void)duplicateMessageEncounted;
- (id)_metricContainerForMetricType:(unsigned int)arg1;
- (void)_submitAWDMetric:(id)arg1 withContainer:(id)arg2;
- (_Bool)shouldSubmit;
- (void)dealloc;
- (id)init;

@end
