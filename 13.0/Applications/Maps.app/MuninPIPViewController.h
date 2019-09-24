//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MapsThemeViewController.h"

#import "MuninFloatingButtonsViewControllerDelegate-Protocol.h"
#import "MuninPIPDataCoordinatorObserver-Protocol.h"

@class CardView, MKMuninContainerView, MKMuninView, MuninFloatingButtonsViewController, NSLayoutConstraint, NSString, UILabel, UIView, VKMuninMarker;
@protocol MuninActionCoordination, MuninPIPDataCoordinator;

__attribute__((visibility("hidden")))
@interface MuninPIPViewController : MapsThemeViewController <MuninFloatingButtonsViewControllerDelegate, MuninPIPDataCoordinatorObserver>
{
    MKMuninContainerView *_muninContainerView;
    MuninFloatingButtonsViewController *_floatingButtonsViewController;
    NSLayoutConstraint *_floatingButtonsTopConstraint;
    NSLayoutConstraint *_floatingButtonsLeadingConstraint;
    NSLayoutConstraint *_floatingButtonsTrailingConstraint;
    UILabel *_statusMessageLabel;
    VKMuninMarker *_muninMarker;
    id <MuninActionCoordination> _actionCoordinator;
    MKMuninView *_muninView;
    CardView *_cardView;
    id <MuninPIPDataCoordinator> _dataCoordinator;
}

@property(retain, nonatomic) id <MuninPIPDataCoordinator> dataCoordinator; // @synthesize dataCoordinator=_dataCoordinator;
@property(retain, nonatomic) CardView *cardView; // @synthesize cardView=_cardView;
@property(retain, nonatomic) MKMuninView *muninView; // @synthesize muninView=_muninView;
@property(nonatomic) __weak id <MuninActionCoordination> actionCoordinator; // @synthesize actionCoordinator=_actionCoordinator;
- (void).cxx_destruct;
- (void)_captureUserAction:(int)arg1 onTarget:(int)arg2 eventValue:(id)arg3;
- (void)_updateEnterMuninFullScreenEnabled:(_Bool)arg1;
- (void)_updateMuninAvailability:(long long)arg1 imageryError:(_Bool)arg2;
- (void)_updateMuninAvailability:(long long)arg1;
- (void)_setupViews;
- (void)_setupConstraints;
- (void)muninPIPDataCoordinatorDidEndMovingMuninView:(id)arg1;
- (void)muninPIPDataCoordinatorDidSynchronizeMapView:(id)arg1;
- (void)muninPIPDataCoordinatorDidEndPanningMapView:(id)arg1;
- (void)muninPIPDataCoordinatorIsPanningMapView:(id)arg1;
- (void)muninPIPDataCoordinatorDidStartPanningMapView:(id)arg1;
- (void)muninPIPDataCoordinatorDidChangeMuninAvailability:(id)arg1;
- (void)muninPIPDataCoordinatorDidExitMuninPIP:(id)arg1;
- (void)muninPIPDataCoordinatorWillExitMuninPIP:(id)arg1;
- (void)muninPIPDataCoordinatorFailedToEnterMuninPIP:(id)arg1;
- (void)muninPIPDataCoordinatorDidEnterMuninPIP:(id)arg1;
- (void)muninFloatingButtonsViewController:(id)arg1 didTapDoneButton:(id)arg2;
- (void)muninFloatingButtonsViewController:(id)arg1 didTapMinimizeButton:(id)arg2;
- (void)muninFloatingButtonsViewController:(id)arg1 didTapMaximizeButton:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)didMoveToParentViewController:(id)arg1;
- (void)viewDidLoad;
- (void)loadView;
@property(nonatomic) _Bool showsMinimizedButton;
@property(readonly, nonatomic) UIView *floatingButtonsView;
- (void)dealloc;
- (id)initWithDataCoordinator:(id)arg1 muninView:(id)arg2;
- (long long)preferredUserInterfaceStyle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
