//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIGestureRecognizer.h>

#import "_UISettingsKeyObserver-Protocol.h"

@class NSArray, NSMutableSet, NSString, UIEvent;

@interface SBHorizontalScrollFailureRecognizer : UIGestureRecognizer <_UISettingsKeyObserver>
{
    struct CGPoint _startingLocation;
    unsigned long long _maxAllowableVerticalOffset;
    double _maxAllowedTopAngle;
    double _minAllowedTopAngle;
    double _effectiveTopAngle;
    double _minAllowedBottomAngle;
    double _maxAllowedBottomAngle;
    double _effectiveBottomAngle;
    NSMutableSet *_touches;
    _Bool _tracking;
    _Bool _allowMultiTouch;
    _Bool _viewDebugArea;
    NSArray *_debugViews;
    _Bool _armed;
    _Bool _externallyEnabled;
    UIEvent *_triggeredEvent;
}

@property(readonly, nonatomic) UIEvent *triggeredEvent; // @synthesize triggeredEvent=_triggeredEvent;
@property(nonatomic) _Bool viewDebugArea; // @synthesize viewDebugArea=_viewDebugArea;
@property(nonatomic) double minAllowedBottomAngle; // @synthesize minAllowedBottomAngle=_minAllowedBottomAngle;
@property(nonatomic) double maxAllowedBottomAngle; // @synthesize maxAllowedBottomAngle=_maxAllowedBottomAngle;
@property(nonatomic) double minAllowedTopAngle; // @synthesize minAllowedTopAngle=_minAllowedTopAngle;
@property(nonatomic) double maxAllowedTopAngle; // @synthesize maxAllowedTopAngle=_maxAllowedTopAngle;
@property(nonatomic) unsigned long long maxAllowableVerticalOffset; // @synthesize maxAllowableVerticalOffset=_maxAllowableVerticalOffset;
@property(nonatomic) _Bool allowMultiTouch; // @synthesize allowMultiTouch=_allowMultiTouch;
- (void).cxx_destruct;
- (void)_setDebugViewsColor:(id)arg1;
- (void)_setDebugViewsVisible:(_Bool)arg1;
- (_Bool)canBePreventedByGestureRecognizer:(id)arg1;
- (_Bool)_isLocationOutOfBounds:(struct CGPoint)arg1;
- (_Bool)_isOutOfBounds:(struct CGPoint)arg1 forAngle:(double)arg2;
- (double)_maxAllowableVerticalOffsetForPoint:(struct CGPoint)arg1;
- (_Bool)_isOutOfBoundsVertically:(struct CGPoint)arg1;
- (double)_computeEffectiveAngleFromMin:(double)arg1 max:(double)arg2;
- (struct CGPoint)_averagePointFromTouches;
- (long long)_activeTouchCountForEvent:(id)arg1;
- (void)_loadFromSettings:(id)arg1;
- (id)_touchesFromEvent:(id)arg1;
- (struct CGPoint)_locationOfTouch:(id)arg1 inView:(id)arg2;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)_recognizeForMultiTouchIfNecessary:(id)arg1;
- (void)reset;
- (void)setState:(long long)arg1;
- (void)_setArmed:(_Bool)arg1;
- (void)_updateEnabled;
- (_Bool)_effectivelyEnabled;
- (double)_effectiveBottomAngle;
- (double)_effectiveTopAngle;
- (void)setEnabled:(_Bool)arg1;
- (_Bool)isEnabled;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

