//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBFAnalyticsBackendEventHandling-Protocol.h>

@class NSString, PETDistributionEventTracker;

@interface SBSwitcherToAppTransitionMetric : NSObject <SBFAnalyticsBackendEventHandling>
{
    PETDistributionEventTracker *_tracker;
}

- (void).cxx_destruct;
- (_Bool)handleEvent:(unsigned long long)arg1 withContext:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
