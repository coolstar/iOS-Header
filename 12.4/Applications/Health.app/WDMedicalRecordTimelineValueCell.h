//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "WDMedicalRecordGroupableCell.h"

@class NSLayoutConstraint, NSString, UILabel;

@interface WDMedicalRecordTimelineValueCell : WDMedicalRecordGroupableCell
{
    NSString *_titleString;
    NSString *_valueString;
    NSString *_unitString;
    UILabel *_titleLabel;
    UILabel *_valueLabel;
    NSLayoutConstraint *_titleWidthConstraint;
    NSLayoutConstraint *_valueWidthConstraint;
    NSLayoutConstraint *_titleHeightConstraint;
    NSLayoutConstraint *_valueHeightConstraint;
}

+ (id)_unitLabelFontMultipleLines;
+ (id)_valueLabelFontMultipleLines;
+ (id)_unitLabelFontSingleLine;
+ (id)_valueLabelFontSingleLine;
+ (double)_titleLabelTopToFirstBaseline;
+ (id)_titleLabelFont;
@property(retain, nonatomic) NSLayoutConstraint *valueHeightConstraint; // @synthesize valueHeightConstraint=_valueHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *titleHeightConstraint; // @synthesize titleHeightConstraint=_titleHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *valueWidthConstraint; // @synthesize valueWidthConstraint=_valueWidthConstraint;
@property(retain, nonatomic) NSLayoutConstraint *titleWidthConstraint; // @synthesize titleWidthConstraint=_titleWidthConstraint;
@property(retain, nonatomic) UILabel *valueLabel; // @synthesize valueLabel=_valueLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (id)_generateValueDisplayAttributedStringWithValueFont:(id)arg1 unitFont:(id)arg2;
- (id)_generateValueDisplayAttributedString;
- (void)setValue:(id)arg1 unit:(id)arg2;
- (id)unit;
- (id)value;
@property(copy, nonatomic) NSString *title;
- (void)updateConstraints;
- (void)setupSubviews;

@end
