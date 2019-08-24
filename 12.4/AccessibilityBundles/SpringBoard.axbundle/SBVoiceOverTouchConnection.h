//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SBVoiceOverTouchLabelElementAlertItem;

@interface SBVoiceOverTouchConnection : NSObject
{
    struct __CFMachPort *_votMachPort;
    SBVoiceOverTouchLabelElementAlertItem *_labelAlert;
    _Bool _screenCurtainEnabled;
    _Bool inVoiceOverPassthroughMode;
}

+ (id)defaultConnection;
@property(nonatomic) _Bool inVoiceOverPassthroughMode; // @synthesize inVoiceOverPassthroughMode;
@property(nonatomic) _Bool screenCurtainEnabled; // @synthesize screenCurtainEnabled=_screenCurtainEnabled;
- (void).cxx_destruct;
- (_Bool)voiceOverTouchLabelElementAlertItem:(id)arg1 textFieldShouldReturn:(id)arg2;
- (void)voiceOverTouchLabelElementAlertItemDidCancel:(id)arg1;
- (void)voiceOverTouchLabelElementAlertItemDidAccept:(id)arg1 withTextField:(id)arg2;
- (void)_dismissLabelAlert;
- (void)setScreenCurtainEnabled:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_programmaticAppSwitch:(_Bool)arg1;
- (void)setLabelElementPanelVisible:(_Bool)arg1 initialValue:(id)arg2;
@property(readonly, nonatomic) _Bool elementLabelerVisible;
- (void)dealloc;
- (void)tearDownVoiceOverTouchConnection;
- (void)_registerForMachConnection;
- (void)_registerVOTConnectionWithPort:(unsigned int)arg1;

@end
