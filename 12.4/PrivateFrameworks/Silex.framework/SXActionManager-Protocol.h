//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/NSObject-Protocol.h>

@class NSArray, SXAction, UIView, UIViewController;

@protocol SXActionManager <NSObject>
- (void)commitPreviewViewController:(UIViewController *)arg1;
- (UIViewController *)previewViewControllerForAction:(SXAction *)arg1;
- (void)performAction:(SXAction *)arg1 postActionHandlers:(NSArray *)arg2 sourceView:(UIView *)arg3 sourceRect:(struct CGRect)arg4 mode:(unsigned long long)arg5;
- (void)performAction:(SXAction *)arg1 postActionHandlers:(NSArray *)arg2;
@end
