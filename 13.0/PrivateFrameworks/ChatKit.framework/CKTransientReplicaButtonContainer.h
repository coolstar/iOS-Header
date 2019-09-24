//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CALayer;

__attribute__((visibility("hidden")))
@interface CKTransientReplicaButtonContainer : UIView
{
    UIView *_sendButtonCircle;
    UIView *_cancelButtonCircle;
    CALayer *_sendButtonGlyphLayer;
    CALayer *_cancelButtonGlyphLayer;
}

@property(readonly, nonatomic) CALayer *cancelButtonGlyphLayer; // @synthesize cancelButtonGlyphLayer=_cancelButtonGlyphLayer;
@property(readonly, nonatomic) CALayer *sendButtonGlyphLayer; // @synthesize sendButtonGlyphLayer=_sendButtonGlyphLayer;
@property(readonly, nonatomic) UIView *cancelButtonCircle; // @synthesize cancelButtonCircle=_cancelButtonCircle;
@property(readonly, nonatomic) UIView *sendButtonCircle; // @synthesize sendButtonCircle=_sendButtonCircle;
- (void).cxx_destruct;
- (id)_glyphLayerForButtonAnimationWithGlyphName:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 hasDarkVibrancy:(_Bool)arg2 color:(BOOL)arg3;

@end
