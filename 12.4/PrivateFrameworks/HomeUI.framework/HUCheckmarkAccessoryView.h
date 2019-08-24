//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIImageView.h>

@interface HUCheckmarkAccessoryView : UIImageView
{
    _Bool _checked;
    _Bool _disabled;
    UIImageView *_checkmarkImageView;
}

+ (id)grayBorderColor;
+ (double)borderWidth;
+ (id)checkmarkImage;
@property(retain, nonatomic) UIImageView *checkmarkImageView; // @synthesize checkmarkImageView=_checkmarkImageView;
@property(nonatomic) _Bool disabled; // @synthesize disabled=_disabled;
@property(nonatomic) _Bool checked; // @synthesize checked=_checked;
- (void).cxx_destruct;
- (void)_updateColors;
- (void)tintColorDidChange;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
