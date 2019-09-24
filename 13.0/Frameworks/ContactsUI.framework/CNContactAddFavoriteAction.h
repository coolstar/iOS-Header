//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsUI/CNPropertyAction.h>

#import <ContactsUI/CNUIFavoritesEntryPickerDelegate-Protocol.h>

@class CNFavorites, CNUIFavoritesEntryPicker, NSString;

__attribute__((visibility("hidden")))
@interface CNContactAddFavoriteAction : CNPropertyAction <CNUIFavoritesEntryPickerDelegate>
{
    CNUIFavoritesEntryPicker *_favoritesEntryPicker;
    CNFavorites *_favorites;
}

@property(readonly, nonatomic) CNFavorites *favorites; // @synthesize favorites=_favorites;
@property(retain, nonatomic) CNUIFavoritesEntryPicker *favoritesEntryPicker; // @synthesize favoritesEntryPicker=_favoritesEntryPicker;
- (void).cxx_destruct;
- (void)_saveFavorite:(id)arg1;
- (void)favoritesEntryPicker:(id)arg1 didPickEntry:(id)arg2;
- (void)performActionWithSender:(id)arg1;
- (_Bool)canPerformAction;
- (id)initWithContact:(id)arg1 propertyItems:(id)arg2 favorites:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
