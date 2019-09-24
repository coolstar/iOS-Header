//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPAsyncOperation.h>

@class MPModelLibraryAddToPlaylistChangeRequest, NSOperationQueue;

@interface MPModelLibraryAddToPlaylistChangeRequestOperation : MPAsyncOperation
{
    NSOperationQueue *_operationQueue;
    MPModelLibraryAddToPlaylistChangeRequest *_request;
    CDUnknownBlockType _responseHandler;
}

@property(copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
@property(copy, nonatomic) MPModelLibraryAddToPlaylistChangeRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (_Bool)_isCloudLibraryEnabled;
- (void)_finishWithCloudLibraryUpdateForPlaylist:(id)arg1;
- (void)execute;

@end
