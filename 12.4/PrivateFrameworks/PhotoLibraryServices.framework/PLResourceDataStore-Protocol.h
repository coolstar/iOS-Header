//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/NSObject-Protocol.h>

@class NSArray, NSData, NSManagedObjectContext, NSSet, NSString, NSURL, PLInternalResource, PLManagedAsset, PLResourceDataStoreOptions, PLResourceLocalAvailabilityRequestOptions, PLValidatedExternalResource;
@protocol PLAssetID, PLResource, PLResourceDataStoreKey;

@protocol PLResourceDataStore <NSObject>
+ (NSArray *)supportedRecipes;
+ (unsigned short)keyLengthWithDataPreview:(unsigned char)arg1;
+ (unsigned int)storeID;
- (void)requestStreamingURLForResource:(id <PLResource>)arg1 asset:(PLManagedAsset *)arg2 inContext:(NSManagedObjectContext *)arg3 completion:(void (^)(NSError *, NSURL *, NSDate *))arg4;
- (_Bool)canStreamResource:(PLInternalResource *)arg1;
- (_Bool)videoResource:(PLInternalResource *)arg1 matchesOrExceedsQualityLevel:(unsigned int)arg2;
- (void)requestRemoteAvailabilityChange:(short)arg1 forResource:(id <PLResource>)arg2 asset:(PLManagedAsset *)arg3 inContext:(NSManagedObjectContext *)arg4 options:(id)arg5 completion:(void (^)(NSError *, PLInternalResource *))arg6;
- (void)cancelLocalAvailabilityChangeRequest:(unsigned long long)arg1;
- (unsigned long long)requestLocalAvailabilityChange:(short)arg1 forResource:(id <PLResource>)arg2 asset:(PLManagedAsset *)arg3 inContext:(NSManagedObjectContext *)arg4 options:(PLResourceLocalAvailabilityRequestOptions *)arg5 completion:(void (^)(NSError *, long long, PLInternalResource *))arg6;
- (_Bool)storeExternalResource:(PLValidatedExternalResource *)arg1 forAsset:(PLManagedAsset *)arg2 inContext:(NSManagedObjectContext *)arg3 options:(PLResourceDataStoreOptions *)arg4 error:(id *)arg5 resultingResource:(id *)arg6;
- (_Bool)canStoreExternalResource:(PLValidatedExternalResource *)arg1;
- (NSArray *)virtualResourcesForAsset:(PLManagedAsset *)arg1;
- (NSSet *)updateDerivativeResourcesForAsset:(PLManagedAsset *)arg1 forLifecycleEvent:(unsigned int)arg2;
- (NSURL *)resourceURLForKey:(id <PLResourceDataStoreKey>)arg1 assetID:(id <PLAssetID>)arg2;
- (NSData *)resourceDataForKey:(id <PLResourceDataStoreKey>)arg1 assetID:(id <PLAssetID>)arg2;
- (id <PLResourceDataStoreKey>)keyFromKeyStruct:(const void *)arg1;
- (NSString *)descriptionForSubtype:(long long)arg1;
- (NSString *)name;
@end

