//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MSAssetDownloadScheduler, NSSet;

@interface MSMailDynamicDataAsset : NSObject
{
    _Bool _internal;
    _Bool _shouldIgnoreUserAccountDomains;
    NSSet *_ignoredDomains;
    MSAssetDownloadScheduler *_scheduler;
}

+ (id)_ignoredDomainsFallback;
+ (id)log;
@property(retain, nonatomic) MSAssetDownloadScheduler *scheduler; // @synthesize scheduler=_scheduler;
@property(retain) NSSet *ignoredDomains; // @synthesize ignoredDomains=_ignoredDomains;
@property _Bool shouldIgnoreUserAccountDomains; // @synthesize shouldIgnoreUserAccountDomains=_shouldIgnoreUserAccountDomains;
@property(nonatomic, getter=_isInternal) _Bool _internal; // @synthesize _internal;
- (void).cxx_destruct;
- (void)_updateStateFromLocalAssetURL:(id)arg1;
- (void)_updateIgnoredDomains:(id)arg1;
- (_Bool)shouldIgnoreDomain:(id)arg1;
- (id)initForInternalDevice:(_Bool)arg1;
- (_Bool)_updateStateFromAsset:(id)arg1;
- (void)_queryForAssetWithCompletion:(CDUnknownBlockType)arg1;
- (void)_downloadAssetCatalogWithCompletion:(CDUnknownBlockType)arg1;
- (void)_downloadAssetAndUpdateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_updateFromLocalAsset;

@end

