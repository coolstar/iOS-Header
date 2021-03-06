//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString, NSTimer, RAPImageSubmitter, RAPImageUploader, RAPStorage;
@protocol MKMapServiceFeedbackReportTicket, RAPSubmitterDelegate;

__attribute__((visibility("hidden")))
@interface RAPSubmitter : NSObject
{
    _Bool _sending;
    RAPStorage *_storage;
    unsigned long long _attemptsFailed;
    NSMutableSet *_processedIdentifiers;
    NSTimer *_timerForNextAttempt;
    _Bool _hasAssertion;
    id <MKMapServiceFeedbackReportTicket> _correctionsTicket;
    RAPImageSubmitter *_currentImageSubmitter;
    RAPImageUploader *_currentImageUploader;
    long long _currentSubmissionState;
    _Bool _canStoreUnsentReports;
    _Bool _canSubmitUnsentReports;
    id <RAPSubmitterDelegate> _delegate;
}

+ (_Bool)_isErrorTemporary:(id)arg1;
@property(nonatomic) __weak id <RAPSubmitterDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool canSubmitUnsentReports; // @synthesize canSubmitUnsentReports=_canSubmitUnsentReports;
@property(nonatomic) _Bool canStoreUnsentReports; // @synthesize canStoreUnsentReports=_canStoreUnsentReports;
- (void).cxx_destruct;
- (void)_resubmitNextReport;
- (void)_releaseAssertionIfNeeded;
- (void)_takeAssertionIfNeeded;
- (void)_scheduleNextAttemptIfPossible;
- (void)_moveToSendingStateIfNeeded:(_Bool)arg1;
- (void)_updateSendingState;
- (void)_networkReachabilityDidChange;
- (void)_submitOrEnqueueFeedback:(id)arg1 attachedImages:(id)arg2 mapItemForProblemContext:(id)arg3 userCredentials:(id)arg4 pushToken:(id)arg5 allowContactBackAtEmailAddress:(id)arg6 preferredEmailAddress:(id)arg7 traits:(id)arg8 completion:(CDUnknownBlockType)arg9;
- (void)_processResultWithError:(id)arg1 reportStorage:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_submitPlaceCorrectionRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_updateRequestParameters:(id)arg1 withIdsAndPhotos:(id)arg2;
- (void)_unpackAndResubmitFeedbackData:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) NSString *activityAssertionReason;
- (void)beginReschedulingSendingNowIfNeeded;
- (void)beginSendingNowIfNeeded;
- (void)dealloc;
- (id)initWithStorage:(id)arg1;
- (id)init;
- (void)_cancelCurrentSubmission;
- (void)_enqueueSendingResubmissionData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_storage:(out id *)arg1;
- (id)_reportsOutboxDirectoryURLCreatingIfNeeded:(_Bool)arg1 error:(out id *)arg2;

@end

