//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKClinicalAuthorizationSettingsViewController.h>

#import "WDUserActivityResponder-Protocol.h"

@class NSString, WDProfile;

@interface WDClinicalAuthorizationSettingsViewController : HKClinicalAuthorizationSettingsViewController <WDUserActivityResponder>
{
    WDProfile *_profile;
}

+ (id)contextUsingProfile:(id)arg1 source:(id)arg2;
@property(readonly, nonatomic) __weak WDProfile *profile; // @synthesize profile=_profile;
- (void).cxx_destruct;
- (id)applyTransitionActivity:(id)arg1;
- (void)applyChangeActivity:(id)arg1;
- (id)initWithProfile:(id)arg1 source:(id)arg2;
- (id)initWithContext:(id)arg1 style:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
