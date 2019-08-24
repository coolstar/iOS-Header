//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKit/CKDatabaseOperation.h>

@class NSString;

@interface CKFetchWebAuthTokenOperation : CKDatabaseOperation
{
    CDUnknownBlockType _fetchWebAuthTokenCompletionBlock;
    NSString *_APIToken;
    NSString *_webAuthToken;
}

@property(copy, nonatomic) NSString *webAuthToken; // @synthesize webAuthToken=_webAuthToken;
@property(copy, nonatomic) NSString *APIToken; // @synthesize APIToken=_APIToken;
- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleCompletionCallback:(id)arg1;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (void)performCKOperation;
- (_Bool)hasCKOperationCallbacksSet;
- (Class)operationInfoClass;
- (id)activityCreate;
- (_Bool)CKOperationShouldRun:(id *)arg1;
@property(copy, nonatomic) CDUnknownBlockType fetchWebAuthTokenCompletionBlock; // @synthesize fetchWebAuthTokenCompletionBlock=_fetchWebAuthTokenCompletionBlock;
- (id)initWithAPIToken:(id)arg1;
- (id)init;

@end
