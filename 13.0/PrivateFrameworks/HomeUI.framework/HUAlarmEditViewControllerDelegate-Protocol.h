//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/NSObject-Protocol.h>

@class HUAlarmEditViewController, MTAlarm;

@protocol HUAlarmEditViewControllerDelegate <NSObject>
- (void)alarmEditController:(HUAlarmEditViewController *)arg1 didDeleteAlarm:(MTAlarm *)arg2;
- (void)alarmEditController:(HUAlarmEditViewController *)arg1 didEditAlarm:(MTAlarm *)arg2;
- (void)alarmEditController:(HUAlarmEditViewController *)arg1 didAddAlarm:(MTAlarm *)arg2;
- (void)alarmEditControllerDidCancel:(HUAlarmEditViewController *)arg1;
@end
