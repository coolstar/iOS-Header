//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDBlockDispatcher-Protocol.h>

@class HDMaintenanceWorkCoordinator, NSString;

@interface HDMaintenanceWorkCoordinatorBlockDispatcher : NSObject <HDBlockDispatcher>
{
    HDMaintenanceWorkCoordinator *_maintenanceWorkCoordinator;
}

- (void).cxx_destruct;
- (void)dispatchBlock:(CDUnknownBlockType)arg1 name:(id)arg2;
- (id)initWithMaintenanceWorkCoordinator:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
