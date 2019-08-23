//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SBTestRecipe-Protocol.h"

@class NSString, SBBiometricMonitorTestRecipeDummyDataSource, SBBiometricMonitorUI;

@interface SBBiometricMonitorTestRecipe : NSObject <SBTestRecipe>
{
    SBBiometricMonitorUI *_monitorUI;
    SBBiometricMonitorTestRecipeDummyDataSource *_dataSource;
}

+ (id)title;
- (void).cxx_destruct;
- (void)handleVolumeDecrease;
- (void)handleVolumeIncrease;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

