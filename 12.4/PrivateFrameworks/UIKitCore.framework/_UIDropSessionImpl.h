//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIDropSession-Protocol.h>
#import <UIKitCore/_UIDragDropSessionInternal-Protocol.h>

@class NSArray, NSProgress, NSString, _UIInternalDraggingSessionDestination;
@protocol UIDragSession;

__attribute__((visibility("hidden")))
@interface _UIDropSessionImpl : NSObject <UIDropSession, _UIDragDropSessionInternal>
{
    NSArray *_items;
    id <UIDragSession> _localDragSession;
    unsigned long long _progressIndicatorStyle;
    _UIInternalDraggingSessionDestination *_sessionDestination;
}

@property(readonly, nonatomic) _UIInternalDraggingSessionDestination *sessionDestination; // @synthesize sessionDestination=_sessionDestination;
@property(nonatomic) unsigned long long progressIndicatorStyle; // @synthesize progressIndicatorStyle=_progressIndicatorStyle;
@property(readonly, nonatomic) id <UIDragSession> localDragSession; // @synthesize localDragSession=_localDragSession;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long _dataOwner;
@property(readonly, nonatomic, getter=_allowsItemsToUpdate) _Bool _allowsItemsToUpdate;
- (void)_itemsNeedUpdate:(id)arg1;
- (id)_createItemsOfClass:(Class)arg1 synchronouslyIfPossible:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_draggingSession;
@property(readonly, nonatomic, getter=_operationMask) unsigned long long operationMask;
- (id)loadObjectsOfClass:(Class)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)canLoadObjectsOfClass:(Class)arg1;
- (_Bool)hasItemsConformingToTypeIdentifiers:(id)arg1;
@property(readonly, nonatomic, getter=isRestrictedToDraggingApplication) _Bool restrictedToDraggingApplication;
@property(readonly, nonatomic) _Bool allowsMoveOperation;
- (struct CGPoint)locationInView:(id)arg1;
@property(readonly, nonatomic) NSArray *items;
@property(readonly) NSProgress *progress;
- (id)initWithSessionDestination:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
