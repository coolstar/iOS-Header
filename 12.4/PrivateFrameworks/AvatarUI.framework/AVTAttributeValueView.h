//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <AvatarUI/AVTDiscardableContent-Protocol.h>
#import <AvatarUI/AVTSectionItemTransitionModel-Protocol.h>

@class CAShapeLayer, NSString, NSUUID, UIImage, UIImageView;

@interface AVTAttributeValueView : UIView <AVTSectionItemTransitionModel, AVTDiscardableContent>
{
    CDUnknownBlockType discardableContentHandler;
    UIImage *_image;
    UIImageView *_imageView;
    unsigned long long _selectionStyle;
    NSUUID *_displaySessionUUID;
    UIImageView *_transitionImageView;
    CAShapeLayer *_clippingLayer;
    CAShapeLayer *_selectionLayer;
    UIView *_highlightView;
    struct CGSize _imageSizeRatio;
}

+ (struct CGRect)imageViewRectForBounds:(struct CGRect)arg1 imageSizeRatio:(struct CGSize)arg2 scale:(double)arg3;
@property(retain, nonatomic) UIView *highlightView; // @synthesize highlightView=_highlightView;
@property(retain, nonatomic) CAShapeLayer *selectionLayer; // @synthesize selectionLayer=_selectionLayer;
@property(retain, nonatomic) CAShapeLayer *clippingLayer; // @synthesize clippingLayer=_clippingLayer;
@property(retain, nonatomic) UIImageView *transitionImageView; // @synthesize transitionImageView=_transitionImageView;
@property(retain, nonatomic) NSUUID *displaySessionUUID; // @synthesize displaySessionUUID=_displaySessionUUID;
@property(nonatomic) unsigned long long selectionStyle; // @synthesize selectionStyle=_selectionStyle;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) struct CGSize imageSizeRatio; // @synthesize imageSizeRatio=_imageSizeRatio;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(copy, nonatomic) CDUnknownBlockType discardableContentHandler; // @synthesize discardableContentHandler;
- (void).cxx_destruct;
- (void)discardContent;
- (void)cleanupAfterTransition;
- (id)toView;
- (id)fromView;
- (void)prepareForTransitionToImage:(id)arg1;
- (void)updateWithImage:(id)arg1;
- (void)bringSelectionLayersToFront;
- (void)updateSelectedState:(_Bool)arg1 animated:(_Bool)arg2;
- (void)updateHighlightedState:(_Bool)arg1 animated:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)updateCornerRadii;
- (id)clippingBezierPath;
- (id)selectionBezierPath;
- (void)configureImageView:(id)arg1;
- (struct CGRect)shapeLayerRect;
- (struct CGRect)selectorRect;
- (void)relayoutSublayers;
- (void)layoutSubviews;
- (void)updateSelectionLayer;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
