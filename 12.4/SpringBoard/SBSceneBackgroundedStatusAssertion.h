//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet;

@interface SBSceneBackgroundedStatusAssertion : NSObject
{
    NSSet *_scenes;
    CDUnknownBlockType _invalidationHandler;
}

@property(readonly, copy, nonatomic) NSSet *scenes; // @synthesize scenes=_scenes;
- (void).cxx_destruct;
- (void)invalidate;
- (void)dealloc;
- (id)initWithScenes:(id)arg1 invalidationHandler:(CDUnknownBlockType)arg2;

@end

