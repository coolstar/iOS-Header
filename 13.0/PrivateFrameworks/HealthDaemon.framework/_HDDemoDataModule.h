//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSOperationQueue;
@protocol OS_dispatch_source, _HDDemoDataModuleDelegate;

@interface _HDDemoDataModule : NSObject
{
    NSOperationQueue *_operationQueue;
    NSObject<OS_dispatch_source> *_timerSource;
    id <_HDDemoDataModuleDelegate> _delegate;
    NSDate *_lastFireDate;
}

@property(readonly, nonatomic) NSDate *lastFireDate; // @synthesize lastFireDate=_lastFireDate;
@property(nonatomic) __weak id <_HDDemoDataModuleDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)timerDidFireWithInterval:(double)arg1;
- (void)scheduleNextFireWithInterval:(double)arg1;
- (void)scheduleNextFire;
- (void)handleDataObject:(id)arg1;
@property(readonly, nonatomic) double nextFireInterval;
- (void)stop;
- (void)start;
- (id)initWithOperationQueue:(id)arg1;

@end
