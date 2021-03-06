//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CalendarDaemon/CalActivatable-Protocol.h>
#import <CalendarDaemon/ClientConnectionDelegate-Protocol.h>
#import <CalendarDaemon/DatabaseChangeHandling-Protocol.h>
#import <CalendarDaemon/NSXPCListenerDelegate-Protocol.h>

@class BirthdayCalendarManager, CDBDataProtectionObserver, LocalAttachmentCleanUpSupport, NSArray, NSLock, NSMutableSet, NSString, NSXPCListener;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface CADServer : NSObject <NSXPCListenerDelegate, ClientConnectionDelegate, DatabaseChangeHandling, CalActivatable>
{
    NSObject<OS_dispatch_queue> *_notificationQueue;
    int _backgroundTaskCount;
    NSXPCListener *_NSXPCListener;
    NSObject<OS_xpc_object> *_xpcConnection;
    NSObject<OS_dispatch_queue> *_xpcQueue;
    BirthdayCalendarManager *_birthdayManager;
    LocalAttachmentCleanUpSupport *_localAttachmentCleanupManager;
    NSMutableSet *_clientConnections;
    NSLock *_connectionLock;
    unsigned long long _birthdayManagerGeneration;
    NSArray *_signalSensors;
    _Bool _active;
    CDBDataProtectionObserver *_dataProtectionObserver;
    NSArray *_modules;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(retain, nonatomic) NSArray *modules; // @synthesize modules=_modules;
@property(retain, nonatomic) CDBDataProtectionObserver *dataProtectionObserver; // @synthesize dataProtectionObserver=_dataProtectionObserver;
- (void).cxx_destruct;
- (void)_enableICloudBackups;
- (void)_dumpState;
- (void)_exitWithStatus:(int)arg1;
- (void)_deactivateAndExitWithStatus:(int)arg1;
- (void)idleChangeTrackingClientCleanupDatabase:(struct CalDatabase *)arg1;
- (void)cleanupDatabase:(struct CalDatabase *)arg1;
- (void)_registerForIdleChangeTrackingClientCleanup;
- (void)_registerForDatabaseCleanup;
- (void)_registerMaintenanceActivities;
- (void)_registerForNotifications;
- (void)_updateOccurrenceCacheTimeZone;
- (_Bool)_trimAndExtendOccurrenceCache;
- (void)_tearDownSignalHandlers;
- (void)_setUpSignalHandlers;
- (void)_stopBirthdayManager;
- (void)_startBirthdayManager;
- (void)_protectedDataDidBecomeAvailable;
- (void)_finishInitializationWithDataAvailable;
- (void)_handleXPCConnection:(id)arg1;
- (void)clientConnectionDied:(id)arg1;
- (void)_handleDatabaseChanged;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)deactivate;
- (void)activate;
- (void)dealloc;
- (id)initWithModules:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

