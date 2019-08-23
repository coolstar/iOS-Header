//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class BSAction, FBScene, SBCarDisplaySceneManager, SBSceneLayoutViewController;
@protocol SBWindowLayoutStrategy;

@protocol SBCarDisplaySceneManagerDelegate <NSObject>
- (id <SBWindowLayoutStrategy>)sceneWindowLayoutStrategyForCarDisplaySceneManager:(SBCarDisplaySceneManager *)arg1;
- (SBSceneLayoutViewController *)newLayoutControllerForCarDisplaySceneManager:(SBCarDisplaySceneManager *)arg1;
- (_Bool)handleAction:(BSAction *)arg1 fromScene:(FBScene *)arg2 forCarDisplaySceneManager:(SBCarDisplaySceneManager *)arg3;
@end

