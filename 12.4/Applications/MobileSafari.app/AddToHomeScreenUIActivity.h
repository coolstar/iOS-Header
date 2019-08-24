//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "Activity.h"

#import "WebClipDelegate-Protocol.h"
#import "WebClipViewControllerDelegate-Protocol.h"

@class NSString, UINavigationController, UIWebClip, WebClipViewController, _WKApplicationManifest;

@interface AddToHomeScreenUIActivity : Activity <WebClipDelegate, WebClipViewControllerDelegate>
{
    UINavigationController *_wrappingNavigationController;
    WebClipViewController *_webClipViewController;
    UIWebClip *_webClip;
    _Bool _webClipConfigured;
    _Bool _waitingForSnapshot;
    _WKApplicationManifest *_manifest;
}

- (void).cxx_destruct;
- (void)_updateImageFromActiveTabDocument;
- (void)_createWebClip;
- (void)webClip:(id)arg1 startupLandscapeImageRequestDidFinishWithImage:(id)arg2;
- (void)webClip:(id)arg1 startupImageRequestDidFinishWithImage:(id)arg2;
- (void)webClip:(id)arg1 iconRequestDidFinishWithImage:(id)arg2 precomposed:(_Bool)arg3;
- (void)webClipViewController:(id)arg1 didFinishWithResult:(_Bool)arg2;
- (void)activityDidFinish:(_Bool)arg1;
- (id)_embeddedActivityViewController;
- (id)activityViewController;
- (void)prepareWithActivityItems:(id)arg1;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (id)_beforeActivity;
- (id)_activityBundleImageConfiguration;
- (id)activityTitle;
- (id)activityType;
- (void)dealloc;
- (id)initWithTabDocument:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
