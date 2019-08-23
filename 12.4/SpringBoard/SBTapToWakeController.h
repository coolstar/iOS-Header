//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, SBFTapToWakeGestureRecognizer, SBIdleTimerDefaults;
@protocol SBTapToWakeDelegate;

@interface SBTapToWakeController : NSObject <UIGestureRecognizerDelegate>
{
    _Bool _screenOff;
    _Bool _shouldTapToWake;
    id <SBTapToWakeDelegate> _delegate;
    SBFTapToWakeGestureRecognizer *_tapToWakeGestureRecognizer;
    SBFTapToWakeGestureRecognizer *_pencilToWakeGestureRecognizer;
    SBIdleTimerDefaults *_idleTimerDefaults;
}

+ (_Bool)isTapToWakeSupported;
@property(retain, nonatomic) SBIdleTimerDefaults *idleTimerDefaults; // @synthesize idleTimerDefaults=_idleTimerDefaults;
@property(retain, nonatomic) SBFTapToWakeGestureRecognizer *pencilToWakeGestureRecognizer; // @synthesize pencilToWakeGestureRecognizer=_pencilToWakeGestureRecognizer;
@property(retain, nonatomic) SBFTapToWakeGestureRecognizer *tapToWakeGestureRecognizer; // @synthesize tapToWakeGestureRecognizer=_tapToWakeGestureRecognizer;
@property(readonly, nonatomic) _Bool shouldTapToWake; // @synthesize shouldTapToWake=_shouldTapToWake;
@property(nonatomic, getter=isScreenOff) _Bool screenOff; // @synthesize screenOff=_screenOff;
@property(nonatomic) __weak id <SBTapToWakeDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)pencilToWakeDidRecognize:(id)arg1;
- (void)tapToWakeDidRecognize:(id)arg1;
- (void)_evaluateEnablement;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

