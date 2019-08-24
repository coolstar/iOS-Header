//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaMiningKit/NSSecureCoding-Protocol.h>

@class CLCircularRegion, CLLocation, CLSLitePlacemark, NSArray, NSMutableArray, NSUUID;

@interface CLSLocationOfInterest : NSObject <NSSecureCoding>
{
    NSMutableArray *_visits;
    NSUUID *_identifier;
    long long _type;
    CLLocation *_location;
    CLSLitePlacemark *_placemark;
    CLCircularRegion *_placemarkRegion;
    double _radius;
    unsigned long long _businessItemMuid;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) unsigned long long businessItemMuid; // @synthesize businessItemMuid=_businessItemMuid;
@property(readonly, nonatomic) NSArray *visits; // @synthesize visits=_visits;
@property(readonly, nonatomic) double radius; // @synthesize radius=_radius;
@property(readonly, nonatomic) CLCircularRegion *placemarkRegion; // @synthesize placemarkRegion=_placemarkRegion;
@property(readonly, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (double)placemarkLocationDistanceFromLocation:(id)arg1;
- (void)removeVisit:(id)arg1;
- (void)addVisit:(id)arg1;
@property(readonly, nonatomic) CLSLitePlacemark *placemark; // @synthesize placemark=_placemark;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 locationOfInterestType:(long long)arg2 location:(id)arg3 placemarkRegion:(id)arg4 businessItemMuid:(unsigned long long)arg5 radius:(double)arg6;

@end
