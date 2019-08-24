//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SilexVideo/SVButton.h>

@interface SVVideoPlayButton : SVButton
{
    _Bool _paused;
}

@property(nonatomic) _Bool paused; // @synthesize paused=_paused;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (void)displayAsPlaying;
- (void)displayAsPaused;
- (void)layoutSubviews;
- (void)updateBackgroundColor;
- (id)initWithFrame:(struct CGRect)arg1;

@end
