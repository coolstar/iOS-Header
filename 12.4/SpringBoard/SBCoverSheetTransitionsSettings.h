//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SBUISettings.h"

@class SBCoverSheetFlyInSettings, SBCoverSheetTransitionSettings;

@interface SBCoverSheetTransitionsSettings : SBUISettings
{
    double _tension;
    double _friction;
    SBCoverSheetFlyInSettings *_flyInSettings;
    SBCoverSheetTransitionSettings *_sameWallpaperInitialTransitionSettings;
    SBCoverSheetTransitionSettings *_differentWallpaperInitialTransitionSettings;
    SBCoverSheetTransitionSettings *_sameWallpaperSubsequentTransitionSettings;
    SBCoverSheetTransitionSettings *_differentWallpaperSubsequentTransitionSettings;
    SBCoverSheetTransitionSettings *_overAppTransitionSettings;
}

+ (id)settingsControllerModule;
@property(retain, nonatomic) SBCoverSheetTransitionSettings *overAppTransitionSettings; // @synthesize overAppTransitionSettings=_overAppTransitionSettings;
@property(retain, nonatomic) SBCoverSheetTransitionSettings *differentWallpaperSubsequentTransitionSettings; // @synthesize differentWallpaperSubsequentTransitionSettings=_differentWallpaperSubsequentTransitionSettings;
@property(retain, nonatomic) SBCoverSheetTransitionSettings *sameWallpaperSubsequentTransitionSettings; // @synthesize sameWallpaperSubsequentTransitionSettings=_sameWallpaperSubsequentTransitionSettings;
@property(retain, nonatomic) SBCoverSheetTransitionSettings *differentWallpaperInitialTransitionSettings; // @synthesize differentWallpaperInitialTransitionSettings=_differentWallpaperInitialTransitionSettings;
@property(retain, nonatomic) SBCoverSheetTransitionSettings *sameWallpaperInitialTransitionSettings; // @synthesize sameWallpaperInitialTransitionSettings=_sameWallpaperInitialTransitionSettings;
@property(retain, nonatomic) SBCoverSheetFlyInSettings *flyInSettings; // @synthesize flyInSettings=_flyInSettings;
@property(nonatomic) double friction; // @synthesize friction=_friction;
@property(nonatomic) double tension; // @synthesize tension=_tension;
- (void).cxx_destruct;
- (void)setDefaultValuesForParallaxAndBlur;
- (void)setDefaultValuesForBlurOnly;
- (void)setDefaultValuesForParallaxOnly;
- (void)setDefaultValues;

@end

