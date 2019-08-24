//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCOperation.h>

@class FCCloudContext, FCDateRange, FCFeedPersonalizedItems, NSArray, NSDictionary, NSError;
@protocol FCCoreConfiguration;

@interface FCMyArticlesOperation : FCOperation
{
    _Bool _streamFeedItems;
    id <FCCoreConfiguration> _configuration;
    FCCloudContext *_context;
    FCDateRange *_dateRange;
    CDUnknownBlockType _feedItemsChangedHandler;
    NSArray *_feedItems;
    FCFeedPersonalizedItems *_nonEditorialPersonalizedArticles;
    NSDictionary *_feedContextByFeedID;
    NSError *_error;
    long long _binOverride;
    CDUnknownBlockType _feedItemCompletionBlock;
    unsigned long long _maxNumberOfFeedsToQuery;
    unsigned long long _perFeedLimit;
}

@property(nonatomic) unsigned long long perFeedLimit; // @synthesize perFeedLimit=_perFeedLimit;
@property(nonatomic) unsigned long long maxNumberOfFeedsToQuery; // @synthesize maxNumberOfFeedsToQuery=_maxNumberOfFeedsToQuery;
@property(copy, nonatomic) CDUnknownBlockType feedItemCompletionBlock; // @synthesize feedItemCompletionBlock=_feedItemCompletionBlock;
@property(nonatomic) long long binOverride; // @synthesize binOverride=_binOverride;
@property(copy) NSError *error; // @synthesize error=_error;
@property(copy) NSDictionary *feedContextByFeedID; // @synthesize feedContextByFeedID=_feedContextByFeedID;
@property(retain) FCFeedPersonalizedItems *nonEditorialPersonalizedArticles; // @synthesize nonEditorialPersonalizedArticles=_nonEditorialPersonalizedArticles;
@property(copy) NSArray *feedItems; // @synthesize feedItems=_feedItems;
@property(copy, nonatomic) CDUnknownBlockType feedItemsChangedHandler; // @synthesize feedItemsChangedHandler=_feedItemsChangedHandler;
@property(nonatomic) _Bool streamFeedItems; // @synthesize streamFeedItems=_streamFeedItems;
@property(copy, nonatomic) FCDateRange *dateRange; // @synthesize dateRange=_dateRange;
@property(retain, nonatomic) FCCloudContext *context; // @synthesize context=_context;
@property(copy, nonatomic) id <FCCoreConfiguration> configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;
- (void)_appendFeedItems:(id)arg1;
- (void)_fetchTagsForQueryingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (_Bool)validateOperation;
@property(readonly, copy) NSArray *nonEditorialFeedItems;
- (id)init;

@end
