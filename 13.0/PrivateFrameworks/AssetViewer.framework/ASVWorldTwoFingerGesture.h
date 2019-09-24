//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AssetViewer/ASVTwoFingerGesture.h>

@class ASVWorldGestureDragOffsetCorrector;
@protocol ASVWorldTwoFingerGestureDelegate;

@interface ASVWorldTwoFingerGesture : ASVTwoFingerGesture
{
    id <ASVWorldTwoFingerGestureDelegate> _worldDelegate;
    ASVWorldGestureDragOffsetCorrector *_dragOffsetCorrector;
}

@property(retain, nonatomic) ASVWorldGestureDragOffsetCorrector *dragOffsetCorrector; // @synthesize dragOffsetCorrector=_dragOffsetCorrector;
@property(nonatomic) __weak id <ASVWorldTwoFingerGestureDelegate> worldDelegate; // @synthesize worldDelegate=_worldDelegate;
- (void).cxx_destruct;
- (void)finishGesture;
- (void)updatePanWithFirstTouchLocation:secondTouchLocation:midPoint: /* Error: Ran out of types for this method. */;
- (id)initWithFirstTouch:(id)arg1 secondTouch:(id)arg2 dataSource:(id)arg3 worldDelegate:(id)arg4;

@end
