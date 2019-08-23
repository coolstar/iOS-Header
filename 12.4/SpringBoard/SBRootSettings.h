//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SBUISettings.h"

@class SBAlertItemsSettings, SBAnimationFactorySettings, SBAppIconForceTouchSettings, SBAppParallaxSettings, SBAppSwitcherSettings, SBAttentionAwarenessSettings, SBCarDisplaySettings, SBFWallpaperSettings, SBFolderSettings, SBHarmonySettings, SBHomeButtonSettings, SBHomeGestureSettings, SBHomeScreenSettings, SBIconColorSettings, SBIrisWallpaperSettings, SBLegibilitySettings, SBLockScreenSettings, SBLockScreenTestPluginSettings, SBMedusa2oSettings, SBMedusaSettings, SBMiscellaneousSystemAnimationSettings, SBPrototypeControllerSettings, SBProximitySettings, SBReachabilitySettings, SBRootAnimationSettings, SBStatusBarStyleOverridesSettings, SBWakeAnimationSettings;
@protocol MTMaterialSettings><MTMaterialSettingsObservable;

@interface SBRootSettings : SBUISettings
{
    SBAppParallaxSettings *_parallaxSettings;
    SBFolderSettings *_folderSettings;
    SBRootAnimationSettings *_rootAnimationSettings;
    SBAppSwitcherSettings *_appSwitcherSettings;
    SBLockScreenSettings *_lockScreenSettings;
    SBCarDisplaySettings *_carDisplaySettings;
    SBLockScreenTestPluginSettings *_lockScreenTestPluginSettings;
    SBIconColorSettings *_iconColorSettings;
    SBWakeAnimationSettings *_wakeAnimationSettings;
    SBAlertItemsSettings *_alertItemsSettings;
    SBLegibilitySettings *_legibilitySettings;
    SBFWallpaperSettings *_wallpaperSettings;
    SBIrisWallpaperSettings *_irisWallpaperSettings;
    SBAnimationFactorySettings *_animationSettings;
    SBHomeButtonSettings *_homeButtonSettings;
    SBReachabilitySettings *_reachabilitySettings;
    SBMedusaSettings *_medusaSettings;
    SBMedusa2oSettings *_medusa2oSettings;
    SBStatusBarStyleOverridesSettings *_statusBarStyleOverridesSettings;
    SBPrototypeControllerSettings *_prototypeControllerSettings;
    SBHarmonySettings *_harmonySettings;
    SBAppIconForceTouchSettings *_appIconForceTouchSettings;
    SBMiscellaneousSystemAnimationSettings *_miscellaneousSystemAnimationSettings;
    SBHomeScreenSettings *_homeScreenSettings;
    SBAttentionAwarenessSettings *_attentionAwarenessSettings;
    SBProximitySettings *_proximitySettings;
    SBHomeGestureSettings *_homeGestureSettings;
}

+ (id)settingsControllerModule;
@property(retain) SBHomeGestureSettings *homeGestureSettings; // @synthesize homeGestureSettings=_homeGestureSettings;
@property(retain) SBProximitySettings *proximitySettings; // @synthesize proximitySettings=_proximitySettings;
@property(retain) SBAttentionAwarenessSettings *attentionAwarenessSettings; // @synthesize attentionAwarenessSettings=_attentionAwarenessSettings;
@property(retain) SBHomeScreenSettings *homeScreenSettings; // @synthesize homeScreenSettings=_homeScreenSettings;
@property(retain) SBMiscellaneousSystemAnimationSettings *miscellaneousSystemAnimationSettings; // @synthesize miscellaneousSystemAnimationSettings=_miscellaneousSystemAnimationSettings;
@property(retain) SBAppIconForceTouchSettings *appIconForceTouchSettings; // @synthesize appIconForceTouchSettings=_appIconForceTouchSettings;
@property(retain) SBHarmonySettings *harmonySettings; // @synthesize harmonySettings=_harmonySettings;
@property(retain) SBPrototypeControllerSettings *prototypeControllerSettings; // @synthesize prototypeControllerSettings=_prototypeControllerSettings;
@property(retain) SBStatusBarStyleOverridesSettings *statusBarStyleOverridesSettings; // @synthesize statusBarStyleOverridesSettings=_statusBarStyleOverridesSettings;
@property(retain) SBMedusa2oSettings *medusa2oSettings; // @synthesize medusa2oSettings=_medusa2oSettings;
@property(retain) SBMedusaSettings *medusaSettings; // @synthesize medusaSettings=_medusaSettings;
@property(retain) SBReachabilitySettings *reachabilitySettings; // @synthesize reachabilitySettings=_reachabilitySettings;
@property(retain) SBHomeButtonSettings *homeButtonSettings; // @synthesize homeButtonSettings=_homeButtonSettings;
@property(retain) SBAnimationFactorySettings *animationSettings; // @synthesize animationSettings=_animationSettings;
@property(retain) SBIrisWallpaperSettings *irisWallpaperSettings; // @synthesize irisWallpaperSettings=_irisWallpaperSettings;
@property(retain) SBFWallpaperSettings *wallpaperSettings; // @synthesize wallpaperSettings=_wallpaperSettings;
@property(retain) SBLegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
@property(retain) SBAlertItemsSettings *alertItemsSettings; // @synthesize alertItemsSettings=_alertItemsSettings;
@property(retain) SBWakeAnimationSettings *wakeAnimationSettings; // @synthesize wakeAnimationSettings=_wakeAnimationSettings;
@property(retain) SBIconColorSettings *iconColorSettings; // @synthesize iconColorSettings=_iconColorSettings;
@property(retain) SBLockScreenTestPluginSettings *lockScreenTestPluginSettings; // @synthesize lockScreenTestPluginSettings=_lockScreenTestPluginSettings;
@property(retain) SBCarDisplaySettings *carDisplaySettings; // @synthesize carDisplaySettings=_carDisplaySettings;
@property(retain) SBLockScreenSettings *lockScreenSettings; // @synthesize lockScreenSettings=_lockScreenSettings;
@property(retain) SBAppSwitcherSettings *appSwitcherSettings; // @synthesize appSwitcherSettings=_appSwitcherSettings;
@property(retain) SBRootAnimationSettings *rootAnimationSettings; // @synthesize rootAnimationSettings=_rootAnimationSettings;
@property(retain) SBFolderSettings *folderSettings; // @synthesize folderSettings=_folderSettings;
@property(retain) SBAppParallaxSettings *parallaxSettings; // @synthesize parallaxSettings=_parallaxSettings;
- (void).cxx_destruct;
- (void)applyArchiveValue:(id)arg1 forKey:(id)arg2;
- (id)archiveValueForKey:(id)arg1;
@property(retain) id <MTMaterialSettings><MTMaterialSettingsObservable> controlCenterMaterialSettings;
@property(retain) id <MTMaterialSettings><MTMaterialSettingsObservable> notificationMaterialSettings;
- (_Bool)_hasPreviousSettings;

@end

