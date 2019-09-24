//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AccessibilityUIUtilities/AXUISettingsBaseListController.h>

#import <AccessibilityUIUtilities/UISearchBarDelegate-Protocol.h>
#import <AccessibilityUIUtilities/UISearchResultsUpdating-Protocol.h>

@class NSArray, NSString, UISearchController;

@interface AXUISettingsSearchableBaseListController : AXUISettingsBaseListController <UISearchResultsUpdating, UISearchBarDelegate>
{
    _Bool _needsSpecifierRefresh;
    NSString *_cachedSearchTextWhileDeactivating;
    UISearchController *_searchController;
    NSString *_searchText;
    NSArray *_allSpecifiers;
}

@property(retain, nonatomic) NSArray *allSpecifiers; // @synthesize allSpecifiers=_allSpecifiers;
@property(retain, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
@property(retain, nonatomic) UISearchController *searchController; // @synthesize searchController=_searchController;
- (void).cxx_destruct;
- (_Bool)shouldShowSpecifier:(id)arg1 withSearchText:(id)arg2;
- (id)makeSpecifiers;
- (_Bool)_specifierIsGroupSpecifier:(id)arg1;
- (void)_loadAllSpecifiersIfNeeded;
- (void)setNeedsSpecifierRefresh;
- (void)deactivateAndPersistSearchText;
- (id)specifiers;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
