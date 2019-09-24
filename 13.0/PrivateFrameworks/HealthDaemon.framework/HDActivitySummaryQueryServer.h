//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDQueryServer.h>

@class HDActivitySummaryQueryHelper, HDSQLitePredicate;

@interface HDActivitySummaryQueryServer : HDQueryServer
{
    _Bool _deliversUpdates;
    long long _lastProcessedAnchor;
    HDSQLitePredicate *_filterPredicate;
    HDActivitySummaryQueryHelper *_queryHelper;
    _Bool _hasSentInitialResults;
}

+ (id)requiredEntitlements;
+ (Class)queryClass;
- (void).cxx_destruct;
- (void)_setUpInitialQueryHelper;
- (void)_queue_deliverActivitySummariesToClient:(id)arg1 isFinalBatch:(_Bool)arg2 clearPendingBatches:(_Bool)arg3;
- (void)_queue_deliverErrorToClient:(id)arg1;
- (void)_queue_deliverResultsWithActivitySummaries:(id)arg1 isFinalBatch:(_Bool)arg2 clearPendingBatches:(_Bool)arg3 error:(id)arg4;
- (void)_queue_stop;
- (void)_queue_start;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;

@end
