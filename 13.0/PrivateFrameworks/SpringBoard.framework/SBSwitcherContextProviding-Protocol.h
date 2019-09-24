//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBChainableModifierContext-Protocol.h>

@class NSArray, NSString, SBAppLayout, SBAppSwitcherSettings, SBEntityRemovalAnimationSettings, SBHomeGestureSettings, SBMedusaSettings, SBSwitcherModifier;

@protocol SBSwitcherContextProviding <SBChainableModifierContext>
- (struct CGPoint)gestureHandlingModifier:(SBSwitcherModifier *)arg1 averageVelocityOverDuration:(double)arg2;
- (void)gestureHandlingModifierRequestsUpdate:(SBSwitcherModifier *)arg1;
- (double)morphToPiPSourceAlpha;
- (double)morphToPiPTargetScale;
- (struct CGPoint)morphToPiPTargetCenter;
- (double)floatingDockWindowLevel;
- (double)switcherWindowLevel;
- (struct CGRect)floatingApplicationFrameInInterfaceOrientation:(long long)arg1 floatingConfiguration:(long long)arg2;
- (_Bool)isAppLayoutHigherPriorityInTetheredSwitcher:(SBAppLayout *)arg1;
- (_Bool)itemContainerForAppLayoutOverlapsFloatingDock:(SBAppLayout *)arg1;
- (NSString *)homeScreenIconLocationForAppLayout:(SBAppLayout *)arg1;
- (double)homeScreenIconCornerRadiusForAppLayout:(SBAppLayout *)arg1;
- (double)homeScreenIconScaleForAppLayout:(SBAppLayout *)arg1;
- (struct CGRect)homeScreenIconFrameForAppLayout:(SBAppLayout *)arg1;
- (_Bool)isStudyLogEnabled;
- (_Bool)isRTLEnabled;
- (_Bool)isReduceMotionEnabled;
- (_Bool)hasHomeButton;
- (_Bool)isDevicePad;
- (long long)numberOfHiddenAppLayoutsForBundleIdentifier:(NSString *)arg1;
- (long long)numberOfVisibleCards;
- (SBEntityRemovalAnimationSettings *)entityRemovalSettings;
- (SBMedusaSettings *)medusaSettings;
- (SBHomeGestureSettings *)homeGestureSettings;
- (SBAppSwitcherSettings *)switcherSettings;
- (_Bool)isHomeScreenSidebarVisible;
- (_Bool)isShowingSpotlightOrTodayView;
- (_Bool)homeScreenHasOpenFolderInLocation:(NSString *)arg1;
- (_Bool)homeScreenHasOpenFolder;
- (_Bool)isFloatingDockGesturePossible;
- (_Bool)isFloatingDockFullyPresented;
- (double)floatingDockViewTopMargin;
- (double)floatingDockHeight;
- (double)displayCornerRadius;
- (double)distanceToTetheredLeadingEdgeOfLeadingCardFromTrailingEdgeOfScreen;
- (struct CGSize)tetheredScrollViewContentSize;
- (struct CGPoint)scrollViewContentOffset;
- (long long)switcherInterfaceOrientation;
- (struct CGRect)switcherViewBounds;
- (struct CGRect)containerViewBounds;
- (unsigned long long)numberOfTetheredAppLayouts;
- (NSArray *)appLayouts;
@end
