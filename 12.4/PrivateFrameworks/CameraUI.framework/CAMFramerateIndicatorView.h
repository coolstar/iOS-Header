//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface CAMFramerateIndicatorView : UIView
{
    long long _layoutStyle;
    long long _style;
    UIImageView *__borderImageView;
    UILabel *__label;
}

@property(readonly, nonatomic) UILabel *_label; // @synthesize _label=__label;
@property(readonly, nonatomic) UIImageView *_borderImageView; // @synthesize _borderImageView=__borderImageView;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) long long layoutStyle; // @synthesize layoutStyle=_layoutStyle;
- (void).cxx_destruct;
- (void)_updateAppearance;
- (long long)_framesPerSecond;
- (void)_updateForAppearanceChange;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (struct UIEdgeInsets)alignmentRectInsets;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithLayoutStyle:(long long)arg1;
- (void)_commonCAMFramerateIndicatorViewInitializationWithLayoutStyle:(long long)arg1;

@end
