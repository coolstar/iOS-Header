//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/NSObject-Protocol.h>

@class SXViewport, UIContextMenuConfiguration, UIViewController;

@protocol SXContextMenuProviding <NSObject>
- (void)commitPreviewViewController:(UIViewController *)arg1;
- (UIContextMenuConfiguration *)contextMenuAtLocation:(struct CGPoint)arg1 viewport:(SXViewport *)arg2;
@end

