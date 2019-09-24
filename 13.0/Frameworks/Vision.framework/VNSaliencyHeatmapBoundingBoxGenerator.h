//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Vision/VNEspressoModelFileBasedDetector.h>

__attribute__((visibility("hidden")))
@interface VNSaliencyHeatmapBoundingBoxGenerator : VNEspressoModelFileBasedDetector
{
}

+ (id)keyForDetectorWithConfigurationOptions:(id)arg1;
+ (id)configurationOptionKeysForDetectorKey;
+ (void)recordDefaultConfigurationOptionsInDictionary:(id)arg1;
- (id)processWithOptions:(id)arg1 regionOfInterest:(struct CGRect)arg2 warningRecorder:(id)arg3 error:(id *)arg4;
- (_Bool)supportsProcessingDevice:(id)arg1;
- (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg1;
- (id)espressoModelFileNameForConfigurationOptions:(id)arg1;
- (struct __CVBuffer *)_createScaledOneComponent32FloatPixelBufferFromImageBuffer:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)_observationsForOneComponent32FloatPixelBuffer:(struct __CVBuffer *)arg1 options:(id)arg2 regionOfInterest:(struct CGRect)arg3 error:(id *)arg4;

@end
