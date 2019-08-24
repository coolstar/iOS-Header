//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/NSObject-Protocol.h>

@class CPLResource, CPLScopedIdentifier, NSDate, NSManagedObjectID, NSString;

@protocol PLCloudResource <NSObject>
@property(retain, nonatomic) NSDate *prunedAt;
@property(retain, nonatomic) NSDate *lastOnDemandDownloadDate;
@property(retain, nonatomic) NSDate *lastPrefetchDate;
@property(nonatomic) short prefetchCount;
@property(nonatomic) short cloudLocalState;
@property(readonly, retain, nonatomic) NSString *utiString;
@property(readonly, nonatomic) long long width;
@property(readonly, nonatomic) long long height;
@property(readonly, retain, nonatomic) CPLScopedIdentifier *scopedIdentifier;
@property(readonly, retain, nonatomic) NSString *itemIdentifier;
@property(readonly, retain, nonatomic) NSString *fingerprint;
@property(readonly, retain, nonatomic) NSString *filePath;
@property(readonly, nonatomic) unsigned long long fileSize;
@property(readonly, nonatomic) _Bool isLocallyAvailable;
@property(nonatomic) _Bool isAvailable;
@property(readonly, nonatomic) unsigned long long sourceCplType;
@property(readonly, nonatomic) unsigned long long cplType;
@property(readonly, retain, nonatomic) NSString *assetUuid;
@property(readonly, nonatomic) NSManagedObjectID *objectID;
- (void)markAsNotLocallyAvailable;
- (void)markAsLocallyAvailableWithFilePath:(NSString *)arg1;
- (CPLResource *)cplResourceIncludeFile:(_Bool)arg1;
@end
