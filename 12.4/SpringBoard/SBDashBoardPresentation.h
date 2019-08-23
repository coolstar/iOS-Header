//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "SBDashBoardPresentationProviding-Protocol.h"
#import "UICoordinateSpace-Protocol.h"

@class NSArray, NSMutableArray, NSString;
@protocol UICoordinateSpace;

@interface SBDashBoardPresentation : NSObject <SBDashBoardPresentationProviding, UICoordinateSpace, NSCopying>
{
    NSMutableArray *_regions;
    id <UICoordinateSpace> _coordinateSpace;
    NSString *_identifier;
}

+ (id)presentationForProvider:(id)arg1;
+ (id)presentationWithCoordinateSpace:(id)arg1;
+ (id)presentation;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy, nonatomic) NSArray *regions; // @synthesize regions=_regions;
@property(nonatomic) __weak id <UICoordinateSpace> coordinateSpace; // @synthesize coordinateSpace=_coordinateSpace;
- (void).cxx_destruct;
- (struct CGRect)convertRect:(struct CGRect)arg1 fromCoordinateSpace:(id)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 toCoordinateSpace:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromCoordinateSpace:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toCoordinateSpace:(id)arg2;
@property(readonly, nonatomic) struct CGRect bounds;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *presentationRegions;
@property(readonly, nonatomic) __weak id <UICoordinateSpace> presentationCoordinateSpace;
- (struct UIEdgeInsets)suggestedInsetsForPreferredContentFrame:(struct CGRect)arg1;
- (id)regionsIntersectingCoordinateSpace:(id)arg1;
- (id)firstRegionIntersectingCoordinateSpace:(id)arg1 excludingRegionsWithRole:(long long)arg2;
- (id)firstRegionIntersectingCoordinateSpace:(id)arg1;
- (_Bool)intersectsCoordinateSpace:(id)arg1;
- (id)presentationForRole:(long long)arg1;
- (void)reset;
- (void)unionPresentation:(id)arg1;
- (void)addRegions:(id)arg1;
- (void)addRegion:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

