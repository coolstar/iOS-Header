//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SBTouchTemplateGestureRecognizer.h"

#import "SBGestureRecognizerPanGestureProviding-Protocol.h"
#import "SBGestureRecognizerTouchHistoryProviding-Protocol.h"

@class NSString, SBFluidSwitcherViewController, SBTouchHistory;

@interface SBFluidScrunchGestureRecognizer : SBTouchTemplateGestureRecognizer <SBGestureRecognizerTouchHistoryProviding, SBGestureRecognizerPanGestureProviding>
{
    SBFluidSwitcherViewController *_switcherViewController;
    double _absoluteScale;
    double _lastPerimeter;
    SBTouchHistory *_touchHistory;
    struct CGPoint _initialCentroid;
    struct CGPoint _absoluteTranslation;
    struct CGPoint _additionalTranslationDueToChangingAnchorPoints;
}

@property(retain, nonatomic) SBTouchHistory *touchHistory; // @synthesize touchHistory=_touchHistory;
@property(nonatomic) double lastPerimeter; // @synthesize lastPerimeter=_lastPerimeter;
@property(nonatomic) struct CGPoint additionalTranslationDueToChangingAnchorPoints; // @synthesize additionalTranslationDueToChangingAnchorPoints=_additionalTranslationDueToChangingAnchorPoints;
@property(nonatomic) struct CGPoint absoluteTranslation; // @synthesize absoluteTranslation=_absoluteTranslation;
@property(nonatomic) struct CGPoint initialCentroid; // @synthesize initialCentroid=_initialCentroid;
@property(nonatomic) double absoluteScale; // @synthesize absoluteScale=_absoluteScale;
@property(nonatomic) __weak SBFluidSwitcherViewController *switcherViewController; // @synthesize switcherViewController=_switcherViewController;
- (void).cxx_destruct;
- (double)incrementalGestureMotionForCandidate:(id)arg1 withTransformAnalyzerInfo:(id)arg2;
- (double)animationDistance;
- (id)logCategory;
- (_Bool)_isMatchedTemplateScrunchTemplate;
- (void)_installTemplates;
- (struct CGPoint)_centroidInSwitcherViewForPolygon:(id)arg1;
- (id)_switcherView;
- (double)peakSpeed;
- (double)averageTouchPathAngleOverTimeDuration:(double)arg1;
- (struct CGPoint)averageTouchVelocityOverTimeDuration:(double)arg1;
- (struct CGPoint)translationWithoutConsideringScaleInView:(id)arg1;
- (struct CGPoint)velocityInView:(id)arg1;
- (struct CGPoint)translationInView:(id)arg1;
- (struct CGPoint)locationInView:(id)arg1;
- (double)_hysteresis;
@property(readonly, nonatomic) struct CGPoint centroid;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)reset;
- (_Bool)_shouldAddNewTouchesAfterGestureRecognition;
- (void)_computeGestureMotionWithTouches:(id)arg1 polygon:(id)arg2;
- (void)_setMatchedPolygon:(id)arg1;
- (void)setState:(long long)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

