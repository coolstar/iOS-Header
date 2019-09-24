//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MobileTimer/MTXPCServer-Protocol.h>

@class MTAlarm, NSString;

@protocol MTAlarmServer <MTXPCServer>
- (void)dismissAlarmWithIdentifier:(NSString *)arg1 dismissAction:(unsigned long long)arg2 withCompletion:(void (^)(NSError *))arg3;
- (void)snoozeAlarmWithIdentifier:(NSString *)arg1 snoozeAction:(unsigned long long)arg2 withCompletion:(void (^)(NSError *))arg3;
- (void)removeAlarm:(MTAlarm *)arg1 withCompletion:(void (^)(NSError *))arg2;
- (void)updateAlarm:(MTAlarm *)arg1 withCompletion:(void (^)(NSError *))arg2;
- (void)addAlarm:(MTAlarm *)arg1 withCompletion:(void (^)(NSError *))arg2;
- (void)getAlarmsWithCompletion:(void (^)(NSArray *, MTAlarm *, MTAlarm *, NSError *))arg1;
@end
