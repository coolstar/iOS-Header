//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NotesUI/NSObject-Protocol.h>

@class UIWindow;

@protocol ICUIApplicationShim <NSObject>
@property(readonly, nonatomic) UIWindow *keyWindow;
- (void)endReceivingRemoteControlEvents;
- (void)beginReceivingRemoteControlEvents;
@end
