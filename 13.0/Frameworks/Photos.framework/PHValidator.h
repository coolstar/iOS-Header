//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PHValidator : NSObject
{
}

+ (_Bool)isSupportedImage:(id)arg1;
+ (_Bool)isSupportedMovie:(id)arg1;
+ (_Bool)isSupportedAudio:(id)arg1;
+ (_Bool)isSupportedImageUTI:(id)arg1;
+ (_Bool)isSupportedMovieUTI:(id)arg1;
+ (_Bool)isSupportedAudioUTI:(id)arg1;
+ (unsigned char)mediaTypeForURL:(id)arg1;
+ (unsigned char)mediaTypeForUTI:(id)arg1;
+ (id)supportedTypes;
+ (id)supportedImageTypes;
+ (id)supportedAudioTypes;
+ (id)supportedMovieTypes;
+ (_Bool)url:(id)arg1 conformsToUTTypes:(id)arg2;
+ (_Bool)extension:(id)arg1 conformsToUTTypes:(id)arg2;
+ (_Bool)uti:(id)arg1 conformsToUTTypes:(id)arg2;
- (void)getLivePhotoVideoMetadataFromURL:(id)arg1 pairingIdentifier:(id *)arg2 videoDuration:(CDStruct_1b6d18a9 *)arg3 imageDisplayTime:(CDStruct_1b6d18a9 *)arg4;
- (void)getLivePhotoImageMetadataFromURL:(id)arg1 pairingIdentifier:(id *)arg2;
- (_Bool)_validateLivePhotoResourceURLs:(id)arg1 error:(id *)arg2;
- (_Bool)_validateVideoURL:(id)arg1 error:(id *)arg2;
- (_Bool)_validateImageSource:(struct CGImageSource *)arg1 error:(id *)arg2;
- (_Bool)_pathExtension:(id)arg1 conformsToType:(struct __CFString *)arg2;
- (_Bool)isValidVideoPathExtension:(id)arg1;
- (_Bool)isValidImagePathExtension:(id)arg1;
- (_Bool)validateData:(id)arg1 withOptions:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)validateURLs:(id)arg1 withOptions:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)validateURL:(id)arg1 withOptions:(unsigned long long)arg2 error:(id *)arg3;

@end
