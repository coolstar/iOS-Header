//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIContextBinding-Protocol.h>

@class FBSScene, NSMapTable, NSString;

__attribute__((visibility("hidden")))
@interface __UISceneSubstrate : NSObject <_UIContextBinding>
{
    FBSScene *_scene;
    NSMapTable *_sceneLayerTable;
}

- (void).cxx_destruct;
- (void)detachContext:(id)arg1;
- (void)attachContext:(id)arg1;
@property(readonly, nonatomic) FBSScene *scene;
- (id)initWithScene:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
