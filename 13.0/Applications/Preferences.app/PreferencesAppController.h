//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIApplication.h>

#import "CoreTelephonyClientCarrierBundleDelegate-Protocol.h"
#import "EAAccessoryDelegate-Protocol.h"
#import "MCProfileConnectionObserver-Protocol.h"
#import "PSSplitViewControllerNavigationDelegate-Protocol.h"
#import "UIApplicationDelegate-Protocol.h"
#import "UISplitViewControllerDelegate-Protocol.h"

@class BKSApplicationStateMonitor, CoreTelephonyClient, EAAccessory, NSMutableSet, NSString, PSSplitViewController, PSUIPrefsRootController, PSURLManager, PreferenceSceneDelegate, UIWindow, UIWindowScene;

@interface PreferencesAppController : UIApplication <PSSplitViewControllerNavigationDelegate, CoreTelephonyClientCarrierBundleDelegate, UIApplicationDelegate, EAAccessoryDelegate, MCProfileConnectionObserver, UISplitViewControllerDelegate>
{
    PSSplitViewController *_splitViewController;
    PSUIPrefsRootController *_controller;
    UIWindow *_window;
    _Bool _isLocked;
    _Bool _loadingExternalURL;
    unsigned long long _backgroundTaskHandle;
    _Bool _settingsWasResigned;
    EAAccessory *_speakerAccessory;
    NSMutableSet *_busyControllers;
    BKSApplicationStateMonitor *_applicationStateMonitor;
    CoreTelephonyClient *_client;
    PSURLManager *_urlManager;
    PreferenceSceneDelegate *_windowSceneClass;
    UIWindowScene *_scene;
}

@property(retain, nonatomic) UIWindowScene *scene; // @synthesize scene=_scene;
@property(retain, nonatomic) PreferenceSceneDelegate *windowSceneClass; // @synthesize windowSceneClass=_windowSceneClass;
@property(retain, nonatomic) PSURLManager *urlManager; // @synthesize urlManager=_urlManager;
@property(retain, nonatomic) CoreTelephonyClient *client; // @synthesize client=_client;
@property(retain, nonatomic) BKSApplicationStateMonitor *applicationStateMonitor; // @synthesize applicationStateMonitor=_applicationStateMonitor;
@property(retain, nonatomic) NSMutableSet *busyControllers; // @synthesize busyControllers=_busyControllers;
- (void).cxx_destruct;
- (void)carrierBundleChange:(id)arg1;
- (void)splitViewControllerDidPopToRootController:(id)arg1;
- (_Bool)splitViewController:(id)arg1 collapseSecondaryViewController:(id)arg2 ontoPrimaryViewController:(id)arg3;
- (id)splitViewController:(id)arg1 separateSecondaryViewControllerFromPrimaryViewController:(id)arg2;
- (void)accessoryDidDisconnect:(id)arg1;
- (void)_accessoryDidConnect:(id)arg1;
- (void)dealloc;
- (double)defaultImageSnapshotExpiration;
- (void)resetLocale;
- (void)significantTimeChange;
- (void)systemDidWake:(id)arg1;
- (void)_resetSnapshotImage;
- (void)_handleIconChangeForBundleID:(id)arg1;
- (void)_handleExternalApplicationChange;
- (void)_suspendControllers;
- (void)_handleBusyControllers;
- (void)controllerFinished:(id)arg1;
- (void)endAndInvalidateBackgroundTask;
- (void)addBusyControllersFromRootController:(id)arg1;
- (id)oneTimeJumpURL;
- (void)_clearSavedPositionURL;
- (void)generateURL;
- (void)processTVProviderPrefsURL:(id)arg1;
- (void)processShorcutsAppPrefsURL:(id)arg1;
- (void)processAppPrefsURL:(id)arg1;
- (void)handleAuthKitURLIfNeededFromResourceDictionary:(id)arg1 overViewController:(id)arg2;
- (void)_rationalizeAccountSettingsURLDictionary:(id)arg1;
- (void)processURL:(id)arg1 animated:(_Bool)arg2 fromSearch:(_Bool)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)processURL:(id)arg1 animated:(_Bool)arg2 fromSearch:(_Bool)arg3;
- (void)processURL:(id)arg1;
- (void)receivedApplicationOpenURLNotification:(id)arg1;
- (void)receivedApplicationResumeNotification:(id)arg1;
- (void)receivedApplicationContinueUserActivity:(id)arg1;
- (void)receivedApplicationWillResignActiveNotification:(id)arg1;
- (void)receivedApplicationDidBecomeActive:(id)arg1;
- (void)receivedApplicationWillEnterForegroundNotification:(id)arg1;
- (void)receivedApplicationDidEnterBackground:(id)arg1;
- (void)receivedApplicationWillTerminateNotification:(id)arg1;
- (id)quickActionShortcutItems;
- (void)receivedApplicationWillConnectWindowScene:(id)arg1;
- (id)application:(id)arg1 configurationForConnectingSceneSession:(id)arg2 options:(id)arg3;
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (void)_registerForAccessoryNotifications;
- (void)updateSoftwareUpdateBadgeOnSpecifier:(id)arg1;
- (_Bool)runScrollTest:(id)arg1 withDelay:(unsigned long long)arg2 withOptions:(id)arg3;
- (_Bool)runScrollTest:(id)arg1 withOptions:(id)arg2;
- (_Bool)runLoadingTest:(id)arg1 withOptions:(id)arg2;
- (_Bool)runTest:(id)arg1 options:(id)arg2;
- (void)popToRootOfSettingsSelectGeneral:(_Bool)arg1 performWithoutDeferringTransitions:(_Bool)arg2;
- (void)popToRootOfSettingsSelectGeneral:(_Bool)arg1;
- (void)clearControllersForSuspendedState;
- (void)profileConnectionDidReceivePasscodeChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)profileConnectionDidReceiveProfileListChangedNotification:(id)arg1 userInfo:(id)arg2;
- (id)appWindow;
- (id)rootController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIWindow *window;

@end
