//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import <ManagedConfigurationUI/MCUIScrollAnimationResponder-Protocol.h>

@class NSString, UILabel, UIStackView;

__attribute__((visibility("hidden")))
@interface MCProfileTitlePageOrganizationCell : UITableViewCell <MCUIScrollAnimationResponder>
{
    NSString *_organizationName;
    NSString *_appleID;
    UILabel *_organizationLabel;
    UILabel *_appleIDLabel;
    UILabel *_organizationValueLabel;
    UILabel *_appleIDValueLabel;
    UIStackView *_labelStackView;
}

@property(retain, nonatomic) UIStackView *labelStackView; // @synthesize labelStackView=_labelStackView;
@property(retain, nonatomic) UILabel *appleIDValueLabel; // @synthesize appleIDValueLabel=_appleIDValueLabel;
@property(retain, nonatomic) UILabel *organizationValueLabel; // @synthesize organizationValueLabel=_organizationValueLabel;
@property(retain, nonatomic) UILabel *appleIDLabel; // @synthesize appleIDLabel=_appleIDLabel;
@property(retain, nonatomic) UILabel *organizationLabel; // @synthesize organizationLabel=_organizationLabel;
@property(copy, nonatomic) NSString *appleID; // @synthesize appleID=_appleID;
@property(copy, nonatomic) NSString *organizationName; // @synthesize organizationName=_organizationName;
- (void).cxx_destruct;
- (void)updateProgressWithTranslationDistance:(double)arg1 referenceDistance:(double)arg2 isScrolling:(_Bool)arg3;
- (id)_createVerticalStackWithViews:(id)arg1;
- (id)_createHorizontalStackWithViews:(id)arg1;
- (id)_createValueLabel;
- (id)_createLabelLabel;
- (void)_updateConstraintWithStack:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
