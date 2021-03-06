//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ManagedConfigurationUI/MCUIScrollAnimationResponder-Protocol.h>

@class MCProfileTitlePageMetaDataSectionController, NSString, UITableView, UIView;

__attribute__((visibility("hidden")))
@interface MCProfileTitlePageMetaDataSectionAnimationController : NSObject <MCUIScrollAnimationResponder>
{
    MCProfileTitlePageMetaDataSectionController *_sectionController;
    UIView *_iconView;
    UIView *_titleView;
    UIView *_subtitleView;
    UIView *_orgView;
    UIView *_topBar;
    UITableView *_tableView;
    struct CGRect _iconViewOriginFrame;
    struct CGRect _titleLabelOriginFrame;
}

@property(nonatomic) struct CGRect titleLabelOriginFrame; // @synthesize titleLabelOriginFrame=_titleLabelOriginFrame;
@property(nonatomic) struct CGRect iconViewOriginFrame; // @synthesize iconViewOriginFrame=_iconViewOriginFrame;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak UIView *topBar; // @synthesize topBar=_topBar;
@property(nonatomic) __weak UIView *orgView; // @synthesize orgView=_orgView;
@property(nonatomic) __weak UIView *subtitleView; // @synthesize subtitleView=_subtitleView;
@property(nonatomic) __weak UIView *titleView; // @synthesize titleView=_titleView;
@property(nonatomic) __weak UIView *iconView; // @synthesize iconView=_iconView;
@property(nonatomic) __weak MCProfileTitlePageMetaDataSectionController *sectionController; // @synthesize sectionController=_sectionController;
- (void).cxx_destruct;
- (unsigned long long)_binarySearch:(id)arg1 target:(double)arg2;
- (double)_alphaWithProgress:(double)arg1 keys:(id)arg2 values:(id)arg3;
- (void)_animateView:(id)arg1 progress:(double)arg2 startFrame:(struct CGRect)arg3 endY:(double)arg4 endScale:(double)arg5 extraYOffset:(double)arg6;
- (_Bool)_relocateViewIfNeeded:(id)arg1 fromView:(id)arg2 toView:(id)arg3;
- (_Bool)_putBackViewIfNeeded:(id)arg1 toView:(id)arg2;
- (void)updateProgressWithTranslationDistance:(double)arg1 referenceDistance:(double)arg2 isScrolling:(_Bool)arg3;
- (void)startTrackingWithMetaDataSectionController:(id)arg1 topBar:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

