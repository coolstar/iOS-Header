//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SBDashBoardModalViewControllerBase.h"

#import "SBDashBoardModalViewDelegate-Protocol.h"

@class NSString;

@interface SBDashBoardTemperatureWarningViewController : SBDashBoardModalViewControllerBase <SBDashBoardModalViewDelegate>
{
}

- (void)handleSecondaryActionForView:(id)arg1;
- (long long)presentationPriority;
- (void)aggregateBehavior:(id)arg1;
- (void)aggregateAppearance:(id)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

