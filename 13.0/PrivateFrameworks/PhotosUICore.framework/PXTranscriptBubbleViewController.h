//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class UIView;
@protocol PXTranscriptBubbleDelegate;

@interface PXTranscriptBubbleViewController : UIViewController
{
    _Bool _transitionInProgress;
    struct CGSize _lastRequestedSize;
    long long _lastResizeRequestID;
    _Bool _isReadyForDisplay;
    id <PXTranscriptBubbleDelegate> _delegate;
    UIView *_contentView;
    UIView *_targetContentView;
}

@property(retain, nonatomic) UIView *targetContentView; // @synthesize targetContentView=_targetContentView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak id <PXTranscriptBubbleDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)_switchToPendingTargetViewIfNecessary;
- (void)_resizeTimeoutForRequestID:(long long)arg1;
- (void)_scheduleContentViewUpdate;
- (void)transitionToContentView:(id)arg1;
- (_Bool)_requiresResizeForCurrentSize:(struct CGSize)arg1;
- (struct CGSize)workaroundSizeForSize:(struct CGSize)arg1;
- (struct CGSize)_contentViewSizeThatFits:(struct CGSize)arg1;
- (struct CGSize)contentSizeThatFits:(struct CGSize)arg1;

@end
