//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKit/WKNavigationDelegate-Protocol.h>
#import <WebKit/WKUIDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WKSOSecretDelegate : NSObject <WKNavigationDelegate, WKUIDelegate>
{
    struct WeakPtr<WebKit::PopUpSOAuthorizationSession> _session;
    _Bool _isFirstNavigation;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webViewDidClose:(id)arg1;
- (id)initWithSession:(struct PopUpSOAuthorizationSession *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
