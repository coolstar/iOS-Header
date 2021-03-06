//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AMSPromise;

@interface LegacyTask : NSObject
{
    AMSPromise *_promise;
    struct os_unfair_lock_s _promiseLock;
}

+ (void)_retainTask:(id)arg1;
+ (void)_releaseTask:(id)arg1;
- (void).cxx_destruct;
- (id)performTaskUsingBlock:(CDUnknownBlockType)arg1;
@property(readonly) AMSPromise *promise;
@property(readonly) _Bool isRunning;
@property(readonly) _Bool isFinished;
@property(readonly) _Bool isCanceled;
- (id)init;

@end

