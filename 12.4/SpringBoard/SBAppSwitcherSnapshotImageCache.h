//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SBUIActiveOrientationObserver-Protocol.h"

@class NSArray, NSMutableDictionary, NSString, SBAppSwitcherSettings, SBApplicationController, SBIconController, SBOrientationLockManager;
@protocol OS_dispatch_queue, SBAppSwitcherSnapshotImageCacheDelegate;

@interface SBAppSwitcherSnapshotImageCache : NSObject <SBUIActiveOrientationObserver>
{
    NSObject<OS_dispatch_queue> *_snapshotQueue;
    NSObject<OS_dispatch_queue> *_controlQueue;
    NSMutableDictionary *_cachedSnapshots;
    NSMutableDictionary *_cacheEntryUpdateObservers;
    NSMutableDictionary *_snapshotRequestsCurrentlyBeingLoaded;
    unsigned long long _snapshotRequestSequenceID;
    NSArray *_appLayoutsInPriorityOrder;
    NSArray *_appLayoutsRequiringFullSizeSnapshots;
    NSArray *_defaultAppLayouts;
    long long _lastKnownInterfaceOrientation;
    SBAppSwitcherSettings *_settings;
    struct _NSRange _lastVisibleRange;
    NSArray *_lastHighPriorityAppLayouts;
    NSArray *_lastAllAppLayouts;
    _Bool _lastPriorityBiasedForward;
    _Bool _shouldPurgeNilEntries;
    SBIconController *_iconController;
    SBApplicationController *_applicationController;
    SBOrientationLockManager *_orientationLockManager;
    _Bool _cachingEnabled;
    id <SBAppSwitcherSnapshotImageCacheDelegate> _delegate;
}

@property(nonatomic) _Bool cachingEnabled; // @synthesize cachingEnabled=_cachingEnabled;
@property(nonatomic) __weak id <SBAppSwitcherSnapshotImageCacheDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_uiImageForCGImage:(struct CGImage *)arg1 forSnapshotRequest:(id)arg2;
- (void)_asynchronouslyLoadSnapshotFromRequest:(id)arg1;
- (_Bool)_keepGoingForRequest:(id)arg1;
- (struct CGImage *)_createDecodedImageIfPossible:(struct CGImage *)arg1;
- (void)_addCacheEntryForImage:(id)arg1 fromRequest:(id)arg2;
- (void)_snapshotImage:(id)arg1 finishedLoadingForRequest:(id)arg2;
- (_Bool)_isLoadingForDefaultDisplayItem:(id)arg1;
- (id)_cachableAppLayoutsRequiringFullSizeSnapshots;
- (id)_cachableAppLayouts;
- (_Bool)_isValidSnapshotRequest:(id)arg1;
- (id)_createSnapshotRequestWithDisplayItem:(id)arg1 inAppLayout:(id)arg2 forFullSizeSnapshot:(_Bool)arg3;
- (void)_enqueueSnapshotRequestsForCachableAppLayouts:(id)arg1 forFullSizeSnapshots:(_Bool)arg2;
- (void)_enqueueNextSnapshotRequestIfNecessary;
- (void)_purgeAllSnapshots;
- (void)_purgeAllSnapshotRequests;
- (_Bool)_isValidAppLayout:(id)arg1 withSnapshot:(id)arg2 givenCachableAppLayouts:(id)arg3;
- (void)_purgeLowPriorityFullSizeSnapshots;
- (void)_purgeLowPriorityFullSizeSnapshotRequests;
- (void)_purgeLowPrioritySnapshots;
- (void)_purgeLowPrioritySnapshotRequests;
- (void)_purgeSnapshotsForDisplayItem:(id)arg1;
- (void)_purgeSnapshotRequestsForDisplayItem:(id)arg1;
- (void)_purgeSnapshotRequest:(id)arg1;
- (void)_addObserver:(id)arg1 forDisplayItem:(id)arg2;
- (id)_defaultAppLayouts;
- (id)_fullSizeSnapshotAppLayouts;
- (double)_scaleForDownscaledSnapshots;
- (long long)_orientationForAppLayout:(id)arg1;
- (id)_highPriorityAppLayouts;
- (_Bool)_biasForwardLoading;
- (struct _NSRange)_visibleAppLayoutRange;
- (unsigned long long)_appLayoutsToCacheCount;
- (id)_allAppLayouts;
- (void)activeInterfaceOrientationDidChangeToOrientation:(long long)arg1 willAnimateWithDuration:(double)arg2 fromOrientation:(long long)arg3;
- (void)activeInterfaceOrientationWillChangeToOrientation:(long long)arg1;
- (void)_createDownscaledVariantForRequest:(id)arg1 snapshot:(id)arg2 displayItem:(id)arg3 sceneHandle:(id)arg4 application:(id)arg5;
- (void)_loadSnapshotForRequest:(id)arg1 withDisplayItem:(id)arg2 inAppLayout:(id)arg3;
- (void)_cacheSnapshotForRequest:(id)arg1 withDisplayItem:(id)arg2 inAppLayout:(id)arg3;
- (void)_updateObserversForDisplayItem:(id)arg1 withCacheEntry:(id)arg2;
- (void)_updateAppLayoutPriorityList;
- (void)_snapshotChanged:(id)arg1;
- (void)_setShouldPurgeNilEntry:(_Bool)arg1;
- (id)_representedApplicationSceneEntityForDisplayItem:(id)arg1;
- (id)_cachableAppLayoutsForTesting;
- (id)_appLayoutsInPriorityOrder;
@property(readonly, copy) NSString *description;
- (void)removeSnapshotObserver:(id)arg1;
- (void)addSnapshotUpdateObserver:(id)arg1 forDisplayItem:(id)arg2 inAppLayout:(id)arg3;
- (void)_updateCacheForDisplayItem:(id)arg1;
- (void)updateCache;
- (void)_resetLastCachedValues;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (id)_initWithDelegate:(id)arg1 iconController:(id)arg2 applicationController:(id)arg3 orientationLockManager:(id)arg4 settings:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

