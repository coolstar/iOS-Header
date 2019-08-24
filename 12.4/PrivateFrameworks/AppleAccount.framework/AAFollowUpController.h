//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleAccount/AAFollowUpProtocol-Protocol.h>

@interface AAFollowUpController : NSObject <AAFollowUpProtocol>
{
}

- (void)dismissFollowUpWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)pendingFollowUpWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)postFollowUpWithIdentifier:(id)arg1 userInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_followUpItemForRenewCredentials:(id)arg1;
- (id)_followUpItemForVerifyTerms:(id)arg1;
- (id)_followUpItemForStartUsing:(id)arg1;
- (id)_followUpItemForIdentifier:(id)arg1 userInfo:(id)arg2;
- (id)_followUpItemForIdentifier:(id)arg1;
- (id)_followUpController;
- (void)dismissFollowUpWithIdentifier:(id)arg1 forAccount:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)postFollowUpWithIdentifier:(id)arg1 forAccount:(id)arg2 userInfo:(id)arg3 completion:(CDUnknownBlockType)arg4;

@end
