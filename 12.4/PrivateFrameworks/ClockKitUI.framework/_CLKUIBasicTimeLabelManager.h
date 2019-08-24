//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClockKitUI/_CLKUITimeLabelManager-Protocol.h>

@class CLKDevice, CLKTimeFormatter, CLKUITimeLabelStyle, NSAttributedString, NSString, UIColor, UILabel, UIView;

@interface _CLKUIBasicTimeLabelManager : NSObject <_CLKUITimeLabelManager>
{
    CLKDevice *_device;
    UILabel *_label;
    CLKTimeFormatter *_timeFormatter;
    NSString *_timeText;
    CLKUITimeLabelStyle *_style;
    double _maxWidth;
    NSAttributedString *_correctAttributedText;
    _Bool _showsDesignator;
    _Bool _showSubstringToSeparator;
    _Bool _showSubstringFromSeparator;
    _Bool _hideMinutesIfZero;
    _Bool _primary;
    struct CGSize _cachedIntrinsicSize;
    struct UIEdgeInsets _cachedOpticalEdgeInsets;
    _Bool _cachedOpticalEdgeInsetsIsValid;
    _Bool _showSeconds;
    _Bool _animationsPaused;
    _Bool _showsBlinker;
    _Bool _showsNumbers;
}

@property(nonatomic) _Bool showsNumbers; // @synthesize showsNumbers=_showsNumbers;
@property(nonatomic) _Bool showsBlinker; // @synthesize showsBlinker=_showsBlinker;
@property(nonatomic) _Bool showSeconds; // @synthesize showSeconds=_showSeconds;
@property(nonatomic) _Bool animationsPaused; // @synthesize animationsPaused=_animationsPaused;
- (void).cxx_destruct;
- (id)_attributedTextShowingBlinker:(_Bool)arg1 numbers:(_Bool)arg2;
- (void)_updateAttributedText;
- (void)enumerateUnderlyingLabelsWithBlock:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) UIColor *textColor;
@property(readonly, nonatomic) struct UIEdgeInsets opticalInsets;
- (void)sizeViewToFit;
- (struct CGSize)sizeThatFits;
@property(readonly, nonatomic) struct CGSize intrinsicSize;
- (void)updateTimeText;
- (id)effectiveAttributedText;
- (id)effectiveFont;
- (id)viewForLastBaselineLayout;
- (double)_lastLineBaseline;
- (void)setMaxWidth:(double)arg1;
- (void)setShowsDesignator:(_Bool)arg1;
- (void)setStyle:(id)arg1;
@property(readonly, nonatomic) UIView *view;
- (id)_initForDevice:(id)arg1 primary:(_Bool)arg2 withTimeFormatter:(id)arg3 options:(unsigned long long)arg4 labelFactory:(CDUnknownBlockType)arg5;
- (id)initWithForDevice:(id)arg1 timeFormatter:(id)arg2 options:(unsigned long long)arg3 labelFactory:(CDUnknownBlockType)arg4;

@end
