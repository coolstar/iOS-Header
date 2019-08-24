//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, SPQueryResponse;
@protocol OS_dispatch_queue, SPQueryTaskDelegate;

@interface SPQueryTask : NSObject
{
    NSObject<OS_dispatch_queue> *_queryProcessor;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    SPQueryResponse *_delayedResponse;
    int _unsafeState;
    _Bool _sentSuggestions;
    _Atomic int _updatesDisabled;
    _Atomic struct WaitingResults_s *_deferredUpdate;
    _Bool _forceStableResults;
    _Bool _finished;
    _Bool _live;
    int _state;
    NSObject<SPQueryTaskDelegate> *_delegate;
    unsigned long long _whyQuery;
    unsigned long long _maxTopHitAppResults;
    NSString *_rankingDebugLog;
    NSString *_sessionEntityString;
    NSArray *_sections;
}

+ (void)initialize;
@property(readonly, nonatomic) int unsafeState; // @synthesize unsafeState=_unsafeState;
@property(nonatomic) _Bool live; // @synthesize live=_live;
@property(nonatomic) _Bool finished; // @synthesize finished=_finished;
@property(nonatomic) int state; // @synthesize state=_state;
@property(retain, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(retain, nonatomic) NSString *sessionEntityString; // @synthesize sessionEntityString=_sessionEntityString;
@property(retain, nonatomic) NSString *rankingDebugLog; // @synthesize rankingDebugLog=_rankingDebugLog;
@property(nonatomic) unsigned long long maxTopHitAppResults; // @synthesize maxTopHitAppResults=_maxTopHitAppResults;
@property(nonatomic) unsigned long long whyQuery; // @synthesize whyQuery=_whyQuery;
@property(nonatomic) _Bool forceStableResults; // @synthesize forceStableResults=_forceStableResults;
@property(nonatomic) __weak NSObject<SPQueryTaskDelegate> *delegate; // @synthesize delegate=_delegate;
@property(readonly) NSObject<OS_dispatch_queue> *queryProcessor; // @synthesize queryProcessor=_queryProcessor;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *suggestionsDebugLog;
- (id)unsafeCombinedSuggestions;
- (_Bool)_shouldPromptUserToOpenTTR;
- (void)updateResultsThroughDelegate:(_Bool)arg1 state:(int)arg2 sections:(id)arg3;
- (_Bool)readyToUpdate;
- (void)pushAndPostUpdates;
- (void)postSearchAgentUpdatedResultsToDelegate:(id)arg1;
- (void)disableUpdates;
- (void)enableUpdates;
@property(readonly) NSString *searchString;
- (void)clear;
- (void)cancel;
- (void)start;
- (id)init;

@end
