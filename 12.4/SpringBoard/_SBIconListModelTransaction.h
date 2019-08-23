//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString;

@interface _SBIconListModelTransaction : NSObject
{
    NSMutableSet *_addedNodeIdentifiers;
    NSMutableSet *_deletedNodeIdentifiers;
    NSString *_requestID;
}

@property(readonly, copy, nonatomic) NSString *requestID; // @synthesize requestID=_requestID;
- (void).cxx_destruct;
- (void)commitChangesToObservers:(id)arg1 forNode:(id)arg2;
- (void)removeNodeIdentifiers:(id)arg1;
- (void)addNodeIdentifiers:(id)arg1;
- (id)initWithRequestID:(id)arg1;

@end

