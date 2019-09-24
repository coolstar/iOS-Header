//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class EFQueue, NSMutableSet;

@interface EFResourcePool : NSObject
{
    struct os_unfair_lock_s _handleResourceLock;
    unsigned long long _uncreatedResourcesCount;
    EFQueue *_activeResources;
    NSMutableSet *_inactiveResources;
}

@property(readonly, nonatomic) NSMutableSet *inactiveResources; // @synthesize inactiveResources=_inactiveResources;
@property(readonly, nonatomic) EFQueue *activeResources; // @synthesize activeResources=_activeResources;
@property(nonatomic) unsigned long long uncreatedResourcesCount; // @synthesize uncreatedResourcesCount=_uncreatedResourcesCount;
- (void).cxx_destruct;
- (void)releaseResource:(id)arg1;
- (id)acquireResource;
- (id)initWithCount:(unsigned long long)arg1;

@end
