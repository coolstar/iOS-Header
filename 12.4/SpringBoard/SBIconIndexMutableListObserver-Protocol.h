//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSSet, SBIconIndexMutableList;

@protocol SBIconIndexMutableListObserver <NSObject>
- (void)listDidMoveNodes:(SBIconIndexMutableList *)arg1;
- (void)list:(SBIconIndexMutableList *)arg1 didRemoveContainedNodeIdentifiers:(NSSet *)arg2;
- (void)list:(SBIconIndexMutableList *)arg1 didAddContainedNodeIdentifiers:(NSSet *)arg2;
@end

