//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVMediaSelection, NSMapTable, NSProgress;

@interface DownloadAssetProgress : NSObject
{
    NSProgress *_overallProgress;
    NSMapTable *_childProgress;
    AVMediaSelection *_primarySelection;
}

- (void).cxx_destruct;
- (id)_progressForMediaSelection:(id)arg1;
- (void)setProgress:(double)arg1 forMediaSelection:(id)arg2;
@property(readonly, nonatomic) double progress;
- (id)initWithAsset:(id)arg1;

@end
