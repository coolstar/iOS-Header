//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppSupportUI/NUIContainerStackView.h>

#import "MapsTheming-Protocol.h"

@class BlurDarkeningBackgroundView, NSString, RouteSearchTextField, UIButton, UIView;

__attribute__((visibility("hidden")))
@interface RouteSearchFieldsView : NUIContainerStackView <MapsTheming>
{
    RouteSearchTextField *_fromField;
    RouteSearchTextField *_toField;
    UIButton *_swapButton;
    UIView *_fieldSeparator;
    BlurDarkeningBackgroundView *_blurBackgroundView;
}

@property(retain, nonatomic) BlurDarkeningBackgroundView *blurBackgroundView; // @synthesize blurBackgroundView=_blurBackgroundView;
@property(retain, nonatomic) UIView *fieldSeparator; // @synthesize fieldSeparator=_fieldSeparator;
@property(retain, nonatomic) UIButton *swapButton; // @synthesize swapButton=_swapButton;
@property(retain, nonatomic) RouteSearchTextField *toField; // @synthesize toField=_toField;
@property(retain, nonatomic) RouteSearchTextField *fromField; // @synthesize fromField=_fromField;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)updateTheme;
- (void)traitCollectionDidChange:(id)arg1;
- (void)didMoveToWindow;
- (void)_refreshFont;
- (void)_createSubviews;
- (void)_customInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
