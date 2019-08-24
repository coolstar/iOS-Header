//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MKLocationManagerObserver-Protocol.h"
#import "VKMapViewTourGuideDelegate-Protocol.h"

@class NSString, VKFeatureAccessibilityElement, VKMapView, VKMapViewAccessibilityElementManager, VKMapViewTourStatus;

@interface VKMapViewTourGuideManager : NSObject <MKLocationManagerObserver, VKMapViewTourGuideDelegate>
{
    _Bool _running;
    VKMapViewAccessibilityElementManager *_elementManager;
    VKMapViewTourStatus *_tourStatus;
    NSString *_lastTourStatusAnnouncement;
    VKFeatureAccessibilityElement *_lastCurrentTourLocation;
    VKMapView *_mapView;
    long long _secondsSinceZoomRequest;
}

+ (void)decreaseDetailLevel;
+ (void)increaseDetailLevel;
+ (_Bool)shouldSuppressLocationUpdates;
+ (long long)detailLevel;
+ (id)_descriptionForDetailLevel;
@property(nonatomic) long long secondsSinceZoomRequest; // @synthesize secondsSinceZoomRequest=_secondsSinceZoomRequest;
@property(nonatomic) __weak VKMapView *mapView; // @synthesize mapView=_mapView;
@property(retain, nonatomic) VKFeatureAccessibilityElement *lastCurrentTourLocation; // @synthesize lastCurrentTourLocation=_lastCurrentTourLocation;
@property(retain, nonatomic) NSString *lastTourStatusAnnouncement; // @synthesize lastTourStatusAnnouncement=_lastTourStatusAnnouncement;
@property(retain, nonatomic) VKMapViewTourStatus *tourStatus; // @synthesize tourStatus=_tourStatus;
@property(retain, nonatomic) VKMapViewAccessibilityElementManager *elementManager; // @synthesize elementManager=_elementManager;
@property(nonatomic, getter=isRunning) _Bool running; // @synthesize running=_running;
- (void).cxx_destruct;
- (long long)detailLevel;
- (void)stopTour;
- (void)startTour;
- (void)locationManagerUpdatedHeading:(id)arg1;
- (void)locationManagerFailedToUpdateHeading:(id)arg1 withError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3;
- (void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3;
- (void)locationManagerUpdatedLocation:(id)arg1;
- (id)_descriptionForOrientation:(long long)arg1;
- (_Bool)locationManagerShouldPauseLocationUpdates:(id)arg1;
- (void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2;
- (void)locationManagerDidResumeLocationUpdates:(id)arg1;
- (void)locationManagerDidReset:(id)arg1;
- (void)locationManagerDidPauseLocationUpdates:(id)arg1;
- (void)_updateElementsComplete:(id)arg1;
- (id)initWithMapView:(id)arg1 elementManager:(id)arg2;
- (void)dealloc;
- (id)tourStatusForMapView:(id)arg1;
- (void)_updateElements;
- (double)_yaw;
- (long long)_orientation;
- (CDStruct_2c43369c)_center;
- (id)_elements;
- (void)_stopObservingUpdates;
- (void)_startObservingUpdates;
- (void)_updateTourStatusWithCenter:(CDStruct_2c43369c)arg1 location:(id)arg2 orientation:(long long)arg3;
- (unsigned long long)_tourPOISideFromTheta:(double)arg1;
- (double)_normalizedThetaFromTheta:(double)arg1;
- (_Bool)_setZoomLevelForUserSpeed:(double)arg1;
- (void)_queueTourStatusAnnouncement:(id)arg1;
- (id)_tourLocationForUserPoint:(struct CGPoint)arg1 radius:(double)arg2 ignoreLocation:(id)arg3;
- (id)_tourPOIForUserPoint:(struct CGPoint)arg1 radius:(double)arg2 futureUserTheta:(double)arg3 thetaFromCourse:(double *)arg4 shouldFilterIfBehind:(_Bool)arg5;
- (_Bool)_elementIntersectsElement:(id)arg1 point:(struct CGPoint)arg2 radius:(double)arg3;
- (_Bool)_elementValidForCurrentDetailLevel:(id)arg1;
- (_Bool)_elementsInvalidForOrientation:(long long)arg1;
- (_Bool)_elementsInvalidForCenter:(CDStruct_2c43369c)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
