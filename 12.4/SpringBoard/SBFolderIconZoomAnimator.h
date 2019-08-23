//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SBScaleIconZoomAnimator.h"

#import "SBSearchGestureObserver-Protocol.h"

@class NSString, SBFloatyFolderView, SBFolderController, SBFolderIcon, SBFolderIconView, SBFolderZoomSettings, SBIconView, _SBInnerFolderIconZoomAnimator;

@interface SBFolderIconZoomAnimator : SBScaleIconZoomAnimator <SBSearchGestureObserver>
{
    SBFolderController *_innerFolderController;
    SBFloatyFolderView *_innerFolderView;
    _SBInnerFolderIconZoomAnimator *_innerZoomAnimator;
    SBIconView *_targetFolderIconView;
}

- (void).cxx_destruct;
- (void)searchGesture:(id)arg1 startedShowing:(_Bool)arg2;
- (void)searchGesture:(id)arg1 changedPercentComplete:(double)arg2;
- (id)_targetIconViewForFolderIcon:(id)arg1;
- (_Bool)_forceSquareZoomDimension;
- (struct CGRect)_zoomedFrame;
- (void)_performAnimationToFraction:(double)arg1 withCentralAnimationSettings:(id)arg2 delay:(double)arg3 alreadyAnimating:(_Bool)arg4 sharedCompletion:(CDUnknownBlockType)arg5;
- (unsigned long long)_numberOfSignificantAnimations;
- (void)_cleanupAnimation;
- (void)_setAnimationFraction:(double)arg1;
- (void)_setupMatchMoveAnimation;
- (void)_setupCounterDockMatchMoveAnimationWithOffset:(double)arg1 layer:(id)arg2 additive:(_Bool)arg3;
- (void)_setupMatchMoveWithDockWithTargetIconCenter:(struct CGPoint)arg1 targetIconAnchor:(struct CGPoint)arg2;
- (void)_setupMatchMoveWithDock;
- (void)_updateDockMatchMoveWithFraction:(double)arg1;
- (void)_prepareAnimation;
- (_Bool)shouldMatchMoveWithDock;
@property(readonly, nonatomic) SBFolderIconView *targetIconView; // @dynamic targetIconView;
- (id)_referenceFolderIconView;
- (id)defaultTargetIconContainerView;
- (id)initWithAnimationContainer:(id)arg1 innerFolderController:(id)arg2 folderIcon:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) SBFolderZoomSettings *settings; // @dynamic settings;
@property(readonly) Class superclass;
@property(readonly, nonatomic) SBFolderIcon *targetIcon; // @dynamic targetIcon;

@end

