//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NavSignView.h"

@class GuidanceManeuverView, NSArray, NSLayoutConstraint, NavSignManeuverGuidanceInfo, UIImageView;
@protocol NavManeuverSignLayoutDelegate;

__attribute__((visibility("hidden")))
@interface NavManeuverSignView : NavSignView
{
    _Bool _needsUpdateShield;
    _Bool _isOutOfMapsBanner;
    _Bool _suppressShieldView;
    _Bool _animatingToHideManeuverView;
    _Bool _flipMajorAndMinorTextInLabels;
    long long _maneuverSignType;
    NavSignManeuverGuidanceInfo *_maneuverGuidanceInfo;
    GuidanceManeuverView *_maneuverView;
    UIImageView *_shieldView;
    long long _shieldSize;
    NSLayoutConstraint *_maneuverViewMinWidthConstraint;
    NSLayoutConstraint *_maneuverViewHeightConstraint;
    NSLayoutConstraint *_maneuverViewMinLeadingMarginConstraint;
    NSLayoutConstraint *_maneuverViewLeadingMarginConstraint;
    NSLayoutConstraint *_maneuverViewTrailingMarginConstraint;
    NSLayoutConstraint *_maneuverViewEqualSideMarginsConstraint;
    NSLayoutConstraint *_maneuverViewCenterYConstraint;
    NSLayoutConstraint *_maneuverViewTopToTopConstraint;
    NSLayoutConstraint *_shieldViewTopToTopConstraint;
    NSLayoutConstraint *_trailingToShieldViewTrailingConstraint;
    NSLayoutConstraint *_shieldViewTrailingMajorLabelConstraint;
    NSArray *_maneuverViewLeadingLayoutGuideConstraints;
    NSArray *_maneuverViewTrailingLayoutGuideConstraints;
}

@property(readonly, nonatomic) NSArray *maneuverViewTrailingLayoutGuideConstraints; // @synthesize maneuverViewTrailingLayoutGuideConstraints=_maneuverViewTrailingLayoutGuideConstraints;
@property(readonly, nonatomic) NSArray *maneuverViewLeadingLayoutGuideConstraints; // @synthesize maneuverViewLeadingLayoutGuideConstraints=_maneuverViewLeadingLayoutGuideConstraints;
@property(readonly, nonatomic) NSLayoutConstraint *shieldViewTrailingMajorLabelConstraint; // @synthesize shieldViewTrailingMajorLabelConstraint=_shieldViewTrailingMajorLabelConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *trailingToShieldViewTrailingConstraint; // @synthesize trailingToShieldViewTrailingConstraint=_trailingToShieldViewTrailingConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *shieldViewTopToTopConstraint; // @synthesize shieldViewTopToTopConstraint=_shieldViewTopToTopConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *maneuverViewTopToTopConstraint; // @synthesize maneuverViewTopToTopConstraint=_maneuverViewTopToTopConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *maneuverViewCenterYConstraint; // @synthesize maneuverViewCenterYConstraint=_maneuverViewCenterYConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *maneuverViewEqualSideMarginsConstraint; // @synthesize maneuverViewEqualSideMarginsConstraint=_maneuverViewEqualSideMarginsConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *maneuverViewTrailingMarginConstraint; // @synthesize maneuverViewTrailingMarginConstraint=_maneuverViewTrailingMarginConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *maneuverViewLeadingMarginConstraint; // @synthesize maneuverViewLeadingMarginConstraint=_maneuverViewLeadingMarginConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *maneuverViewMinLeadingMarginConstraint; // @synthesize maneuverViewMinLeadingMarginConstraint=_maneuverViewMinLeadingMarginConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *maneuverViewHeightConstraint; // @synthesize maneuverViewHeightConstraint=_maneuverViewHeightConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *maneuverViewMinWidthConstraint; // @synthesize maneuverViewMinWidthConstraint=_maneuverViewMinWidthConstraint;
@property(nonatomic) _Bool flipMajorAndMinorTextInLabels; // @synthesize flipMajorAndMinorTextInLabels=_flipMajorAndMinorTextInLabels;
@property(nonatomic) _Bool animatingToHideManeuverView; // @synthesize animatingToHideManeuverView=_animatingToHideManeuverView;
@property(nonatomic) _Bool suppressShieldView; // @synthesize suppressShieldView=_suppressShieldView;
@property(nonatomic) long long shieldSize; // @synthesize shieldSize=_shieldSize;
@property(nonatomic) _Bool isOutOfMapsBanner; // @synthesize isOutOfMapsBanner=_isOutOfMapsBanner;
@property(readonly, nonatomic) UIImageView *shieldView; // @synthesize shieldView=_shieldView;
@property(readonly, nonatomic) GuidanceManeuverView *maneuverView; // @synthesize maneuverView=_maneuverView;
@property(retain, nonatomic) NavSignManeuverGuidanceInfo *maneuverGuidanceInfo; // @synthesize maneuverGuidanceInfo=_maneuverGuidanceInfo;
@property(readonly, nonatomic) long long maneuverSignType; // @synthesize maneuverSignType=_maneuverSignType;
- (void).cxx_destruct;
- (void)navSignLabel:(id)arg1 didSelectAlternate:(unsigned long long)arg2;
- (id)debugDescription;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (void)_updateShieldView;
- (void)_setNeedsUpdateShield;
@property(readonly, nonatomic) double shieldCompressionRatio;
@property(readonly, nonatomic) _Bool hasShieldImage;
@property(readonly, nonatomic) _Bool hasShieldInfo;
@property(readonly, nonatomic) _Bool hasManeuverArtwork;
- (void)configureForArrivalWithSignID:(id)arg1 titles:(id)arg2 details:(id)arg3 maneuverType:(int)arg4;
- (void)configureForProceedToRouteWithSignID:(id)arg1 displayString:(id)arg2;
- (void)setManeuverGuidanceInfo:(id)arg1 hasArrived:(_Bool)arg2;
- (void)_updateLabelText;
- (void)_updateConstraints;
- (void)_setupConstraints;
- (void)_setupSubviews;
- (void)refreshSign;
- (id)_defaultSignLayoutDelegate;
- (void)updateTheme;
- (void)clearContent;

// Remaining properties
@property(nonatomic) __weak id <NavManeuverSignLayoutDelegate> signLayoutDelegate; // @dynamic signLayoutDelegate;

@end
