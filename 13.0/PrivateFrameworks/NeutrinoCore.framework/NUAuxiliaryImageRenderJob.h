//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NURenderJob.h>

@class CIRenderTask, NUCVPixelBuffer;
@protocol NUAuxiliaryImage;

@interface NUAuxiliaryImageRenderJob : NURenderJob
{
    unsigned int _pixelFormat;
    CIRenderTask *_renderTask;
    NUCVPixelBuffer *_cvBuffer;
    id <NUAuxiliaryImage> _auxiliaryImage;
    long long _auxiliaryImageType;
}

@property long long auxiliaryImageType; // @synthesize auxiliaryImageType=_auxiliaryImageType;
@property(retain) id <NUAuxiliaryImage> auxiliaryImage; // @synthesize auxiliaryImage=_auxiliaryImage;
- (void).cxx_destruct;
- (id)result;
- (void)cleanUp;
- (_Bool)complete:(out id *)arg1;
- (_Bool)render:(out id *)arg1;
- (_Bool)prepare:(out id *)arg1;
- (id)newRenderPipelineStateForEvaluationMode:(long long)arg1;
- (id)scalePolicy;
- (_Bool)wantsRenderScaleClampedToNativeScale;
- (_Bool)wantsRenderNodeCached;
- (_Bool)wantsPrepareNodeCached;
- (_Bool)wantsOutputImage;
- (_Bool)wantsOutputGeometry;

@end
