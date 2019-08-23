//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SBMainSwitcherAnimatedTransitioning-Protocol.h"
#import "SBSceneLayoutViewControllerTransitioningDelegate-Protocol.h"

@class NSString, SBAppLayout, SBApplication, SBBestAppSuggestion, SBWorkspaceApplicationSceneTransitionContext;
@protocol SBMainAppSwitcherContentViewControllerDataSource, SBMainAppSwitcherContentViewControllerDelegate;

@protocol SBMainAppSwitcherContentViewControlling <SBSceneLayoutViewControllerTransitioningDelegate, SBMainSwitcherAnimatedTransitioning>
@property(retain, nonatomic) SBBestAppSuggestion *bestAppSuggestion;
@property(nonatomic) __weak id <SBMainAppSwitcherContentViewControllerDataSource> dataSource;
@property(nonatomic) __weak id <SBMainAppSwitcherContentViewControllerDelegate> delegate;
- (void)failMultitaskingGesturesForReason:(NSString *)arg1;
- (void)respondToSwitcherModelUpdate;
- (void)removeAppLayout:(SBAppLayout *)arg1 forReason:(long long)arg2 modelMutationBlock:(void (^)(void))arg3 completion:(void (^)(_Bool, SBAppLayout *, SBAppLayout *))arg4;
- (void)insertAppLayout:(SBAppLayout *)arg1 atIndex:(unsigned long long)arg2 modelMutationBlock:(void (^)(void))arg3 completion:(void (^)(_Bool, SBAppLayout *, SBAppLayout *))arg4;
- (_Bool)isInAppStatusBarHidden;
- (void)respondToInAppStatusBarRequestedHiddenUpdate;
- (void)forceUpdateInterfaceOrientation:(long long)arg1;
- (_Bool)isPerformingAppZoomUpTransition;
- (_Bool)isUserInteractionEnabled;
- (_Bool)isDisplayingContent;
- (_Bool)shouldUpdateRecentsForTransitionWithContext:(SBWorkspaceApplicationSceneTransitionContext *)arg1 transitionCompleted:(_Bool)arg2;
- (_Bool)shouldUpdateContentOrientationForTransitionWithContext:(SBWorkspaceApplicationSceneTransitionContext *)arg1;
- (double)minimumHomeScreenScale;
- (_Bool)hasInteractiveContentAtBottomOfScreen;
- (double)switcherCardScale;
- (double)snapshotScaleForApplication:(SBApplication *)arg1;
@end

