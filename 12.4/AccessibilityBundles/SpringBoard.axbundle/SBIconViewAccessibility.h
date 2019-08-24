//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "__SBIconViewAccessibility_super.h"

@interface SBIconViewAccessibility : __SBIconViewAccessibility_super
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (_Bool)_accessibilityUpdatesSwitchMenu;
- (_Bool)_accessibilityCanDrag;
- (id)_accessibilityPreferredScrollActions;
- (void)_accessibilityBeginDragAtPoint:(struct CGPoint)arg1 endpoint:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)accessibilityDropPointDescriptors;
- (id)accessibilityDragSourceDescriptors;
- (_Bool)_accessibilityToggleJigglyMode;
- (void)_accessibilityCreateOrAddToFolder;
- (id)_accessibilitySupportGesturesAttributes;
- (id)_accessibilityHitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)_accessibilitySupportsActivateAction;
- (_Bool)_accessibilityLaunchAppWithRole:(long long)arg1 onLeadingSide:(_Bool)arg2;
- (_Bool)_accessibilityLaunchFloatingTrailing:(id)arg1;
- (_Bool)_accessibilityLaunchTrailing:(id)arg1;
- (_Bool)_accessibilityLaunchLeading:(id)arg1;
- (_Bool)_accessibilityShowTodayView;
- (void)_accessibilityAddTodayViewAction:(id)arg1;
- (void)_accessibilityInDockActions:(id)arg1;
- (void)_accessibilityDropFromFolderAction:(id)arg1;
- (void)_accessibilityAddEditActions:(id)arg1;
- (id)accessibilityCustomActions;
- (_Bool)_accessibilityRetainsCustomRotorActionSetting;
- (_Bool)accessibilityPerformEscape;
- (_Bool)_accessibilityOverridesInvisibility;
- (_Bool)_accessibilityCanPerformEscapeAction;
- (_Bool)_accessibilityElementShouldBeInvalid;
- (_Bool)_accessibilityDeleteApp;
- (_Bool)accessibilityActivate;
- (_Bool)accessibilityScrollToVisible;
- (id)_accessibilityScrollStatus;
- (struct CGPoint)accessibilityActivationPoint;
- (struct CGRect)accessibilityFrame;
- (id)_accessibilityBundleIdentifier;
- (unsigned long long)accessibilityTraits;
- (void)_updateCloseBoxAnimated:(_Bool)arg1;
- (id)_accessibilityUserTestingChildren;
- (_Bool)isAccessibilityElement;
- (id)accessibilityValue;
- (id)accessibilityHint;
- (_Bool)_accessibilityIsTimedOut;
- (_Bool)_accessibilityHasBadge;
- (_Bool)_accessibilityIsInFolder;
- (id)accessibilityIdentifier;
- (id)accessibilityLabel;
- (_Bool)_accessibilityIsInShortcutMenu;
- (_Bool)_accessibilityIsInCmdTabSwitcher;

@end
