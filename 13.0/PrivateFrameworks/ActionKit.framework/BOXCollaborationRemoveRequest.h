//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKit/BOXRequest.h>

@class NSString;

@interface BOXCollaborationRemoveRequest : BOXRequest
{
    NSString *_collaborationID;
}

@property(readonly, nonatomic) NSString *collaborationID; // @synthesize collaborationID=_collaborationID;
- (void).cxx_destruct;
- (void)performRequestWithCompletion:(CDUnknownBlockType)arg1;
- (id)createOperation;
- (id)initWithCollaborationID:(id)arg1;

@end

