//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TouchML/NSObject-Protocol.h>

@class NSString;

@protocol TMLObservable <NSObject>
- (void)tmlRemoveObserver:(id)arg1 forKeyPath:(NSString *)arg2;
- (void)tmlAddObserver:(id)arg1 forKeyPath:(NSString *)arg2 callback:(void (^)(id <TMLObservable>, NSString *, id))arg3;
@end
