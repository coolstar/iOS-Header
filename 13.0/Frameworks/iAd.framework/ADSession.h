//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iAd/ADAdServingDaemonConnectionDelegate-Protocol.h>
#import <iAd/ADSession_RPC-Protocol.h>

@class ADAdServingDaemonConnection, ADDeviceInfo, NSMutableArray, NSString;
@protocol ADSSession_RPC, OS_dispatch_queue;

@interface ADSession : NSObject <ADSession_RPC, ADAdServingDaemonConnectionDelegate>
{
    _Bool _applicationCanReceiveBackgroundAds;
    _Bool _appExtensionCanReceiveAds;
    _Bool _applicationCanRecieveAds;
    int _classicUnavailableToken;
    NSMutableArray *_adSpaces;
    ADAdServingDaemonConnection *_connection;
    NSString *_bundleIdentifier;
    NSObject<OS_dispatch_queue> *_adSpaceQueue;
    ADDeviceInfo *_deviceInfo;
}

+ (id)sharedInstance;
+ (_Bool)adShouldCreateADSession;
@property(retain, nonatomic) ADDeviceInfo *deviceInfo; // @synthesize deviceInfo=_deviceInfo;
@property(nonatomic) _Bool applicationCanRecieveAds; // @synthesize applicationCanRecieveAds=_applicationCanRecieveAds;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *adSpaceQueue; // @synthesize adSpaceQueue=_adSpaceQueue;
@property(retain, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(retain, nonatomic) ADAdServingDaemonConnection *connection; // @synthesize connection=_connection;
@property(nonatomic) int classicUnavailableToken; // @synthesize classicUnavailableToken=_classicUnavailableToken;
@property(retain, nonatomic) NSMutableArray *adSpaces; // @synthesize adSpaces=_adSpaces;
@property(nonatomic) _Bool appExtensionCanReceiveAds; // @synthesize appExtensionCanReceiveAds=_appExtensionCanReceiveAds;
@property(nonatomic) _Bool applicationCanReceiveBackgroundAds; // @synthesize applicationCanReceiveBackgroundAds=_applicationCanReceiveBackgroundAds;
- (void).cxx_destruct;
- (void)adAnalyticsEventReceived:(id)arg1;
- (void)_appDidEnterBackground;
- (void)_appDidBecomeActive;
- (void)prepareForAdRequests;
- (void)segmentDataForSignedInUserWithBlock:(CDUnknownBlockType)arg1;
- (void)addClientToSegments:(id)arg1 replaceExisting:(_Bool)arg2;
- (void)addClientToSegments:(id)arg1 replaceExisting:(_Bool)arg2 privateSegment:(_Bool)arg3;
- (void)_reportAdSubscriptionEvent:(id)arg1;
- (void)reportPrerollRequest;
- (void)_remote_policyEngineDidIdleDisable;
- (void)_remote_deviceInfo:(CDUnknownBlockType)arg1;
- (void)_remote_adDataForAdSpace:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_remote_updateActionViewControllerOrientation:(unsigned long long)arg1 forAdSpaceWithIdentifier:(id)arg2;
- (void)_remote_dismissViewControllerForAdSpaceWithIdentifier:(id)arg1;
- (void)_remote_dismissViewControllerForAdSpaceWithIdentifier:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_remote_actionViewControllerReadyForPresentationForAdSpaceWithIdentifier:(id)arg1;
- (void)_remote_requestViewControllerWithClassName:(id)arg1 forAdSpaceControllerWithIdentifier:(id)arg2 forAdSpaceWithIdentifier:(id)arg3;
- (void)_remote_openURL:(id)arg1 forAdSpaceWithIdentifier:(id)arg2;
- (void)_remote_setRequiresFastVisibilityTestOnly:(_Bool)arg1 withIdentifier:(id)arg2;
- (void)_remote_closeClientAdSpaceWithIdentifier:(id)arg1;
- (void)_remote_creativeWithAdSpaceIdentifier:(id)arg1 didFailWithError:(id)arg2;
- (void)_remote_adImpressionReportedWithIdentifier:(id)arg1;
- (void)_remote_adImpressionDidLoadWithPublicAttributes:(id)arg1 identifier:(id)arg2;
- (void)_remote_configVersionDidChange:(id)arg1;
- (void)_remote_proxyTypeDidChange:(long long)arg1;
- (void)_remote_contentProxyURLConnectDidChange:(id)arg1;
- (void)_remote_contentProxyURLDidChange:(id)arg1;
- (id)_adSpaceForIdentifier:(id)arg1;
- (void)unregisterAdSpace:(id)arg1;
- (void)registerAdSpace:(id)arg1;
- (void)_currentClientAdSpaces;
- (void)adServingDaemonConnectionLost;
- (void)adServingDaemonConnectionEstablished;
- (void)configureConnection:(id)arg1;
- (id)adServingDaemonMachServiceName;
- (id)rpcProxyWithErrorHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) id <ADSSession_RPC> rpcProxy;
- (void)performWhenConnected:(CDUnknownBlockType)arg1;
- (id)additionalAdServingDaemonLaunchOptions;
- (_Bool)shouldConnectToAdServingDaemon;
- (void)updateDeviceInfo;
- (void)createDeviceInfo;
- (void)orientationChanged:(id)arg1;
- (id)_linkedOnVersion;
- (void)establishRPCConnection;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
