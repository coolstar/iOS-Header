//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSTableCell.h>

@class NSLayoutConstraint, NSMutableArray, NSString, UIActivityIndicatorView, UIImage, UIImageView, UILabel, UIView;

@interface STStorageTableCell : PSTableCell
{
    NSMutableArray *_normalFontConstraints;
    NSMutableArray *_largeFontConstraints;
    NSMutableArray *_infoConstraints;
    NSLayoutConstraint *_iconSizeConstraint;
    NSLayoutConstraint *_sizeRightConstraint;
    NSLayoutConstraint *_minHeightConstraint;
    UIImageView *_iconView;
    UIView *_titleInfoView;
    UILabel *_titleLabel;
    UILabel *_infoLabel;
    UILabel *_sizeLabel;
    long long _size;
    UIActivityIndicatorView *_spinner;
}

+ (double)defaultCellHeight;
@property(retain, nonatomic) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
- (void).cxx_destruct;
@property(nonatomic) long long size;
@property(retain, nonatomic) NSString *sizeString;
@property(nonatomic) _Bool infoHidden;
@property(retain, nonatomic) NSString *info;
@property(retain, nonatomic) NSString *title;
@property(retain, nonatomic) UIImage *icon;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateConstraints;
- (void)createLargeFontConstraints;
- (void)createNormalFontConstraints;
- (void)setupTitleAndInfoConstraints;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;

@end
