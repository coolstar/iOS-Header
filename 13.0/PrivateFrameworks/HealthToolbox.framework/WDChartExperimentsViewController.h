//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthToolbox/WDHealthTableViewController.h>

#import <HealthToolbox/WDUserActivityResponder-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WDChartExperimentsViewController : WDHealthTableViewController <WDUserActivityResponder>
{
}

+ (id)tableViewSectionClasses;
- (id)applyTransitionActivity:(id)arg1;
- (void)applyChangeActivity:(id)arg1;
- (void)viewDidLoad;
- (id)initWithStyle:(long long)arg1 profile:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
