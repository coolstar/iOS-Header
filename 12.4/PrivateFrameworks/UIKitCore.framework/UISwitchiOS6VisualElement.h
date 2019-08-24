//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UISwitchVisualElement.h>

@class CALayer, UIColor, UIImage, UIImageView, UIPanGestureRecognizer, UITapGestureRecognizer, UIView;

__attribute__((visibility("hidden")))
@interface UISwitchiOS6VisualElement : UISwitchVisualElement
{
    UIImage *_colorMask;
    UIImage *_shapeMask;
    UIImage *_shapeShadow;
    UIImage *_thumb;
    UIImage *_thumbPressed;
    double _position;
    _Bool _pressed;
    UIImageView *_colorView;
    UIImageView *_thumbView;
    UIImageView *_labelView;
    UIColor *_onTintColor;
    UIColor *_tintColor;
    UIColor *_thumbTintColor;
    UIImage *_onImage;
    UIImage *_offImage;
    _Bool _on;
    _Bool _sendAction;
    _Bool _animating;
    UIImageView *_idleImageView;
    UIView *_interactiveView;
    CALayer *_backgroundLayer;
    UITapGestureRecognizer *_tapGesture;
    UIPanGestureRecognizer *_panGesture;
}

+ (id)_defaultOnTintColor;
+ (struct CGSize)preferredContentSize;
+ (struct CGSize)_preferredContentSizeForLinkedOnVersion:(unsigned int)arg1;
@property(retain, nonatomic) UIPanGestureRecognizer *panGesture; // @synthesize panGesture=_panGesture;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(retain, nonatomic) UIImage *offImage; // @synthesize offImage=_offImage;
@property(retain, nonatomic) UIImage *onImage; // @synthesize onImage=_onImage;
@property(retain, nonatomic) UIColor *thumbTintColor; // @synthesize thumbTintColor=_thumbTintColor;
@property(nonatomic) _Bool on; // @synthesize on=_on;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(retain, nonatomic) UIColor *onTintColor; // @synthesize onTintColor=_onTintColor;
- (void).cxx_destruct;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)_buildControl;
- (void)_setupThumbImages;
- (void)_setupBackgroundLayer;
- (id)_labelImage;
- (id)_colorImage;
- (void)_setPressed:(_Bool)arg1;
- (void)_onAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)_sendActions;
- (void)setOn:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_setOn:(_Bool)arg1 animated:(_Bool)arg2 force:(_Bool)arg3;
- (void)_setProgress:(double)arg1 animated:(_Bool)arg2 withDuration:(double)arg3 force:(_Bool)arg4 sendAction:(_Bool)arg5;
- (void)_setProgress:(double)arg1;
- (void)_cleanUpAfterAnimating;
- (void)_prepareForInteraction;
- (id)_snapshotImage;
- (void)_setOnTintColor:(id)arg1;
- (void)_setPressed:(_Bool)arg1 on:(_Bool)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_handlePan:(id)arg1;
- (void)_handleTap:(id)arg1;
- (void)_prepareGestureRecognizers;
- (void)setAlpha:(double)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;

@end
