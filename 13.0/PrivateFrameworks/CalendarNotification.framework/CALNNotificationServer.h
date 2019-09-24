//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CalendarNotification/CADModule-Protocol.h>
#import <CalendarNotification/CALNNotificationManager-Protocol.h>
#import <CalendarNotification/CALNUserNotificationCenterDelegate-Protocol.h>

@class NSArray, NSMutableDictionary, NSString;
@protocol CALNAnalyticsHandler, CALNNotificationStorage, CALNUserNotificationCenter, OS_dispatch_queue;

@interface CALNNotificationServer : NSObject <CADModule, CALNUserNotificationCenterDelegate, CALNNotificationManager>
{
    _Bool _active;
    _Bool _isProtectedDataAvailable;
    id <CALNUserNotificationCenter> _userNotificationCenter;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSMutableDictionary *_notificationSourceMap;
    id <CALNNotificationStorage> _storage;
    id <CALNAnalyticsHandler> _analyticsHandler;
}

@property(nonatomic) _Bool isProtectedDataAvailable; // @synthesize isProtectedDataAvailable=_isProtectedDataAvailable;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(readonly, nonatomic) id <CALNAnalyticsHandler> analyticsHandler; // @synthesize analyticsHandler=_analyticsHandler;
@property(retain, nonatomic) id <CALNNotificationStorage> storage; // @synthesize storage=_storage;
@property(retain, nonatomic) NSMutableDictionary *notificationSourceMap; // @synthesize notificationSourceMap=_notificationSourceMap;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) id <CALNUserNotificationCenter> userNotificationCenter; // @synthesize userNotificationCenter=_userNotificationCenter;
- (void).cxx_destruct;
- (id)_notificationRecordResponseFromNotificationResponse:(id)arg1;
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)userNotificationCenter:(id)arg1 willPresentNotification:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (id)_notificationRecordWithSourceIdentifier:(id)arg1 sourceClientIdentifier:(id)arg2;
- (void)_removeRecordWithSourceIdentifier:(id)arg1 sourceClientIdentifier:(id)arg2;
- (void)removeRecordWithSourceIdentifier:(id)arg1 sourceClientIdentifier:(id)arg2;
- (void)_updateRecord:(id)arg1;
- (void)updateRecord:(id)arg1;
- (void)_addRecord:(id)arg1;
- (void)addRecord:(id)arg1;
- (id)_fetchRecordsWithSourceIdentifier:(id)arg1;
- (id)fetchRecordsWithSourceIdentifier:(id)arg1;
- (void)protectedDataDidBecomeAvailable;
- (void)handleBTAJob:(id)arg1 named:(const char *)arg2;
- (void)didRegisterForBackgroundTaskAgentJobs;
- (void)receivedAlarmNamed:(id)arg1;
- (void)didRegisterForAlarms;
- (void)receivedNotificationNamed:(id)arg1;
- (id)notificationSourceForSourceIdentifier:(id)arg1;
@property(readonly, nonatomic) NSArray *notificationSources;
- (void)_didSetNotificationSources:(id)arg1;
- (void)setNotificationSources:(id)arg1;
- (void)_deactivate;
- (void)deactivate;
- (void)_activate;
- (void)activate;
- (id)_notificationSourceMapWithNotificationSources:(id)arg1;
- (id)initWithUserNotificationCenter:(id)arg1 storage:(id)arg2 analyticsHandler:(id)arg3 deviceLockObserver:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
