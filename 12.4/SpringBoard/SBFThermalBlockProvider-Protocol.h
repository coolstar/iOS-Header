//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SBFThermalConditionObserver;

@protocol SBFThermalBlockProvider <NSObject>
- (void)removeThermalObserver:(id <SBFThermalConditionObserver>)arg1;
- (void)addThermalObserver:(id <SBFThermalConditionObserver>)arg1;
- (_Bool)isThermalBlocked;
@end

