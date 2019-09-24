//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UILabel, UIView;

@interface CarplayCollapsedAllDayTableViewCell : UITableViewCell
{
    long long _allDayCount;
    long long _birthdayCount;
    UIView *_coloredBackgroundView;
    UILabel *_primaryLabel;
    UILabel *_topTimeLabel;
    UIView *_allDaySuperview;
    UIView *_occurrenceCellSuperview;
}

+ (id)reuseIdentifier;
- (void).cxx_destruct;
- (void)crossfadeToCell:(id)arg1;
- (id)_cellTitle;
- (id)normalPlatterBackgroundColor;
- (id)normalTopTimeTextColor;
- (id)normalPrimaryTextColor;
- (id)timeLabelsFont;
- (id)primaryTextLabelFont;
- (void)_setupConstraints;
- (void)forceUpdateOfAllElements;
- (void)configureWithAllDayCount:(long long)arg1 birthdayCount:(long long)arg2;
- (void)layoutSubviews;
- (void)_updateContentForSizeCategoryChange:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
