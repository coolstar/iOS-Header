//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CASpringAnimation.h>

@class FRSpringAnimationDelegate;

@interface FRArticleMarkingSpringAnimation : CASpringAnimation
{
}

+ (id)springAnimationWithKeyPath:(id)arg1 toLayer:(id)arg2 fromValue:(id)arg3 toValue:(id)arg4;
+ (double)defaultAnimationDuration;
- (void)addCompletionBlock:(CDUnknownBlockType)arg1;
- (id)init;

// Remaining properties
@property(nonatomic) __weak FRSpringAnimationDelegate *delegate; // @dynamic delegate;

@end
