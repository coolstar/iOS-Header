//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class AVPlayerLayer, MISSING_TYPE;

@interface _TtC8NewsFeed11PlayerLayer : CALayer
{
    MISSING_TYPE *stillImageLayer;
    MISSING_TYPE *playerLayer;
    MISSING_TYPE *loopBehavior;
    MISSING_TYPE *looper;
    MISSING_TYPE *readyToDisplayObservation;
    MISSING_TYPE *nonAnimatingDelegate;
}

- (void).cxx_destruct;
- (id)initWithLayer:(id)arg1;
- (id)init;
- (void)reduceMotionStatusDidChange;
- (void)applicationWillEnterForeground;
- (void)applicationDidEnterBackground;
- (void)dealloc;
- (void)layoutSublayers;
- (id)initWithCoder:(id)arg1;
@property(nonatomic, readonly) AVPlayerLayer *playerLayer; // @synthesize playerLayer;

@end
