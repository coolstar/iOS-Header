//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CAMediaTimingFunction;

@interface _SBSteppedAnimationTimingFunction : NSObject
{
    CAMediaTimingFunction *_timingFunction;
    struct SBNormalizedTransitionInterval _constrainedRange;
}

+ (id)timingFunctionWithTimingFunction:(id)arg1 constrainedToIntervalBetween:(double)arg2 and:(double)arg3;
@property(readonly, nonatomic) struct SBNormalizedTransitionInterval constrainedRange; // @synthesize constrainedRange=_constrainedRange;
@property(readonly, nonatomic) CAMediaTimingFunction *timingFunction; // @synthesize timingFunction=_timingFunction;
- (void).cxx_destruct;
- (double)valueAtPercentage:(double)arg1;
- (id)initWithTimingFunction:(id)arg1 constrainedToIntervalBetween:(double)arg2 and:(double)arg3;

@end

