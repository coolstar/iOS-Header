//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray;

@protocol MTSyncStorage
- (void)savePendingChanges:(NSArray *)arg1;
- (void)loadPendingChangesWithCompletion:(void (^)(NSArray *))arg1;
@end
