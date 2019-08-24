//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreServices/SSMemoryEntity.h>

#import "NSCopying-Protocol.h"

@class NSData, SSDownloadPolicy;

@interface DownloadPolicy : SSMemoryEntity <NSCopying>
{
    SSDownloadPolicy *_cachedPolicy;
}

+ (id)defaultProperties;
+ (Class)databaseEntityClass;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(copy, nonatomic) NSData *policyData;
@property(readonly, nonatomic) SSDownloadPolicy *downloadPolicy;
- (id)copyBackgroundTaskAgentJobs;

@end
