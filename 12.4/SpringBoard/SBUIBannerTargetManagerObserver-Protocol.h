//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SBUIBannerTargetManager;
@protocol SBUIBannerTarget;

@protocol SBUIBannerTargetManagerObserver <NSObject>
- (void)bannerTargetManager:(SBUIBannerTargetManager *)arg1 didRemoveTarget:(id <SBUIBannerTarget>)arg2;
- (void)bannerTargetManager:(SBUIBannerTargetManager *)arg1 didAddTarget:(id <SBUIBannerTarget>)arg2;
@end

