//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, PHAsset, PHPhotoLibrary;

@interface PHRelatedFetchOptions : NSObject
{
    _Bool _enableDiversity;
    _Bool _debugInfoEnabled;
    NSArray *_excludedAssetCollections;
    PHAsset *_referenceAsset;
    unsigned long long _fetchLimit;
    PHPhotoLibrary *_photoLibrary;
}

@property(nonatomic, getter=isDebugInfoEnabled) _Bool debugInfoEnabled; // @synthesize debugInfoEnabled=_debugInfoEnabled;
@property(retain, nonatomic) PHPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
@property(nonatomic) _Bool enableDiversity; // @synthesize enableDiversity=_enableDiversity;
@property(nonatomic) unsigned long long fetchLimit; // @synthesize fetchLimit=_fetchLimit;
@property(retain, nonatomic) PHAsset *referenceAsset; // @synthesize referenceAsset=_referenceAsset;
@property(retain, nonatomic) NSArray *excludedAssetCollections; // @synthesize excludedAssetCollections=_excludedAssetCollections;
- (void).cxx_destruct;

@end
