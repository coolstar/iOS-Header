//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardUI/SBAlertItem.h>

@class NSString;

@interface SBBluetoothAccessoryLowPowerAlertItem : SBAlertItem
{
    long long _batteryLevel;
    NSString *_accessoryName;
}

- (void).cxx_destruct;
- (_Bool)unlocksScreen;
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
- (id)initWithAccessory:(id)arg1 batteryLevel:(long long)arg2;

@end

