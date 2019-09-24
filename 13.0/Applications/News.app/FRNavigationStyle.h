//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FRBarStyle-Protocol.h"

@class FCAssetHandle, NSString, UIColor;

@interface FRNavigationStyle : NSObject <FRBarStyle>
{
    _Bool _useDarkBackgroundThemeForTitleImage;
    _Bool _transparentNavigationBarPreferred;
    _Bool _transparentNavigationBarRequired;
    _Bool _hideTitleOnTop;
    _Bool _titleImageAdjustsForInterfaceStyle;
    UIColor *_navigationBarBackgroundColor;
    UIColor *_navigationBarTintColor;
    UIColor *_toolbarBackgroundColor;
    UIColor *_toolbarTintColor;
    long long _legibleStatusBarStyle;
    long long _statusBarStyle;
    long long _trailingStatusBarStyle;
    UIColor *_contentBackgroundColor;
    NSString *_title;
    FCAssetHandle *_defaultTitleImageAssetHandle;
    FCAssetHandle *_darkStyleTitleImageAssetHandle;
}

+ (id)toolbarBackgroundColorFromFeedTheme:(id)arg1;
+ (id)toolbarForegroundColorFromFeedTheme:(id)arg1;
+ (id)navigationStyleForDefaultNavigationBarAppearance;
+ (id)navigationStyleForForYouMasthead;
+ (id)navigationStyleForForYouHeaderOverTopOfFeedWithThemeColor:(id)arg1 shouldUseMultiColorStatusBar:(_Bool)arg2;
+ (id)navigationStyleForForYouHeader;
+ (id)navigationStyleForCompressionFromBarStyle:(id)arg1;
+ (id)navigationStyleForInterstitial;
+ (id)navigationStyleForAd;
+ (id)navigationStyleForArticleWithSpecialEventsTheme:(id)arg1 shouldUseMultiColorStatusBar:(_Bool)arg2;
+ (id)navigationStyleForArticleWithFeedTheme:(id)arg1 minimalChromeEnabled:(_Bool)arg2 forUserInterfaceStyle:(long long)arg3 shouldUseMultiColorStatusBar:(_Bool)arg4;
+ (id)navigationStyleForArticleWithFeedTheme:(id)arg1 transparentNavigationBarPreferred:(_Bool)arg2 forUserInterfaceStyle:(long long)arg3 shouldUseMultiColorStatusBar:(_Bool)arg4;
+ (id)navigationStyleForArticleWithFeedTheme:(id)arg1 forUserInterfaceStyle:(long long)arg2 shouldUseMultiColorStatusBar:(_Bool)arg3;
+ (id)navigationStyleForFeedWithFeedTheme:(id)arg1 forTraitCollection:(id)arg2 shouldUseMultiColorStatusBar:(_Bool)arg3;
@property(nonatomic) _Bool titleImageAdjustsForInterfaceStyle; // @synthesize titleImageAdjustsForInterfaceStyle=_titleImageAdjustsForInterfaceStyle;
@property(retain, nonatomic) FCAssetHandle *darkStyleTitleImageAssetHandle; // @synthesize darkStyleTitleImageAssetHandle=_darkStyleTitleImageAssetHandle;
@property(retain, nonatomic) FCAssetHandle *defaultTitleImageAssetHandle; // @synthesize defaultTitleImageAssetHandle=_defaultTitleImageAssetHandle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) UIColor *contentBackgroundColor; // @synthesize contentBackgroundColor=_contentBackgroundColor;
@property(readonly, nonatomic) _Bool hideTitleOnTop; // @synthesize hideTitleOnTop=_hideTitleOnTop;
@property(readonly, nonatomic) _Bool transparentNavigationBarRequired; // @synthesize transparentNavigationBarRequired=_transparentNavigationBarRequired;
@property(readonly, nonatomic) _Bool transparentNavigationBarPreferred; // @synthesize transparentNavigationBarPreferred=_transparentNavigationBarPreferred;
@property(readonly, nonatomic) _Bool useDarkBackgroundThemeForTitleImage; // @synthesize useDarkBackgroundThemeForTitleImage=_useDarkBackgroundThemeForTitleImage;
@property(readonly, nonatomic) long long trailingStatusBarStyle; // @synthesize trailingStatusBarStyle=_trailingStatusBarStyle;
@property(readonly, nonatomic) long long statusBarStyle; // @synthesize statusBarStyle=_statusBarStyle;
@property(readonly, nonatomic) long long legibleStatusBarStyle; // @synthesize legibleStatusBarStyle=_legibleStatusBarStyle;
@property(readonly, nonatomic) UIColor *toolbarTintColor; // @synthesize toolbarTintColor=_toolbarTintColor;
@property(readonly, nonatomic) UIColor *toolbarBackgroundColor; // @synthesize toolbarBackgroundColor=_toolbarBackgroundColor;
@property(readonly, nonatomic) UIColor *navigationBarTintColor; // @synthesize navigationBarTintColor=_navigationBarTintColor;
@property(readonly, nonatomic) UIColor *navigationBarBackgroundColor; // @synthesize navigationBarBackgroundColor=_navigationBarBackgroundColor;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (void)updateWithStatusBarStyle:(long long)arg1 trailingStatusBarStyle:(long long)arg2;
- (void)updateWithTintColor:(id)arg1;
- (void)updateShouldUseMultiColorStatusBar:(_Bool)arg1;
- (_Bool)updateWithNavigationStyleUpdate:(id)arg1;
@property(readonly, nonatomic) FCAssetHandle *titleImageAssetHandle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
