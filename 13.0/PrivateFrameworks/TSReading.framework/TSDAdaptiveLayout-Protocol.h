//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSObject, TSDLayout;
@protocol TSDInfo;

@protocol TSDAdaptiveLayout
- (struct CGPoint)applyAdaptiveLayoutTo:(TSDLayout *)arg1 info:(NSObject<TSDInfo> *)arg2 offset:(struct CGPoint)arg3;
- (void)endDynamicAdaptiveLayout;
- (void)beginDynamicAdaptiveLayout;
@end
