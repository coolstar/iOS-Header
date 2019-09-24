//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleConnectClient/NSObject-Protocol.h>

@class UIViewController;
@protocol ACExecutionEnvironment;

@protocol ACExtenstionProxyConsumer <NSObject>
@property(readonly, nonatomic) long long presentationStyle;
@property(readonly, nonatomic) id <ACExecutionEnvironment> executionEnvironment;
- (void)dismissRemoteViewControllerWithCompletion:(void (^)(void))arg1;
- (_Bool)presentRemoteViewController:(UIViewController *)arg1 withCompletion:(void (^)(void))arg2;
@end
