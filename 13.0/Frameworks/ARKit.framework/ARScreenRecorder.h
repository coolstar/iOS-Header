//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAssetWriter, AVAssetWriterInput, AVAssetWriterInputPixelBufferAdaptor, NSURL;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface ARScreenRecorder : NSObject
{
    _Bool _isRecording;
    double _firstFrameTime;
    double _previousFrameTime;
    AVAssetWriter *_assetWriter;
    AVAssetWriterInput *_imageInput;
    AVAssetWriterInputPixelBufferAdaptor *_imageInputAdaptor;
    NSObject<OS_dispatch_queue> *_writerQueue;
    NSObject<OS_dispatch_source> *_timer;
    NSURL *_fileURL;
}

+ (id)sharedRecorder;
@property(retain, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *writerQueue; // @synthesize writerQueue=_writerQueue;
@property(retain, nonatomic) AVAssetWriterInputPixelBufferAdaptor *imageInputAdaptor; // @synthesize imageInputAdaptor=_imageInputAdaptor;
@property(retain, nonatomic) AVAssetWriterInput *imageInput; // @synthesize imageInput=_imageInput;
@property(retain, nonatomic) AVAssetWriter *assetWriter; // @synthesize assetWriter=_assetWriter;
@property(nonatomic) double previousFrameTime; // @synthesize previousFrameTime=_previousFrameTime;
@property(nonatomic) double firstFrameTime; // @synthesize firstFrameTime=_firstFrameTime;
@property(nonatomic) _Bool isRecording; // @synthesize isRecording=_isRecording;
- (void).cxx_destruct;
- (void)_finishRecordingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_appendFrame:(id)arg1 forTime:(double)arg2;
- (_Bool)_appendImageData:(id)arg1 forTime:(double)arg2;
- (void)_setupTracksWithImageHeight:(unsigned long long)arg1 width:(unsigned long long)arg2 time:(double)arg3;
- (void)_addImageStreamTrack:(id)arg1;
- (void)_submitFrame:(id)arg1 forTime:(double)arg2;
- (void)_timerFired;
- (id)_recordingUrl;
- (void)stopRecordingAndSaveToCameraRoll:(CDUnknownBlockType)arg1;
- (void)stopCaptureWithHandler:(CDUnknownBlockType)arg1;
- (void)startRecordingWithHandler:(CDUnknownBlockType)arg1;
- (id)init;

@end
