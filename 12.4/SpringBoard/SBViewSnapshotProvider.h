//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIView;

@interface SBViewSnapshotProvider : NSObject
{
    UIView *_view;
    CDUnknownBlockType _completionBlock;
}

@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
- (void).cxx_destruct;
- (void)snapshotAsynchronously:(_Bool)arg1 withImageBlock:(CDUnknownBlockType)arg2;
- (void)snapshotWithImageBlock:(CDUnknownBlockType)arg1;
- (id)snapshot;
- (id)initWithView:(id)arg1;

@end
