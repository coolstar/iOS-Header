//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuickLook/QLItemViewController.h>

#import <QuickLook/QLCustomItemViewControllerHost-Protocol.h>
#import <QuickLook/QLPrintingProtocol-Protocol.h>
#import <QuickLook/QLRemotePopoverTracker-Protocol.h>

@class NSDictionary, NSExtension, NSLayoutConstraint, NSString, QLCustomItemViewControllerHostProxy, QLRemotePreviewHostContext, QLRemotePreviewHostViewController;
@protocol QLPrintingProtocol, QLRemotePopoverTracker;

__attribute__((visibility("hidden")))
@interface QLRemoteItemViewController : QLItemViewController <QLPrintingProtocol, QLCustomItemViewControllerHost, QLRemotePopoverTracker>
{
    NSExtension *_extension;
    QLRemotePreviewHostContext *_hostContext;
    NSDictionary *_hostConfiguration;
    NSLayoutConstraint *_topConstraint;
    NSLayoutConstraint *_bottomConstraint;
    id <QLPrintingProtocol> _printer;
    id <QLRemotePopoverTracker> _popoverTracker;
    QLCustomItemViewControllerHostProxy *_hostViewControllerProxy;
    _Bool _isVisible;
    _Bool _isAppearing;
    _Bool _fullScreen;
    _Bool _needsSetup;
    _Bool _readyToLoad;
    CDUnknownBlockType _readyToDisplay;
    CDUnknownBlockType _loadHandler;
    _Bool _didBeginForwardingIsAppearingToHostRemoteViewController;
    _Bool _didEndForwardingIsAppearingToHostRemoteViewController;
    QLRemotePreviewHostViewController *_remoteViewController;
}

+ (double)maxLoadingTimeForItem:(id)arg1;
+ (Class)transformerClass;
@property(retain, nonatomic) QLRemotePreviewHostViewController *remoteViewController; // @synthesize remoteViewController=_remoteViewController;
- (void).cxx_destruct;
- (void)getFrameWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)dismissQuickLook;
- (void)setFullScreen:(_Bool)arg1;
- (void)presentShareSheetWithPopoverTracker:(id)arg1 dismissCompletion:(CDUnknownBlockType)arg2;
- (void)pdfDataForPageAtIndex:(long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)prepareForDrawingPages:(struct _NSRange)arg1 ofSize:(struct CGSize)arg2;
- (void)numberOfPagesWithSize:(struct CGSize)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)fullscreenBackgroundColor;
- (_Bool)presenterShouldHandleLoadingView:(id)arg1 readyToDisplay:(CDUnknownBlockType)arg2;
- (void)previewControllerWantsFullScreen:(_Bool)arg1;
- (void)previewControllerDidUpdatePreferredContentSize:(id)arg1;
- (void)previewControllerDidUpdateTitle:(id)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (id)printer;
- (void)dealloc;
- (void)_registerLoadingHandler:(CDUnknownBlockType)arg1;
- (void)_performLoadHandlerIfNeeded;
- (void)_performSetUpWithRemoteViewController:(id)arg1 extension:(id)arg2 request:(id)arg3 hostContext:(id)arg4;
- (void)_loadRemoteViewControllerForContext:(id)arg1;
- (void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)preloadViewControllerForContext:(id)arg1;
- (_Bool)canShowToolBar;
- (_Bool)canShowNavBar;
- (_Bool)canPinchToDismiss;
- (_Bool)canSwipeToDismiss;
- (_Bool)canEnterFullScreen;
- (void)previewDidDisappear:(_Bool)arg1;
- (void)previewWillDisappear:(_Bool)arg1;
- (void)previewDidAppear:(_Bool)arg1;
- (void)previewWillAppear:(_Bool)arg1;
- (void)setAppearance:(id)arg1 animated:(_Bool)arg2;
- (id)init;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)endPreviewHostAppearanceTransitionIfNeeded:(_Bool)arg1;
- (void)beginPreviewHostAppearanceTransitionIfNeeded:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
