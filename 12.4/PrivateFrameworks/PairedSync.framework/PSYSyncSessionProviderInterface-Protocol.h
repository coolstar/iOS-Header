//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PairedSync/NSObject-Protocol.h>

@protocol PSYSyncSessionProviderInterface <NSObject>
- (oneway void)requestActiveSyncSessionWithCompletion:(void (^)(PSYSyncSession *, NSSet *, NSError *))arg1;
- (oneway void)checkin:(void (^)(_Bool))arg1;
@end
