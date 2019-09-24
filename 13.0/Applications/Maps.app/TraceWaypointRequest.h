//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "WaypointRequest-Protocol.h"

@class GEOComposedWaypoint, MKMapItem, MNNavigationServiceDirectionsRequestTicket, NSString, Result;

__attribute__((visibility("hidden")))
@interface TraceWaypointRequest : NSObject <WaypointRequest>
{
    Result *_routesResult;
    Result *_waypointResult;
    NSString *_tracePath;
    TraceWaypointRequest *_destinationRequest;
    MNNavigationServiceDirectionsRequestTicket *_ticket;
    CDUnknownBlockType _completionHandler;
}

@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) MNNavigationServiceDirectionsRequestTicket *ticket; // @synthesize ticket=_ticket;
@property(retain, nonatomic) TraceWaypointRequest *destinationRequest; // @synthesize destinationRequest=_destinationRequest;
@property(copy, nonatomic) NSString *tracePath; // @synthesize tracePath=_tracePath;
@property(retain, nonatomic) Result *waypointResult; // @synthesize waypointResult=_waypointResult;
@property(retain, nonatomic) Result *routesResult; // @synthesize routesResult=_routesResult;
- (void).cxx_destruct;
@property(readonly, nonatomic) GEOComposedWaypoint *waypoint;
- (void)recordRAPInformation:(id)arg1;
- (id)loadComposedWaypointWithTraits:(id)arg1 clientResolvedCompletionHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3 networkActivityHandler:(CDUnknownBlockType)arg4;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) MKMapItem *mapItemForLocationComparison;
@property(readonly, nonatomic, getter=isCurrentLocation) _Bool currentLocation;
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate;
- (id)initWithTracePath:(id)arg1 destinationRequest:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
