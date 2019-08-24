//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSListController.h>

@interface PSUIExternalDisplayPreferencesController : PSListController
{
}

- (id)valueForSpecifier:(id)arg1;
- (id)displayModeSpecifiers;
- (void)handlePSUIExternalDisplayManagerExternalAutoBrightnessValueDidChangeNotification:(id)arg1;
- (void)handlePSUIExternalDisplayManagerExternalAutoBrightnessAvailablityDidChangeNotification:(id)arg1;
- (void)handlePSUIExternalDisplayManagerExternalBrightnessAvailablityDidChangeNotification:(id)arg1;
- (void)removeExternalBrightnessSpecifiers;
- (void)insertExternalBrightnessSpecifiers;
- (void)setExternalAutoBrightnessValue:(id)arg1 specifier:(id)arg2;
- (id)externalAutoBrightnessValueForSpecifier:(id)arg1;
- (void)setExternalBrightnessValue:(id)arg1 specifier:(id)arg2;
- (id)externalBrightnessValueForSpecifier:(id)arg1;
- (void)externalBrightnessDidUpdate:(id)arg1;
- (id)externalBrightnessSpecifiers;
- (void)connectedDisplayDidUpdate:(id)arg1;
- (void)setMatchContentEnabled:(id)arg1 specifier:(id)arg2;
- (id)matchContentEnabled:(id)arg1;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)specifiers;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

@end
