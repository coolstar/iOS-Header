//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "INIntentResponseObserver-Protocol.h"
#import "RideBookingApplication-Protocol.h"

@class INCExtensionConnection, NSString, _MXExtension;
@protocol OS_dispatch_queue, RideBookingApplicationRideStatusDelegate;

__attribute__((visibility("hidden")))
@interface RideBookingApplication : NSObject <INIntentResponseObserver, RideBookingApplication>
{
    NSObject<OS_dispatch_queue> *_queue;
    INCExtensionConnection *_getRideStatusConnection;
    id <RideBookingApplicationRideStatusDelegate> delegate;
    _MXExtension *_extension;
    struct NSString *_identifier;
    NSString *_version;
}

@property(copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) _MXExtension *extension; // @synthesize extension=_extension;
@property(nonatomic) __weak id <RideBookingApplicationRideStatusDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (id)_statusWithListRideOptionsResponse:(id)arg1;
- (id)_statusWithRideOption:(id)arg1 requestRideIntent:(id)arg2 requestRideEtaResponse:(id)arg3;
- (id)_statusWithRequestRideStatusIntentResponse:(id)arg1;
- (id)_statusWithGetRideStatusIntentResponse:(id)arg1;
- (id)_passengersChoiceFromAvailablePartySizeOptions:(id)arg1 optionPriceRange:(id)arg2;
- (void)openWithActivity:(id)arg1;
- (void)cancelRideWithRideStatus:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)checkIfCanCancelRideWithRideStatus:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sendFeedbackForRideStatus:(id)arg1 feedbackRating:(id)arg2 feedbackTip:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)intentResponseDidUpdate:(id)arg1 withSerializedCacheItems:(id)arg2;
- (void)stopUpdates;
- (void)startUpdates;
- (void)getRideStatusWithCompletion:(CDUnknownBlockType)arg1;
- (void)getRideStatusWithPickupLocation:(id)arg1 dropOffLocation:(id)arg2 rideOption:(id)arg3 partySize:(unsigned long long)arg4 paymentMethod:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)getRequestRideStatusWithPickupLocation:(id)arg1 dropOffLocation:(id)arg2 rideOption:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)getRideOptionStatusWithPickupLocation:(id)arg1 dropOffLocation:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_connectionWithIntent:(id)arg1;
@property(readonly, copy, nonatomic) NSString *name;
- (_Bool)enabled;
- (void)enableForUse;
@property(readonly, copy) NSString *description;
- (id)initWithExtension:(id)arg1;
- (id)iconWithFormat:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
