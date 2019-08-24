//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DNDEventBehaviorResolutionService, MFFuture;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _MFSoundBehaviorOverridesMonitor : NSObject
{
    DNDEventBehaviorResolutionService *_dndBehaviorResolutionService;
    NSObject<OS_dispatch_queue> *_dndBehaviorResolutionServiceQueue;
    MFFuture *_behaviorOverrideTypes;
}

+ (id)sharedInstance;
@property(readonly) MFFuture *behaviorOverrideTypes; // @synthesize behaviorOverrideTypes=_behaviorOverrideTypes;
- (void).cxx_destruct;
- (id)_resolveDNDBehavior;
- (id)init;

@end
