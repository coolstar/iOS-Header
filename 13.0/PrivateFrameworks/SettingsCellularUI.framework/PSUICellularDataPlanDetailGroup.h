//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SettingsCellularUI/PSSpecifierGroup-Protocol.h>

@class NSString, PSListController, PSSpecifier;

__attribute__((visibility("hidden")))
@interface PSUICellularDataPlanDetailGroup : NSObject <PSSpecifierGroup>
{
    PSListController *_listController;
    PSSpecifier *_groupSpecifier;
}

+ (void)configurePlanSpecifiers:(id)arg1 planItem:(id)arg2 target:(id)arg3;
+ (id)accountManageButtonForPlanItem:(id)arg1 target:(id)arg2;
+ (id)specifiersFromCellularPlanItem:(id)arg1 target:(id)arg2;
@property(nonatomic) __weak PSSpecifier *groupSpecifier; // @synthesize groupSpecifier=_groupSpecifier;
@property(nonatomic) __weak PSListController *listController; // @synthesize listController=_listController;
- (void).cxx_destruct;
- (void)managePlanPressed:(id)arg1;
- (id)removeCellularPlanConfirmationTitle:(id)arg1;
- (id)removeCellularPlanConfirmationMessage:(id)arg1;
- (id)localizedManageAccountAlertTitle:(id)arg1;
- (id)lastUpdatedText;
- (id)specifiers;
- (id)initWithListController:(id)arg1 groupSpecifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
