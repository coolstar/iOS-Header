//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SBFloatingApplicationController;

@protocol SBFloatingApplicationControllerInternalDelegate <NSObject>

@optional
- (void)floatingApplicationControllerRelinquishInterfaceOrientationLock:(SBFloatingApplicationController *)arg1;
- (void)floatingApplicationControllerAcquireInterfaceOrientationLock:(SBFloatingApplicationController *)arg1;
- (void)floatingApplicationController:(SBFloatingApplicationController *)arg1 needsVisibleWindow:(_Bool)arg2;
@end

