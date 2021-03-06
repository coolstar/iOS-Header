//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VoiceMemos/NSObject-Protocol.h>

@class RCWaveformViewController;
@protocol RCTimeController;

@protocol RCWaveformViewDelegate <NSObject>
@property(readonly, retain, nonatomic) id <RCTimeController> activeTimeController;
- (void)waveformViewController:(RCWaveformViewController *)arg1 didChangeToSelectedTimeRange:(CDStruct_73a5d3ca)arg2;
- (void)waveformViewControllerDidEndEditingSelectedTimeRange:(RCWaveformViewController *)arg1;
- (void)waveformViewControllerWillBeginEditingSelectedTimeRange:(RCWaveformViewController *)arg1;
- (void)waveformViewController:(RCWaveformViewController *)arg1 didScrubToTime:(double)arg2 finished:(_Bool)arg3;
@end

