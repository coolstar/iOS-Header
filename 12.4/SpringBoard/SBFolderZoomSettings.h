//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SBScaleZoomSettings.h"

@class SBAnimationSettings;

@interface SBFolderZoomSettings : SBScaleZoomSettings
{
    SBAnimationSettings *_innerFolderFadeSettings;
}

+ (id)settingsControllerModule;
@property(retain) SBAnimationSettings *innerFolderFadeSettings; // @synthesize innerFolderFadeSettings=_innerFolderFadeSettings;
- (void).cxx_destruct;
- (void)setDefaultValues;

@end

