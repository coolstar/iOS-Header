//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/NSObject-Protocol.h>

@class HKCloudSyncObserverStatus;

@protocol HKCloudSyncObserverClientInterface <NSObject>
- (void)clientRemote_didUpdateObserverWithSyncStatus:(HKCloudSyncObserverStatus *)arg1;
- (void)clientRemote_syncDidStart;
@end
