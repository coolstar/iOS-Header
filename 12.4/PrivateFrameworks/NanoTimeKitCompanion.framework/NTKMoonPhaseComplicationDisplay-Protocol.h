//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKComplicationDisplay-Protocol.h>

@class NSDate, NSString;

@protocol NTKMoonPhaseComplicationDisplay <NTKComplicationDisplay>

@optional
- (void)setPaused:(_Bool)arg1;
- (void)setLocked:(_Bool)arg1;
- (void)setMoonEvent:(long long)arg1 date:(NSDate *)arg2;
- (void)setPhaseNumber:(unsigned long long)arg1 hemisphere:(long long)arg2;
- (void)setPhaseName:(NSString *)arg1;
@end
