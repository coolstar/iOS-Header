//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SBAlertItemsControllerObserver-Protocol.h"
#import "SBAlertManagerObserver-Protocol.h"
#import "SBAssistantObserver-Protocol.h"
#import "SBIconListViewDragObserver-Protocol.h"

@class NSHashTable, NSMapTable, NSMutableDictionary, NSString, NSTimer, SBIconController, SBIconDraggingEditContext;

@interface SBIconDragManager : NSObject <SBIconListViewDragObserver, SBAlertManagerObserver, SBAlertItemsControllerObserver, SBAssistantObserver>
{
    NSMapTable *_iconDrags;
    NSMapTable *_uniqueIdentifiersPerDropSession;
    NSMutableDictionary *_revertingReplacementIndexPaths;
    NSHashTable *_platterViews;
    SBIconController *_iconController;
    SBIconDraggingEditContext *_draggingEditContext;
    NSTimer *_editingLongPressTimer;
}

+ (void)cancelAllDrags;
@property(retain, nonatomic) NSTimer *editingLongPressTimer; // @synthesize editingLongPressTimer=_editingLongPressTimer;
@property(retain, nonatomic) SBIconDraggingEditContext *draggingEditContext; // @synthesize draggingEditContext=_draggingEditContext;
@property(readonly, nonatomic) __weak SBIconController *iconController; // @synthesize iconController=_iconController;
- (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)assistant:(id)arg1 viewWillAppear:(long long)arg2;
- (void)alertItemsController:(id)arg1 didDeactivateAlertItem:(id)arg2 forReason:(int)arg3;
- (void)alertItemsController:(id)arg1 didActivateAlertItem:(id)arg2;
- (void)alertItemsController:(id)arg1 willActivateAlertItem:(id)arg2;
- (void)alertManager:(id)arg1 willActivateAlert:(id)arg2 overAlerts:(id)arg3;
- (void)iconListView:(id)arg1 iconDropSessionDidEnd:(id)arg2;
- (void)iconListView:(id)arg1 concludeIconDrop:(id)arg2;
- (void)controlCenterWillPresent:(id)arg1;
- (void)coverSheetWillPresent:(id)arg1;
- (void)iconControllerEditingDidChange:(id)arg1;
- (void)performSpringLoadedInteractionForIconDragOnIconView:(id)arg1;
- (_Bool)shouldAllowSpringLoadedInteractionForIconDragOnIconView:(id)arg1;
- (void)iconListView:(id)arg1 iconDragItem:(id)arg2 willAnimateDropWithAnimator:(id)arg3;
- (id)iconListView:(id)arg1 previewForDroppingIconDragItem:(id)arg2 proposedPreview:(id)arg3;
- (void)iconDropSessionDidEnd:(id)arg1 identifier:(id)arg2 draggedIconIdentifiers:(id)arg3;
- (void)iconDropSessionDidEnd:(id)arg1;
- (void)concludeIconDrop:(id)arg1;
- (void)performIconDrop:(id)arg1 identifier:(id)arg2 draggedIconIdentifiers:(id)arg3 inIconListView:(id)arg4;
- (void)performIconDrop:(id)arg1 inIconListView:(id)arg2;
- (void)iconDropSessionDidExitWithIdentifier:(id)arg1 fromIconListView:(id)arg2;
- (void)iconDropSessionDidExit:(id)arg1 fromIconListView:(id)arg2;
- (void)iconDropSessionWithIdentifier:(id)arg1 draggedIconIdentifiers:(id)arg2 didPauseAtLocation:(struct CGPoint)arg3 inIconListView:(id)arg4;
- (void)iconDropSession:(id)arg1 didPauseAtLocation:(struct CGPoint)arg2 inIconListView:(id)arg3;
- (id)iconDropSessionDidUpdate:(id)arg1 inIconListView:(id)arg2;
- (void)iconDropSessionDidEnter:(id)arg1 identifier:(id)arg2 draggedIconIdentifiers:(id)arg3 inIconListView:(id)arg4;
- (void)iconDropSessionDidEnter:(id)arg1 inIconListView:(id)arg2;
- (_Bool)canAcceptDropInSession:(id)arg1 inIconListView:(id)arg2;
- (_Bool)canHandleIconDropSession:(id)arg1 inIconListView:(id)arg2;
- (void)iconView:(id)arg1 willUseDragPreview:(id)arg2 session:(id)arg3;
- (void)iconView:(id)arg1 willAnimateDragCancelWithAnimator:(id)arg2;
- (void)iconView:(id)arg1 willUsePreviewForCancelling:(id)arg2 targetIconView:(id)arg3;
- (id)iconViewWillCancelDrag:(id)arg1;
- (void)iconView:(id)arg1 didEndDragSession:(id)arg2 withOperation:(unsigned long long)arg3;
- (void)iconView:(id)arg1 session:(id)arg2 willEndWithOperation:(unsigned long long)arg3;
- (void)iconView:(id)arg1 willAddDragItems:(id)arg2 toSession:(id)arg3;
- (_Bool)iconView:(id)arg1 canAddDragItemsToSession:(id)arg2;
- (void)iconViewWillBeginDrag:(id)arg1 session:(id)arg2;
- (void)iconView:(id)arg1 dragLiftAnimationDidChangeDirection:(long long)arg2;
- (void)iconView:(id)arg1 willAnimateDragLiftWithAnimator:(id)arg2 session:(id)arg3;
- (_Bool)iconViewCanBeginDrags:(id)arg1;
@property(readonly, copy) NSString *description;
- (unsigned long long)maximumAllowedIconDroppingAnimationsForListView:(id)arg1;
- (id)_windowForMedusaDragPlatters;
- (void)removePlatterViewFromMedusaDragOffscreenWindow:(id)arg1;
- (void)addPlatterViewToMedusaDragOffscreenWindow:(id)arg1;
- (void)_handleScaleAdjustmentForDropSession:(id)arg1 currentListView:(id)arg2;
- (_Bool)canMakeIconViewRecipient:(id)arg1;
- (_Bool)requiresEditingModeForDrops;
- (_Bool)shouldBeginEditingWhenDragPauses;
- (_Bool)shouldBeginEditingWhenAddingDragItems;
- (double)delayAfterAfterLiftPreviewToBeginEditing;
- (_Bool)shouldCancelDragsWhenEditingEnds;
- (_Bool)shouldBeginEditingWhenLiftPreviewBegins;
- (_Bool)shouldBeginEditingWhenDragBegins;
- (_Bool)shouldUseGhostIconForIconView:(id)arg1;
- (void)watchdogDragWithIdentifier:(id)arg1;
- (void)cancelAllDrags;
- (void)cancelEditingAndAllDrags;
- (void)noteFolderControllerWillClose:(id)arg1;
- (void)noteFolderBeganScrolling;
- (void)noteIconTapped;
- (void)setIndexPath:(id)arg1 whenRevertingIconsWithPathPrefix:(id)arg2;
- (void)compactAndLayoutRootIconLists;
- (void)compactAndLayoutRootIconListsWithDuration:(double)arg1;
- (void)updateExistingIconPlaceholderForDragWithIdentifier:(id)arg1;
- (void)swapTrackedIcon:(id)arg1 withIcon:(id)arg2;
- (void)revertLocationForIcon:(id)arg1 toPath:(id)arg2;
- (id)fullIndexPathForRevertingIcon:(id)arg1 context:(id)arg2;
- (void)revertActiveDragChanges;
- (void)revertDragChangesForDragWithIdentifier:(id)arg1;
- (void)captureInitialIconStateToDragContext:(id)arg1;
- (void)stopTrackingDragLocationForEditingForDragWithIdentifier:(id)arg1;
- (void)editingLongPressTimerFired:(id)arg1;
- (void)cancelEditingLongPressTimer;
- (void)startEditingLongPressTimer;
- (void)startTrackingDragLocationForEditingFromDropSession:(id)arg1 orDragSession:(id)arg2;
- (void)removeEmptyFoldersInFolder:(id)arg1;
- (void)removeEmptyFolders;
- (void)removeIconsWithDraggedIconIdentifiers:(id)arg1 savingOriginsToContext:(id)arg2;
- (void)removeAllGrabbedIconViews;
- (id)_replaceDraggedIconViewWithPlaceholder:(id)arg1;
- (_Bool)replaceDragPlaceholderWithReferencedIcons:(id)arg1;
- (_Bool)replaceDragPlaceholdersWithReferencedIconsInDragWithIdentifier:(id)arg1;
- (_Bool)replaceAllDragPlaceholdersWithReferencedIcons;
- (_Bool)removeAllDragPlaceholdersInFolder:(id)arg1 passingTest:(CDUnknownBlockType)arg2;
- (_Bool)removeAllDragPlaceholders;
- (_Bool)removeDragPlaceholdersForDragWithIdentifier:(id)arg1 placeholderPath:(out id *)arg2;
- (_Bool)removeDragPlaceholdersForDragWithIdentifier:(id)arg1;
- (id)draggedIconsForIdentifiers:(id)arg1;
- (id)draggedIconForIdentifier:(id)arg1;
- (id)iconIdentifierForDragItem:(id)arg1;
- (id)appDragLocalContextForDragItem:(id)arg1;
- (void)addAppLocalContextsFromDragItems:(id)arg1 toDragWithIdentifier:(id)arg2;
- (void)watchdogTimerDidFire:(id)arg1;
- (void)resetWatchdogTimerForDragWithIdentifier:(id)arg1 timeout:(double)arg2;
- (void)changeStateOfDragWithIdentifier:(id)arg1 toState:(long long)arg2;
- (void)_stopTrackingDragIfPossibleWithIdentifier:(id)arg1;
- (void)_stopTrackingDragWithIdentifier:(id)arg1;
- (void)_startTrackingDragWithIdentifier:(id)arg1;
- (_Bool)_isTrackingDragWithIdentifier:(id)arg1;
- (_Bool)_isTrackingDrag:(id)arg1;
- (id)iconDragContextForDragWithIdentifier:(id)arg1;
- (id)iconDragContextForDragSession:(id)arg1;
- (id)iconDragContextForDropSession:(id)arg1;
- (id)uniqueIdentifierForIconDragSession:(id)arg1;
- (id)uniqueIdentifierForIconDropSession:(id)arg1;
- (id)allDragIdentifiers;
- (void)enumerateIconDragContextsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateIconDragIdentifiersUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)isTrackingDragMatchingPredicate:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic, getter=isTrackingActiveOrDroppingIconDrags) _Bool trackingActiveOrDroppingIconDrags;
@property(readonly, nonatomic, getter=isTrackingDroppingIconDrags) _Bool trackingDroppingIconDrags;
@property(readonly, nonatomic, getter=isTrackingUserActiveIconDrags) _Bool trackingUserActiveIconDrags;
- (_Bool)isTrackingDragInUserActiveLiftPreviewOriginatingFromIconView:(id)arg1;
- (_Bool)isTrackingUserActiveDragOriginatingFromIconView:(id)arg1;
- (_Bool)isTrackingDragOriginatingFromIconView:(id)arg1;
- (_Bool)isTrackingDragOfIcon:(id)arg1;
@property(readonly, nonatomic, getter=isTrackingMultipleItemIconDrags) _Bool trackingMultipleItemIconDrags;
@property(readonly, nonatomic, getter=isTrackingMultipleIconDrags) _Bool trackingMultipleIconDrags;
@property(readonly, nonatomic, getter=isIconDragging) _Bool iconDragging;
- (void)_cleanUpAllDraggingState;
- (id)rootFolder;
- (id)model;
- (id)initWithIconController:(id)arg1 alertManager:(id)arg2 alertItemsController:(id)arg3 assistantController:(id)arg4;
- (void)simulateIconDraggingEndedWithIdentifier:(id)arg1;
- (void)simulatePerformIconDropWithIdentifier:(id)arg1 inIconListView:(id)arg2;
- (void)simulateIconDragWithIdentifier:(id)arg1 didPauseAtLocation:(struct CGPoint)arg2 inIconListView:(id)arg3;
- (id)simulateiconDropSessionDidEnterWithIconIdentifiers:(id)arg1 inIconListView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

