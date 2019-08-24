//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GKEventEmitter;

@interface GKScreenConfigurationController : NSObject
{
    double _greatestScreenScale;
    GKEventEmitter *_emitter;
}

+ (double)_scaleForCurrentDisplayConfiguration;
+ (id)sharedController;
@property(readonly) double greatestScreenScale; // @synthesize greatestScreenScale=_greatestScreenScale;
@property(retain, nonatomic) GKEventEmitter *emitter; // @synthesize emitter=_emitter;
- (void)_screensDidChange:(id)arg1;
- (void)unregisterListener:(id)arg1;
- (void)registerListener:(id)arg1;
- (void)dealloc;
- (id)init;

@end
