//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ScreenTimeUI/NSObject-Protocol.h>

@class NSManagedObjectID, RMFetchResultsRequest, RMGroupFetchedResultsController;

@protocol RMGroupFetchedResultsControllerDelegate <NSObject>

@optional
- (void)groupResultsControllerDidChangeContents:(RMGroupFetchedResultsController *)arg1;
- (void)groupResultsController:(RMGroupFetchedResultsController *)arg1 didChangeResultsForRequest:(RMFetchResultsRequest *)arg2 objectID:(NSManagedObjectID *)arg3 changeType:(unsigned long long)arg4;
@end
