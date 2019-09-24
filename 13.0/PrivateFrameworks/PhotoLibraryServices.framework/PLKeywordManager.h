//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, PLPhotoLibraryPathManager;
@protocol OS_dispatch_queue;

@interface PLKeywordManager : NSObject
{
    PLPhotoLibraryPathManager *_pathManager;
    NSObject<OS_dispatch_queue> *_writeQueue;
    NSMutableDictionary *_keywordCache;
}

+ (id)_keywordsForAsset:(id)arg1;
+ (id)keywordsForAssets:(id)arg1;
+ (id)keywordsForAsset:(id)arg1;
+ (id)keywordsForAssetWithUUID:(id)arg1 managedObjectContext:(id)arg2;
- (void).cxx_destruct;
- (_Bool)_setKeywords:(id)arg1 forAsset:(id)arg2 managedObjectContext:(id)arg3;
- (id)_inq_keywordObjectsForKeywords:(id)arg1 managedObjectContext:(id)arg2;
- (void)_invalidateKeywordCache;
- (void)_inq_loadKeywordsUsingContextIfNecessaryInManagedObjectContext:(id)arg1;
- (_Bool)setKeywords:(id)arg1 forAsset:(id)arg2;
- (_Bool)setKeywords:(id)arg1 forAssetUUID:(id)arg2 managedObjectContext:(id)arg3;
- (id)initWithPathManager:(id)arg1;

@end
