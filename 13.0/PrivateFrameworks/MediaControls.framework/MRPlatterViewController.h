//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <MediaControls/MPAVRoutingViewControllerDelegate-Protocol.h>
#import <MediaControls/MPAVRoutingViewControllerThemeDelegate-Protocol.h>
#import <MediaControls/MTVisualStylingRequiring-Protocol.h>
#import <MediaControls/MediaControlsActionsDelegate-Protocol.h>
#import <MediaControls/MediaControlsCollectionItemViewController-Protocol.h>
#import <MediaControls/MediaControlsEndpointControllerDelegate-Protocol.h>
#import <MediaControls/MediaControlsMasterVolumeSliderDelegate-Protocol.h>
#import <MediaControls/MediaControlsPanelViewControllerDelegate-Protocol.h>

@class FBSDisplayLayoutMonitor, MPAVEndpointRoute, MPAVRoutingViewController, MPArtworkCatalog, MPMediaControls, MPVolumeGroupSliderCoordinator, MRMediaControlsVideoPickerFooterView, MRMediaControlsVideoPickerHeaderView, MSVTimer, MTVisualStylingProvider, MediaControlsEndpointController, MediaControlsHeaderView, MediaControlsLanguageOptionsViewController, MediaControlsParentContainerView, MediaControlsRoutingCornerView, MediaControlsTransitioningDelegate, MediaControlsVolumeContainerView, NSArray, NSMutableArray, NSString, SFShareAudioViewController, UIView;
@protocol MRPlatterViewControllerDelegate;

@interface MRPlatterViewController : UIViewController <MediaControlsEndpointControllerDelegate, MediaControlsActionsDelegate, MPAVRoutingViewControllerDelegate, MPAVRoutingViewControllerThemeDelegate, MediaControlsMasterVolumeSliderDelegate, MediaControlsPanelViewControllerDelegate, MTVisualStylingRequiring, MediaControlsCollectionItemViewController>
{
    MTVisualStylingProvider *_visualStylingProvider;
    _Bool _selected;
    _Bool _allowsNowPlayingAppLaunch;
    _Bool _transitioning;
    _Bool _onScreen;
    _Bool _isListeningForResponse;
    _Bool _failedToLoadArtwork;
    UIView *_contentView;
    UIView *_backgroundView;
    MPAVRoutingViewController *_routingViewController;
    id <MRPlatterViewControllerDelegate> _delegate;
    NSString *_routeUID;
    long long _style;
    double __continuousCornerRadius;
    MRMediaControlsVideoPickerFooterView *_videoPickerFooterView;
    MRMediaControlsVideoPickerHeaderView *_videoPickerHeaderView;
    MediaControlsRoutingCornerView *_routingCornerView;
    MediaControlsParentContainerView *_parentContainerView;
    MediaControlsVolumeContainerView *_volumeContainerView;
    NSMutableArray *_secondaryStringComponents;
    MPArtworkCatalog *_artworkCatalog;
    MPVolumeGroupSliderCoordinator *_groupSliderCoordinator;
    MPAVEndpointRoute *_route;
    MediaControlsTransitioningDelegate *_transitioningDelegate;
    MediaControlsLanguageOptionsViewController *_languageOptionsViewController;
    MPMediaControls *_mediaControls;
    SFShareAudioViewController *_shareAudioViewController;
    FBSDisplayLayoutMonitor *_displayMonitor;
    NSArray *_displayElements;
    NSString *_explicitString;
    long long _failedArtworkRetryCount;
    id _volumeControlAssertion;
    MSVTimer *_artworkTimer;
    NSString *_label;
    unsigned long long _supportedModes;
    long long _selectedMode;
    MediaControlsEndpointController *_endpointController;
    CDUnknownBlockType _routingCornerViewTappedBlock;
    MediaControlsHeaderView *_nowPlayingHeaderView;
    struct CGSize _lastKnownSize;
}

+ (id)coverSheetPlatterViewController;
@property(retain, nonatomic) MediaControlsHeaderView *nowPlayingHeaderView; // @synthesize nowPlayingHeaderView=_nowPlayingHeaderView;
@property(copy, nonatomic) CDUnknownBlockType routingCornerViewTappedBlock; // @synthesize routingCornerViewTappedBlock=_routingCornerViewTappedBlock;
@property(retain, nonatomic) MediaControlsEndpointController *endpointController; // @synthesize endpointController=_endpointController;
@property(nonatomic) long long selectedMode; // @synthesize selectedMode=_selectedMode;
@property(nonatomic) unsigned long long supportedModes; // @synthesize supportedModes=_supportedModes;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(retain, nonatomic) MSVTimer *artworkTimer; // @synthesize artworkTimer=_artworkTimer;
@property(retain, nonatomic) id volumeControlAssertion; // @synthesize volumeControlAssertion=_volumeControlAssertion;
@property(readonly, nonatomic) long long failedArtworkRetryCount; // @synthesize failedArtworkRetryCount=_failedArtworkRetryCount;
@property(nonatomic) _Bool failedToLoadArtwork; // @synthesize failedToLoadArtwork=_failedToLoadArtwork;
@property(copy, nonatomic) NSString *explicitString; // @synthesize explicitString=_explicitString;
@property(retain, nonatomic) NSArray *displayElements; // @synthesize displayElements=_displayElements;
@property(retain, nonatomic) FBSDisplayLayoutMonitor *displayMonitor; // @synthesize displayMonitor=_displayMonitor;
@property(retain, nonatomic) SFShareAudioViewController *shareAudioViewController; // @synthesize shareAudioViewController=_shareAudioViewController;
@property(retain, nonatomic) MPMediaControls *mediaControls; // @synthesize mediaControls=_mediaControls;
@property(nonatomic) __weak MediaControlsLanguageOptionsViewController *languageOptionsViewController; // @synthesize languageOptionsViewController=_languageOptionsViewController;
@property(retain, nonatomic) MediaControlsTransitioningDelegate *transitioningDelegate; // @synthesize transitioningDelegate=_transitioningDelegate;
@property(nonatomic) struct CGSize lastKnownSize; // @synthesize lastKnownSize=_lastKnownSize;
@property(retain, nonatomic) MPAVEndpointRoute *route; // @synthesize route=_route;
@property(retain, nonatomic) MPVolumeGroupSliderCoordinator *groupSliderCoordinator; // @synthesize groupSliderCoordinator=_groupSliderCoordinator;
@property(nonatomic) _Bool isListeningForResponse; // @synthesize isListeningForResponse=_isListeningForResponse;
@property(nonatomic, getter=isOnScreen) _Bool onScreen; // @synthesize onScreen=_onScreen;
@property(retain, nonatomic) MPArtworkCatalog *artworkCatalog; // @synthesize artworkCatalog=_artworkCatalog;
@property(retain, nonatomic) NSMutableArray *secondaryStringComponents; // @synthesize secondaryStringComponents=_secondaryStringComponents;
@property(retain, nonatomic) MediaControlsVolumeContainerView *volumeContainerView; // @synthesize volumeContainerView=_volumeContainerView;
@property(retain, nonatomic) MediaControlsParentContainerView *parentContainerView; // @synthesize parentContainerView=_parentContainerView;
@property(retain, nonatomic) MediaControlsRoutingCornerView *routingCornerView; // @synthesize routingCornerView=_routingCornerView;
@property(retain, nonatomic) MRMediaControlsVideoPickerHeaderView *videoPickerHeaderView; // @synthesize videoPickerHeaderView=_videoPickerHeaderView;
@property(retain, nonatomic) MRMediaControlsVideoPickerFooterView *videoPickerFooterView; // @synthesize videoPickerFooterView=_videoPickerFooterView;
@property(nonatomic, getter=isTransitioning) _Bool transitioning; // @synthesize transitioning=_transitioning;
@property(nonatomic, setter=_setContinuousCornerRadius:) double _continuousCornerRadius; // @synthesize _continuousCornerRadius=__continuousCornerRadius;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(readonly, nonatomic) NSString *routeUID; // @synthesize routeUID=_routeUID;
@property(nonatomic) _Bool allowsNowPlayingAppLaunch; // @synthesize allowsNowPlayingAppLaunch=_allowsNowPlayingAppLaunch;
@property(nonatomic) __weak id <MRPlatterViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MPAVRoutingViewController *routingViewController; // @synthesize routingViewController=_routingViewController;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (void)_updateExplicitTreatmentString;
- (long long)lockScreenInternalRoutePickerOverrideWithDefaultStyle:(long long)arg1;
- (_Bool)lockScreenPresentsOverrideRoutePicker;
- (void)layoutMonitor:(id)arg1 didUpdateDisplayLayout:(id)arg2 withContext:(id)arg3;
- (void)_routingCornerViewReceivedTap:(id)arg1;
- (void)_updateRoutingIndicators;
- (void)_updateRoutingCornerView;
- (_Bool)slider:(id)arg1 shouldCancelSnapWithTouch:(id)arg2;
- (_Bool)slider:(id)arg1 syncStateWillChangeFromState:(long long)arg2 toState:(long long)arg3;
- (_Bool)shouldEnableSyncingForSlider:(id)arg1;
- (void)routingViewController:(id)arg1 willDisplayHeaderView:(id)arg2;
- (void)routingViewController:(id)arg1 willDisplayCell:(id)arg2;
- (struct UIEdgeInsets)contentInsetsForRoutingViewController:(id)arg1;
- (void)routingViewController:(id)arg1 didPickRoute:(id)arg2;
- (void)routingViewController:(id)arg1 didSelectRoutingViewItem:(id)arg2;
- (void)_platterViewControllerReceivedInteraction:(id)arg1;
- (void)presentLanguageOptions;
- (void)presentTVRemote;
- (_Bool)shouldShowTVRemoteButton;
- (void)presentRatingActionSheet:(id)arg1 sourceView:(id)arg2;
- (void)willTransitionToSize:(struct CGSize)arg1 withCoordinator:(id)arg2;
- (void)headerViewLaunchNowPlayingAppButtonPressed:(id)arg1;
- (void)_presentRoutingViewControllerFromCoverSheet;
- (void)_setRoutingPickerVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)_canToggleRoutingPicker;
- (void)headerViewButtonPressed:(id)arg1;
- (void)footerViewButtonPressed:(id)arg1;
- (void)_updateSecondaryStringFormat;
- (void)_updatePlaceholderArtwork;
- (void)_showPlaceholderArtwork;
- (void)_updateRouteNameLabel;
- (void)_updateControlCenterMetadata:(id)arg1 sectionMetadata:(id)arg2;
- (void)_updateHeaderUI;
- (void)endpointControllerRouteDidUpdate:(id)arg1;
- (void)endpointControllerDidUpdateRoutingAvailability:(id)arg1;
- (void)endpointControllerDidChangeState:(id)arg1;
- (void)endpointController:(id)arg1 didLoadNewResponse:(id)arg2;
- (void)_updateConfiguration;
- (void)setSelectedMode:(long long)arg1 animated:(_Bool)arg2;
- (void)_updateOnScreenForStyle:(long long)arg1;
- (void)_dismissShareAudioViewController;
- (void)_showShareAudioViewController;
- (void)setVisualStylingProvider:(id)arg1 forCategory:(long long)arg2;
@property(readonly, copy, nonatomic) NSArray *requiredVisualStyleCategories;
- (id)visualStylingProviderForCategory:(long long)arg1;
- (void)_updateHardwareVolumeButtons;
- (_Bool)_isExpanded;
- (_Bool)_shouldUseViewServiceToPresentTVRemote;
- (void)_prewarmTVRemoteIfNeeded;
- (id)_tvAirplayIdentifier;
- (id)_tvMediaRemoteIdentifier;
- (void)_updateStyle;
- (id)_route;
@property(readonly, nonatomic) UIView *effectiveHeaderView;
@property(readonly, nonatomic) UIView *effectiveFooterView;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (_Bool)_canShowWhileLocked;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)didMoveToParentViewController:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
@property(readonly, nonatomic, getter=isDeviceUnlocked) _Bool deviceUnlocked;
@property(readonly, nonatomic) _Bool shouldDisplayPlatter;
@property(readonly, nonatomic) NSString *routeName;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithActiveRouteType:(long long)arg1;
- (id)initWithRouteUID:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStyle:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
