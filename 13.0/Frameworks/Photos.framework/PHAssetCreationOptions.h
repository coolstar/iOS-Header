//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PHAssetCreationAdjustmentBakeInOptions, PHAssetCreationMetadataCopyOptions;

@interface PHAssetCreationOptions : NSObject
{
    _Bool _shouldDownloadOrCloudReReferenceMissingResources;
    _Bool _resetUserSpecificMetadata;
    _Bool _copyStillPhotoFromLivePhoto;
    _Bool _copyOriginal;
    _Bool _copySinglePhotoFromBurst;
    CDUnknownBlockType _destinationAssetAvailabilityHandler;
    PHAssetCreationAdjustmentBakeInOptions *_adjustmentBakeInOptions;
    PHAssetCreationMetadataCopyOptions *_metadataCopyOptions;
    CDStruct_1b6d18a9 _stillSourceTime;
}

@property(nonatomic) _Bool copySinglePhotoFromBurst; // @synthesize copySinglePhotoFromBurst=_copySinglePhotoFromBurst;
@property(nonatomic) _Bool copyOriginal; // @synthesize copyOriginal=_copyOriginal;
@property(nonatomic) _Bool copyStillPhotoFromLivePhoto; // @synthesize copyStillPhotoFromLivePhoto=_copyStillPhotoFromLivePhoto;
@property(nonatomic) _Bool resetUserSpecificMetadata; // @synthesize resetUserSpecificMetadata=_resetUserSpecificMetadata;
@property(nonatomic) CDStruct_1b6d18a9 stillSourceTime; // @synthesize stillSourceTime=_stillSourceTime;
@property(copy, nonatomic) PHAssetCreationMetadataCopyOptions *metadataCopyOptions; // @synthesize metadataCopyOptions=_metadataCopyOptions;
@property(copy, nonatomic) PHAssetCreationAdjustmentBakeInOptions *adjustmentBakeInOptions; // @synthesize adjustmentBakeInOptions=_adjustmentBakeInOptions;
@property(copy, nonatomic) CDUnknownBlockType destinationAssetAvailabilityHandler; // @synthesize destinationAssetAvailabilityHandler=_destinationAssetAvailabilityHandler;
@property(nonatomic) _Bool shouldDownloadOrCloudReReferenceMissingResources; // @synthesize shouldDownloadOrCloudReReferenceMissingResources=_shouldDownloadOrCloudReReferenceMissingResources;
- (void).cxx_destruct;
- (id)init;

@end
