//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSLayoutConstraint, UIButton, UIImageView, UIStackView, UIView, VibrantLabelView, WBSForYouLinkRecommendation, _SFSiteIconView;
@protocol SiriSuggestionsCollectionViewCellDelegate;

@interface SiriSuggestionsCollectionViewCell : UICollectionViewCell
{
    VibrantLabelView *_titleLabel;
    VibrantLabelView *_addressLabel;
    VibrantLabelView *_footnoteLabel;
    UIImageView *_contactImageView;
    UIView *_labelContainerView;
    UIStackView *_contentStackView;
    WBSForYouLinkRecommendation *_linkRecommendation;
    NSLayoutConstraint *_buttonWidthConstraint;
    UIButton *_actionButton;
    UIImageView *_badgeView;
    NSLayoutConstraint *_actionButtonTrailingConstraint;
    _Bool _usesVibrantEffect;
    _Bool _isEditing;
    _SFSiteIconView *_iconView;
    UIView *_cardView;
    id <SiriSuggestionsCollectionViewCellDelegate> _delegate;
}

+ (id)_handoffIconForDeviceType:(id)arg1;
@property(readonly, nonatomic) _Bool isEditing; // @synthesize isEditing=_isEditing;
@property(nonatomic) __weak id <SiriSuggestionsCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UIView *cardView; // @synthesize cardView=_cardView;
@property(readonly, nonatomic) _SFSiteIconView *iconView; // @synthesize iconView=_iconView;
@property(nonatomic) _Bool usesVibrantEffect; // @synthesize usesVibrantEffect=_usesVibrantEffect;
@property(retain, nonatomic) WBSForYouLinkRecommendation *linkRecommendation; // @synthesize linkRecommendation=_linkRecommendation;
- (void).cxx_destruct;
- (id)_panningCardColor;
- (id)_selectedCardColor;
- (id)_unselectedCardColor;
- (long long)_contentAxis;
- (void)_removeBadgeViewIfNecessary;
- (void)_addBadgeViewIfNecessary;
- (void)_didSelectActionButton:(id)arg1;
- (void)_removeContactImageView;
- (void)_addContactImageViewWithImage:(id)arg1 shouldTintImage:(_Bool)arg2;
- (void)_didTapCard:(id)arg1;
- (void)setIsEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_setUpViews;
- (void)_updateViewsWithLinkRecommendation:(id)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
