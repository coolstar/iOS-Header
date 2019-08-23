//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBSDisplayObserving-Protocol.h"
#import "MPAVRoutingControllerDelegate-Protocol.h"

@class MPAVRoutingController, NSDate, NSDictionary, NSString, NSTimer, SBApplication, SBDirectToAirPlayController, SBSStatusBarStyleOverridesAssertion;

@interface SBMediaController : NSObject <MPAVRoutingControllerDelegate, FBSDisplayObserving>
{
    int _manualVolumeChangeCount;
    NSDictionary *_nowPlayingInfo;
    float _pendingVolumeChange;
    NSTimer *_volumeCommitTimer;
    _Bool _debounceVolumeRepeat;
    int _numberOfVolumeDecreasesSinceDownButtonDown;
    SBApplication *_lastNowPlayingApplication;
    _Bool _lastNowPlayingAppIsPlaying;
    int _lastMediaRemoteAppActivityStatus;
    _Bool _suppressHUD;
    _Bool _ringerMuted;
    _Bool _screenSharingViaAVSystemController;
    _Bool _screenSharingViaDisplayMonitor;
    _Bool _screenSharingSetsStatusBarOverride;
    NSTimer *_screenSharingStatusBarOverrideTimer;
    NSTimer *_videoOutStatusBarOverrideTimer;
    MPAVRoutingController *_routingController;
    NSDate *_lastActivityDate;
    SBSStatusBarStyleOverridesAssertion *_screenSharingStatusBarStyleOverrideAssertion;
    SBSStatusBarStyleOverridesAssertion *_videoOutStatusBarStyleOverrideAssertion;
    SBDirectToAirPlayController *_directToAirPlayController;
    int _nowPlayingProcessPID;
}

+ (void)sendResetPlaybackTimeoutCommand;
+ (_Bool)applicationCanBeConsideredNowPlaying:(id)arg1;
+ (id)sharedInstance;
@property(nonatomic) int nowPlayingProcessPID; // @synthesize nowPlayingProcessPID=_nowPlayingProcessPID;
- (void).cxx_destruct;
- (void)_updateLastRecentActivityDate;
- (void)_commitVolumeChange:(id)arg1;
- (void)_cancelPendingVolumeChange;
- (void)displayMonitor:(id)arg1 willDisconnectIdentity:(id)arg2;
- (void)displayMonitor:(id)arg1 didConnectIdentity:(id)arg2 withConfiguration:(id)arg3;
- (void)_nowPlayingAppDidExit:(id)arg1;
- (void)_authenticationStateChanged:(id)arg1;
- (void)_applicationActivityStatusDidChange:(id)arg1;
- (void)_mediaRemoteNowPlayingApplicationIsPlayingDidChange:(id)arg1;
- (void)_setNowPlayingApplication:(id)arg1;
- (void)_mediaRemoteNowPlayingApplicationDidChange:(id)arg1;
- (void)_mediaRemoteNowPlayingInfoDidChange:(id)arg1;
- (void)_systemMuteChanged:(id)arg1;
- (void)_softMuteChanged:(id)arg1;
- (void)_systemVolumeChanged:(id)arg1;
- (void)_externalScreenChanged:(id)arg1;
- (void)_notifyThatScreenSharingChanged;
- (void)_updateDisplayMonitorState;
- (void)_updateAVRoutes;
- (_Bool)_displayMonitorHasAConnectedExternalIdentity;
- (void)_serverConnectionDied:(id)arg1;
- (void)_unregisterForNotifications;
- (void)_registerForNotifications;
- (id)nameOfPickedRoute;
- (_Bool)isScreenSharing;
- (_Bool)wirelessDisplayRouteIsPicked;
- (_Bool)routeOtherThanHandsetIsAvailable;
- (_Bool)volumeControlIsAvailable;
- (_Bool)handsetRouteIsSelected;
- (void)routingControllerAvailableRoutesDidChange:(id)arg1;
- (void)handleVolumeButtonWithType:(long long)arg1 down:(_Bool)arg2;
- (void)cancelVolumeEvent;
- (void)decreaseVolume;
- (void)increaseVolume;
- (float)_calcButtonRepeatDelay;
- (void)_changeVolumeBy:(float)arg1;
- (_Bool)lastSavedRingerMutedState;
@property(nonatomic, getter=isRingerMuted) _Bool ringerMuted;
- (_Bool)muted;
- (void)setVolume:(float)arg1;
- (float)volume;
- (_Bool)setPlaybackSpeed:(int)arg1 eventSource:(long long)arg2;
- (_Bool)toggleShuffleForEventSource:(long long)arg1;
- (_Bool)toggleRepeatForEventSource:(long long)arg1;
- (_Bool)stopForEventSource:(long long)arg1;
- (_Bool)togglePlayPauseForEventSource:(long long)arg1;
- (_Bool)pauseForEventSource:(long long)arg1;
- (_Bool)playForEventSource:(long long)arg1;
- (_Bool)endSeek:(int)arg1 eventSource:(long long)arg2;
- (_Bool)beginSeek:(int)arg1 eventSource:(long long)arg2;
- (_Bool)changeTrack:(int)arg1 eventSource:(long long)arg2;
- (_Bool)_sendMediaCommand:(unsigned int)arg1 options:(id)arg2;
- (void)_startVideoOutStatusBarStyleOverride;
- (void)_clearVideoOutStatusBarStyleOverride;
- (void)_updateScreenSharingStatusBarStyleOverrideSuppressionPreference:(id)arg1;
- (void)updateScreenSharingStatusBarStyleOverride;
- (void)_clearScreenSharingStatusBarStyleOverride;
@property _Bool suppressHUD;
@property(readonly, nonatomic) __weak SBApplication *nowPlayingApplication;
- (_Bool)addTrackToWishListForEventSource:(long long)arg1;
- (_Bool)likeTrackForEventSource:(long long)arg1;
- (_Bool)banTrackForEventSource:(long long)arg1;
@property(readonly, nonatomic) NSDate *lastActivityDate;
- (_Bool)isApplicationActivityActive;
- (_Bool)isPaused;
- (_Bool)isPlaying;
- (_Bool)isLastTrack;
- (_Bool)isFirstTrack;
- (_Bool)hasTrack;
- (void)setNowPlayingInfo:(id)arg1;
- (id)_nowPlayingInfo;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

