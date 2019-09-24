//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFSwitchParameter.h>

#import <ActionKit/ICAppInstallStatusObserver-Protocol.h>

@interface WFTumblrComposeInAppParameter : WFSwitchParameter <ICAppInstallStatusObserver>
{
}

- (void)appRegistry:(id)arg1 installStatusChangedForApp:(id)arg2;
- (_Bool)parameterStateIsValid:(id)arg1;
- (_Bool)isHidden;
- (void)wasRemovedFromWorkflow;
- (void)wasAddedToWorkflow;
- (id)defaultSerializedRepresentation;

@end
