//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "AgentOperation.h"

@class InstallContext;

@interface FinishInstallationOperation : AgentOperation
{
    _Bool _canceled;
    InstallContext *_context;
}

- (void).cxx_destruct;
- (void)_softwareUpdates;
- (void)_appReceipt;
- (void)run;
- (id)initWithParentOperation:(id)arg1 installCanceled:(_Bool)arg2;

@end
