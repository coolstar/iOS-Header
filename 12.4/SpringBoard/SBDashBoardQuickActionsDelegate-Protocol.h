//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SBDashBoardQuickActionsButton;

@protocol SBDashBoardQuickActionsDelegate <NSObject>
- (void)touchEndedForButton:(SBDashBoardQuickActionsButton *)arg1;
- (void)fireActionForButton:(SBDashBoardQuickActionsButton *)arg1;
- (void)touchBeganForButton:(SBDashBoardQuickActionsButton *)arg1;
- (_Bool)isPortrait;
- (_Bool)allowsCameraPress;
- (_Bool)hasCamera;
- (_Bool)allowsFlashlight;
- (_Bool)hasFlashlight;
@end

