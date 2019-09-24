//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CameraUI/NSObject-Protocol.h>

@class CEKWheelScrubberView, CEKWheelScrubberViewCell;

@protocol CEKWheelScrubberViewDelegate <NSObject>
- (void)wheelScrubberViewDidChangeSelectedIndex:(CEKWheelScrubberView *)arg1;
- (void)wheelScrubberView:(CEKWheelScrubberView *)arg1 updateCell:(CEKWheelScrubberViewCell *)arg2 forItemAtIndex:(unsigned long long)arg3;

@optional
- (void)wheelScrubberViewDidEndScrolling:(CEKWheelScrubberView *)arg1;
- (void)wheelScrubberViewWillEndScrolling:(CEKWheelScrubberView *)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)wheelScrubberViewDidScroll:(CEKWheelScrubberView *)arg1;
- (void)wheelScrubberViewWillBeginScrolling:(CEKWheelScrubberView *)arg1;
@end
