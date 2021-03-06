//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCOperation.h>

@class FCCloudContext, FCVideoArticlesOperationResult, NSError;
@protocol FCCoreConfiguration;

@interface FCVideoArticlesOperation : FCOperation
{
    id <FCCoreConfiguration> _configuration;
    FCCloudContext *_context;
    FCVideoArticlesOperationResult *_topVideosResult;
    FCVideoArticlesOperationResult *_moreVideosResult;
    NSError *_error;
    CDUnknownBlockType _catchUpCompletionHandler;
}

@property(copy) CDUnknownBlockType catchUpCompletionHandler; // @synthesize catchUpCompletionHandler=_catchUpCompletionHandler;
@property(retain) NSError *error; // @synthesize error=_error;
@property(retain) FCVideoArticlesOperationResult *moreVideosResult; // @synthesize moreVideosResult=_moreVideosResult;
@property(retain) FCVideoArticlesOperationResult *topVideosResult; // @synthesize topVideosResult=_topVideosResult;
@property(retain, nonatomic) FCCloudContext *context; // @synthesize context=_context;
@property(copy, nonatomic) id <FCCoreConfiguration> configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (_Bool)validateOperation;

@end

