//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIStatusBarItem.h>

@class _UIStatusBarStringView;

__attribute__((visibility("hidden")))
@interface _UIStatusBarPersonNameItem : _UIStatusBarItem
{
    _UIStatusBarStringView *_personNameView;
}

@property(retain, nonatomic) _UIStatusBarStringView *personNameView; // @synthesize personNameView=_personNameView;
- (void).cxx_destruct;
- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;
- (id)viewForIdentifier:(id)arg1;
- (id)dependentEntryKeys;

@end
