//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SBAlert.h"

@class UIViewController;

@interface SBAlertAdapter : SBAlert
{
    UIViewController *_effectiveViewController;
}

- (void).cxx_destruct;
- (id)childViewControllerForStatusBarStyle;
- (id)childViewControllerForStatusBarHidden;
- (id)effectiveViewController;
- (void)setDisplay:(id)arg1;
- (id)alertDisplayViewWithSize:(struct CGSize)arg1;
- (id)display;
- (void)alertWindow:(id)arg1 resizedFromContentFrame:(struct CGRect)arg2 toContentFrame:(struct CGRect)arg3;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)setView:(id)arg1;
- (id)initWithViewController:(id)arg1;

@end

