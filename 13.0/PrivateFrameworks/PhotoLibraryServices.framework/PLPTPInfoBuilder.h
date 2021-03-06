//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSKnownKeysDictionary, NSMutableDictionary, NSString;
@protocol PLFileManager, PLPTPTransferableAsset;

@interface PLPTPInfoBuilder : NSObject
{
    id <PLPTPTransferableAsset> _asset;
    id <PLFileManager> _fileManager;
    NSString *_filenameForPTP;
    NSKnownKeysDictionary *_info;
    NSMutableDictionary *_relatedFilesMetadata;
}

+ (id)pictureTransferProtocolInformationForAsset:(id)arg1 asFirstAsset:(_Bool)arg2;
+ (id)_ptpCalendar;
- (void).cxx_destruct;
- (_Bool)_buildAdjustmentRelatedFile:(id)arg1;
- (_Bool)_buildDiagnosticRelatedFile:(id)arg1;
- (_Bool)_buildSidecarRelatedFiles:(id)arg1;
- (void)_buildRelatedFiles;
- (void)_buildTimelapse;
- (void)_buildSlowMo;
- (void)_buildBurst;
- (void)_buildGPSInformation;
- (void)_durationOfTheAsset;
- (void)_buildModificationAndCreationDate;
- (void)_buildPhotoKey;
- (void)_buildOrientation;
- (void)_buildThumbnailDimensions;
- (void)_buildImageDimensions;
- (void)_buildThumbnailOffsetAndLength;
- (void)_buildOriginatingAssetID;
- (void)_buildFileSize;
- (void)_buildExifAvailable;
- (void)_buildCloudPhotosEnabledWithFirstAsset:(_Bool)arg1;
- (_Bool)_buildDirectoryPathAndFilename;
- (_Bool)_suppressPtpInfo;
- (id)pictureTransferProtocolInformationAsFirstAsset:(_Bool)arg1;
- (id)initWithAsset:(id)arg1 fileManager:(id)arg2;
- (id)initWithAsset:(id)arg1;

@end

