//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class MTMaterialView, UIImageView;

@interface SBFolderControllerBackgroundView : UIView
{
    MTMaterialView *_blurView;
    UIImageView *_blurViewSnapshot;
    UIView *_tintView;
    UIView *_debugFreezingView;
    _Bool _transitionCancelled;
    _Bool _effectActive;
    _Bool _expanding;
    _Bool _frozen;
    _Bool _reduceTransparencyEnabled;
    unsigned long long _effect;
    unsigned long long _currentEffect;
}

+ (id)_tintColorForEffect:(unsigned long long)arg1;
@property(nonatomic) unsigned long long currentEffect; // @synthesize currentEffect=_currentEffect;
@property(nonatomic, getter=isReduceTransparencyEnabled) _Bool reduceTransparencyEnabled; // @synthesize reduceTransparencyEnabled=_reduceTransparencyEnabled;
@property(nonatomic) _Bool frozen; // @synthesize frozen=_frozen;
@property(nonatomic) _Bool expanding; // @synthesize expanding=_expanding;
@property(nonatomic, getter=isEffectActive) _Bool effectActive; // @synthesize effectActive=_effectActive;
@property(nonatomic) unsigned long long effect; // @synthesize effect=_effect;
@property(nonatomic) _Bool transitionCancelled; // @synthesize transitionCancelled=_transitionCancelled;
- (void).cxx_destruct;
- (_Bool)_isCurrentlyExpanding;
- (void)_updateCurrentEffect;
@property(readonly, nonatomic) unsigned long long concreteEffect;
- (void)layoutSubviews;
- (void)_reduceTransparencyEnabledStateChanged;
- (id)initWithFrame:(struct CGRect)arg1;

@end

