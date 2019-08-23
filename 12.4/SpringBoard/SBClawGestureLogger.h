//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableSet;

@interface SBClawGestureLogger : NSObject
{
    _Bool _didTriggerSOS;
    NSDate *_clawEventTimestamp;
    NSMutableSet *_activePressTypes;
    NSMutableSet *_participatingPressTypes;
}

@property(retain, nonatomic) NSMutableSet *participatingPressTypes; // @synthesize participatingPressTypes=_participatingPressTypes;
@property(retain, nonatomic) NSMutableSet *activePressTypes; // @synthesize activePressTypes=_activePressTypes;
@property(nonatomic) _Bool didTriggerSOS; // @synthesize didTriggerSOS=_didTriggerSOS;
@property(copy, nonatomic) NSDate *clawEventTimestamp; // @synthesize clawEventTimestamp=_clawEventTimestamp;
- (void).cxx_destruct;
- (void)_resetLoggedData;
- (void)_publishLoggedData;
- (void)noteSOSTriggered;
- (void)noteGesturePressType:(long long)arg1 withPressPhase:(long long)arg2;
- (id)init;

@end

