//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIAccessibilityElement.h>

@class AXDispatchTimer;

@interface UIAccessibilityFunCamElement : UIAccessibilityElement
{
    _Bool _tracked;
    AXDispatchTimer *_timer;
}

@property _Bool tracked; // @synthesize tracked=_tracked;
@property(retain, nonatomic) AXDispatchTimer *timer; // @synthesize timer=_timer;
- (void).cxx_destruct;
- (void)updateElementFrame;
- (void)accessibilityElementDidLoseFocus;
- (void)accessibilityElementDidBecomeFocused;

@end

