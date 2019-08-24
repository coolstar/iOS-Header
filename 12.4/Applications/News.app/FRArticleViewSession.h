//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FRArticleViewContext, NSDate, NSString;
@protocol FCHeadlineProviding, FRFeldsparContext;

@interface FRArticleViewSession : NSObject
{
    _Bool _articleIsVisible;
    _Bool _showedExcerpt;
    _Bool _showedFullArticle;
    _Bool _articleWasReadBeforeOpen;
    _Bool _articleLoaded;
    FRArticleViewContext *_articleContext;
    FRArticleViewContext *_nextArticleContext;
    NSString *_articleViewingSessionID;
    NSDate *_viewStartDate;
    NSDate *_viewEndDate;
    NSDate *_fullArticleStartDate;
    NSString *_articleID;
    long long _articleType;
    id <FCHeadlineProviding> _headline;
    double _maxScrollPositionEnding;
    long long _loadFailureReason;
    id <FRFeldsparContext> _feldsparContext;
    id _viewingToken;
    struct CGRect _articleViewFrameInScreen;
}

@property(nonatomic) __weak id viewingToken; // @synthesize viewingToken=_viewingToken;
@property(retain, nonatomic) id <FRFeldsparContext> feldsparContext; // @synthesize feldsparContext=_feldsparContext;
@property(nonatomic) _Bool articleLoaded; // @synthesize articleLoaded=_articleLoaded;
@property(nonatomic) long long loadFailureReason; // @synthesize loadFailureReason=_loadFailureReason;
@property(nonatomic) double maxScrollPositionEnding; // @synthesize maxScrollPositionEnding=_maxScrollPositionEnding;
@property(nonatomic) _Bool articleWasReadBeforeOpen; // @synthesize articleWasReadBeforeOpen=_articleWasReadBeforeOpen;
@property(retain, nonatomic) id <FCHeadlineProviding> headline; // @synthesize headline=_headline;
@property(nonatomic) long long articleType; // @synthesize articleType=_articleType;
@property(copy, nonatomic) NSString *articleID; // @synthesize articleID=_articleID;
@property(nonatomic) _Bool showedFullArticle; // @synthesize showedFullArticle=_showedFullArticle;
@property(nonatomic) _Bool showedExcerpt; // @synthesize showedExcerpt=_showedExcerpt;
@property(nonatomic) struct CGRect articleViewFrameInScreen; // @synthesize articleViewFrameInScreen=_articleViewFrameInScreen;
@property(retain, nonatomic) NSDate *fullArticleStartDate; // @synthesize fullArticleStartDate=_fullArticleStartDate;
@property(retain, nonatomic) NSDate *viewEndDate; // @synthesize viewEndDate=_viewEndDate;
@property(retain, nonatomic) NSDate *viewStartDate; // @synthesize viewStartDate=_viewStartDate;
@property(nonatomic) _Bool articleIsVisible; // @synthesize articleIsVisible=_articleIsVisible;
@property(retain, nonatomic) NSString *articleViewingSessionID; // @synthesize articleViewingSessionID=_articleViewingSessionID;
@property(retain, nonatomic) FRArticleViewContext *nextArticleContext; // @synthesize nextArticleContext=_nextArticleContext;
@property(retain, nonatomic) FRArticleViewContext *articleContext; // @synthesize articleContext=_articleContext;
- (void).cxx_destruct;
- (void)_removeNotificationForArticleID;
- (void)sendExcerptViewEvent;
- (void)sendArticleViewEvent;
- (void)sendArticleViewRealTimeEvent;
- (void)sendArticleViewExternalEvent;
@property(readonly, nonatomic) double articleSessionDuration;
- (void)articleViewFailedToLoadWithReason:(long long)arg1;
- (void)articleViewFinishedLoadingArticle;
- (void)articleViewDidShowFullArticle;
- (void)articleViewDidShowExcerpt;
- (void)articleViewDidDisappear;
- (void)_setupArticleViewingSessionIfNeeded;
- (void)endIssueViewingSession;
- (void)startIssueViewingSession;
- (void)setArticleMaxScrollPositionEnding:(double)arg1;
- (void)articleViewDidAppear:(id)arg1 viewingToken:(id)arg2;
- (void)articleViewDidLoadHeadline:(id)arg1;
- (void)articleViewWillOpenArticleID:(id)arg1;
- (id)initWithFeldsparContext:(id)arg1 articleViewingSessionID:(id)arg2;
- (id)init;

@end
