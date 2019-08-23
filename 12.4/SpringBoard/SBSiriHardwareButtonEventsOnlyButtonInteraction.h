//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SBHardwareButtonGestureParametersProviderBase.h"

#import "SBHardwareButtonInteraction-Protocol.h"

@class NSString;

@interface SBSiriHardwareButtonEventsOnlyButtonInteraction : SBHardwareButtonGestureParametersProviderBase <SBHardwareButtonInteraction>
{
    int _eventSource;
    int _activationEvent;
}

+ (id)hardwareButtonInteractionForHomeButton;
@property(nonatomic) int activationEvent; // @synthesize activationEvent=_activationEvent;
@property(nonatomic) int eventSource; // @synthesize eventSource=_eventSource;
- (_Bool)consumeSinglePressUp;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

