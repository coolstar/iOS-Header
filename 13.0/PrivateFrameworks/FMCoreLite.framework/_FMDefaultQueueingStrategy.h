//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FMCoreLite/FMQueueingStrategy-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _FMDefaultQueueingStrategy : NSObject <FMQueueingStrategy>
{
}

- (void)enqueueObject:(id)arg1 buffer:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
