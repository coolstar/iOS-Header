//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class FPItem, NSURL;

@protocol _TtP5Files17DOCTransitionable_
- (void)revealWithItem:(FPItem *)arg1;
- (void)getCellFor:(FPItem *)arg1:(void (^)(_TtC5Files21DOCItemCollectionCell *))arg2;
- (void)getViewFor:(FPItem *)arg1 waitForNewThumbnail:(_Bool)arg2:(void (^)(UIView *))arg3;
- (void)getPopoverTrackerForItem:(FPItem *)arg1 completionBlock:(void (^)(id <DOCServicePopoverTrackerProtocol>))arg2;
- (void)getTransitionControllerForItem:(FPItem *)arg1 completionBlock:(void (^)(id <DOCServiceTransitionProtocol>))arg2;
- (void)getTransitionControllerForURL:(NSURL *)arg1 completionBlock:(void (^)(id <DOCServiceTransitionProtocol>))arg2;
@end
