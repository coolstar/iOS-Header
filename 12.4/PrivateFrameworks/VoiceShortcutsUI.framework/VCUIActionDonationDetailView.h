//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class BFFPaneHeaderView, INImage, NSLayoutConstraint, NSString, UIImage;

@interface VCUIActionDonationDetailView : UIView
{
    _Bool _showsSphiriIcon;
    NSString *_donationTitle;
    NSString *_donationSubtitle;
    BFFPaneHeaderView *_headerView;
    NSLayoutConstraint *_heightConstraint;
    INImage *_keyImage;
    NSString *_appName;
    UIImage *_appIcon;
}

@property(retain, nonatomic) UIImage *appIcon; // @synthesize appIcon=_appIcon;
@property(copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(retain, nonatomic) INImage *keyImage; // @synthesize keyImage=_keyImage;
@property(retain, nonatomic) NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;
@property(retain, nonatomic) BFFPaneHeaderView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) _Bool showsSphiriIcon; // @synthesize showsSphiriIcon=_showsSphiriIcon;
@property(readonly, copy, nonatomic) NSString *donationSubtitle; // @synthesize donationSubtitle=_donationSubtitle;
@property(readonly, copy, nonatomic) NSString *donationTitle; // @synthesize donationTitle=_donationTitle;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIView *iconView;
- (id)appAttributedString;
- (void)layoutSubviews;
- (void)_updateViewWithIcon:(id)arg1;
- (void)updateView;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 keyImage:(id)arg3 applicationBundleIdentifier:(id)arg4;

@end
