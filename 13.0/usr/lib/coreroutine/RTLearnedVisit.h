//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <coreroutine/RTCoreDataReadable-Protocol.h>
#import <coreroutine/RTCoreDataWritable-Protocol.h>

@class NSDate, NSString, NSUUID, RTLearnedLocation;

@interface RTLearnedVisit : NSObject <RTCoreDataReadable, RTCoreDataWritable>
{
    NSUUID *_identifier;
    RTLearnedLocation *_location;
    NSDate *_entryDate;
    NSDate *_exitDate;
    NSDate *_creationDate;
    NSDate *_expirationDate;
    double _placeConfidence;
    unsigned long long _placeSource;
}

+ (id)createWithLearnedLocationOfInterestVisitMO:(id)arg1;
+ (id)createWithLearnedVisitMO:(id)arg1;
+ (id)createWithManagedObject:(id)arg1;
@property(nonatomic) unsigned long long placeSource; // @synthesize placeSource=_placeSource;
@property(nonatomic) double placeConfidence; // @synthesize placeConfidence=_placeConfidence;
@property(readonly, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(readonly, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(readonly, nonatomic) NSDate *exitDate; // @synthesize exitDate=_exitDate;
@property(readonly, nonatomic) NSDate *entryDate; // @synthesize entryDate=_entryDate;
@property(readonly, nonatomic) RTLearnedLocation *location; // @synthesize location=_location;
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithIdentifier:(id)arg1 location:(id)arg2 entryDate:(id)arg3 exitDate:(id)arg4 creationDate:(id)arg5 expirationDate:(id)arg6 placeConfidence:(double)arg7 placeSource:(unsigned long long)arg8;
- (id)initWithIdentifier:(id)arg1 location:(id)arg2 entryDate:(id)arg3 exitDate:(id)arg4 creationDate:(id)arg5 expirationDate:(id)arg6;
- (id)init;
- (id)initWithVisit:(id)arg1 locationOfInterest:(id)arg2 creationDate:(id)arg3 expirationDate:(id)arg4;
- (id)managedObjectWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
