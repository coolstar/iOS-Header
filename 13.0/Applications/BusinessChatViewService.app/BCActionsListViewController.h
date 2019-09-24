//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UITableViewController.h>

@class NSArray, UIImageView;

@interface BCActionsListViewController : UITableViewController
{
    _Bool _lastActionItemPendingUpdate;
    NSArray *_actionItems;
    NSArray *_itemsToAdd;
    UIImageView *_headerImageView;
}

@property(retain, nonatomic) UIImageView *headerImageView; // @synthesize headerImageView=_headerImageView;
@property(nonatomic) _Bool lastActionItemPendingUpdate; // @synthesize lastActionItemPendingUpdate=_lastActionItemPendingUpdate;
@property(retain, nonatomic) NSArray *itemsToAdd; // @synthesize itemsToAdd=_itemsToAdd;
@property(retain, nonatomic) NSArray *actionItems; // @synthesize actionItems=_actionItems;
- (void).cxx_destruct;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)updateActionListViewWithAnimation;
- (void)updateLastActionItemWithAnimationIfNecessary;
- (void)addActionItems:(id)arg1;
- (void)_replaceActionItem:(id)arg1 atIndex:(unsigned long long)arg2 reloadRowImmediately:(_Bool)arg3;
- (void)replaceLastActionItem:(id)arg1 reloadRowImmediately:(_Bool)arg2;
- (void)reloadHeaderIcon;
- (void)reloadHeader;
- (double)cellSeparatorHeight;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (struct CGSize)contentSize;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;
- (id)initWithActionItems:(id)arg1;

@end
