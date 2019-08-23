//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SBDataPlanAlertItem.h"

@class NSString;

@interface SBDataPlanCompletionAlertItem : SBDataPlanAlertItem
{
    NSString *_carrierName;
    _Bool _newAccount;
}

@property(nonatomic, getter=isNewAccount) _Bool newAccount; // @synthesize newAccount=_newAccount;
@property(copy, nonatomic) NSString *carrierName; // @synthesize carrierName=_carrierName;
- (void).cxx_destruct;
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
- (id)initWithCarrierName:(id)arg1 newAccount:(_Bool)arg2;

@end
