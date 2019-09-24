//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VectorKit/VKAnnotationTrackingCameraController.h>

@class VKCameraRegionRestriction;

__attribute__((visibility("hidden")))
@interface VKGlobeAnnotationTrackingCameraController : VKAnnotationTrackingCameraController
{
    struct GlobeView *_globeView;
    struct Anchor {
        int;
        struct Coordinate2D<Radians, double>;
        Geocentric_d8fde6f2;
        double;
        struct MercatorTile;
        struct AnchorManager *;
        _Bool;
    } *_anchor;
    CDStruct_071ac149 _currentAnimationStartCoordinate;
    CDStruct_2c43369c _currentAnimationPresentationStartCoordinate;
    CDStruct_2c43369c _currentAnimationPresentationEndCoordinate;
    CDStruct_2c43369c _currentAnimationEndCoordinate;
    VKCameraRegionRestriction *_regionRestriction;
}

@property(retain, nonatomic) VKCameraRegionRestriction *regionRestriction; // @synthesize regionRestriction=_regionRestriction;
@property(nonatomic) struct GlobeView *globeView; // @synthesize globeView=_globeView;
- (void)_rotateToHeadingAnimated:(_Bool)arg1 duration:(double)arg2;
- (void)_goToAnnotationAnimated:(_Bool)arg1 duration:(double)arg2 isInitial:(_Bool)arg3;
- (Matrix_443f5d51)_centerCursor;
- (Matrix_443f5d51)_nonOffsetCenterCursor;
- (void)dealloc;
- (id)init;

@end
