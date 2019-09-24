//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol WLKNotificationCenterDelegate, WLKNotificationsImpl;

@interface WLKNotificationCenter : NSObject
{
    id <WLKNotificationsImpl> _impl;
    id <WLKNotificationCenterDelegate> _delegate;
}

+ (id)defaultCenter;
@property(nonatomic) __weak id <WLKNotificationCenterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)isCategoryEnabledByUser:(long long)arg1;
- (void)setBadgeString:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)setBadgeNumber:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)post:(id)arg1 title:(id)arg2 body:(id)arg3 options:(id)arg4;
- (id)init;

@end
