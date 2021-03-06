//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVFoundation/NSCopying-Protocol.h>

@class NSString;

@interface AVMomentCaptureSettings : NSObject <NSCopying>
{
    long long _uniqueID;
    unsigned long long _userInitiatedCaptureTime;
    long long _torchMode;
    long long _flashMode;
    _Bool _autoRedEyeReductionEnabled;
    long long _digitalFlashMode;
    long long _photoQualityPrioritization;
    long long _HDRMode;
    _Bool _autoOriginalPhotoDeliveryEnabled;
    NSString *_bravoCameraSelectionBehaviorForRecording;
    _Bool _autoSpatialOverCaptureEnabled;
    _Bool _autoDeferredProcessingEnabled;
}

+ (id)settingsWithUserInitiatedCaptureTime:(unsigned long long)arg1 uniqueID:(long long)arg2;
+ (id)settingsWithUserInitiatedCaptureTime:(unsigned long long)arg1;
@property(nonatomic, getter=isAutoDeferredProcessingEnabled) _Bool autoDeferredProcessingEnabled; // @synthesize autoDeferredProcessingEnabled=_autoDeferredProcessingEnabled;
@property(nonatomic, getter=isAutoSpatialOverCaptureEnabled) _Bool autoSpatialOverCaptureEnabled; // @synthesize autoSpatialOverCaptureEnabled=_autoSpatialOverCaptureEnabled;
@property(nonatomic, getter=isAutoOriginalPhotoDeliveryEnabled) _Bool autoOriginalPhotoDeliveryEnabled; // @synthesize autoOriginalPhotoDeliveryEnabled=_autoOriginalPhotoDeliveryEnabled;
@property(nonatomic, getter=isAutoRedEyeReductionEnabled) _Bool autoRedEyeReductionEnabled; // @synthesize autoRedEyeReductionEnabled=_autoRedEyeReductionEnabled;
@property(readonly, nonatomic) unsigned long long userInitiatedCaptureTime; // @synthesize userInitiatedCaptureTime=_userInitiatedCaptureTime;
@property(readonly, nonatomic) long long uniqueID; // @synthesize uniqueID=_uniqueID;
@property(copy, nonatomic) NSString *bravoCameraSelectionBehaviorForRecording;
@property(nonatomic) long long HDRMode;
@property(nonatomic) long long photoQualityPrioritization;
@property(nonatomic) long long digitalFlashMode;
@property(nonatomic) long long flashMode;
@property(nonatomic) long long torchMode;
- (id)description;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)_initWithUserInitiatedCaptureTime:(unsigned long long)arg1 uniqueID:(long long)arg2;

@end

