//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HUVelocitySample;

@interface HUVelocitySampler : NSObject
{
    HUVelocitySample *_currentSample;
    HUVelocitySample *_previousSample;
}

@property(retain, nonatomic) HUVelocitySample *previousSample; // @synthesize previousSample=_previousSample;
@property(retain, nonatomic) HUVelocitySample *currentSample; // @synthesize currentSample=_currentSample;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct CGVector velocity;
- (void)reset;
- (void)addTouchSample:(struct CGPoint)arg1;

@end
