//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIScrollViewDelegate-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class NCBannerPresentationTransitionDelegate, NSString, SBBannerContainerView, SBBannerContextView, SBUIBannerContext, UIScrollView;
@protocol SBBannerContainerViewControllerDelegate;

@interface SBBannerContainerViewController : UIViewController <UIScrollViewDelegate, UIViewControllerTransitioningDelegate>
{
    NCBannerPresentationTransitionDelegate *_bannerPresentationTransitionDelegate;
    SBUIBannerContext *_bannerContext;
    UIScrollView *_scrollView;
    SBBannerContainerView *_bannerContainerView;
    SBBannerContextView *_bannerContextView;
    id <SBBannerContainerViewControllerDelegate> _delegate;
}

@property(readonly, nonatomic) SBBannerContainerView *bannerContainerView; // @synthesize bannerContainerView=_bannerContainerView;
@property(nonatomic) __weak id <SBBannerContainerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_tryDismissingBannerInScrollView:(id)arg1;
- (id)_bannerContextViewCreatingIfNecessary;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)_handleBannerTapGesture:(id)arg1;
- (long long)preferredInterfaceOrientationForPresentation;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (void)setBannerContext:(id)arg1 withReplaceReason:(int)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

