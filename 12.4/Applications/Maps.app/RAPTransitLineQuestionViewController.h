//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "RAPReportTableViewController.h"

#import "RAPInstrumentableTarget-Protocol.h"

@class NSString, RAPReportComposerCommentPart, RAPTransitLineQuestion;

__attribute__((visibility("hidden")))
@interface RAPTransitLineQuestionViewController : RAPReportTableViewController <RAPInstrumentableTarget>
{
    RAPReportComposerCommentPart *_commentPart;
    RAPTransitLineQuestion *_question;
}

@property(readonly, nonatomic) RAPTransitLineQuestion *question; // @synthesize question=_question;
- (void).cxx_destruct;
- (id)tableParts;
- (void)_updateSendButton;
@property(readonly, nonatomic) int analyticTarget;
- (id)initWithReport:(id)arg1 question:(id)arg2 completion:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, nonatomic) int backAction;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
