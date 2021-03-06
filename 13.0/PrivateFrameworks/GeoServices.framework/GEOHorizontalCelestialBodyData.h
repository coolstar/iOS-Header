//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface GEOHorizontalCelestialBodyData : NSObject
{
    double _altitude;
    double _azimuth;
}

@property(readonly, nonatomic) double azimuth; // @synthesize azimuth=_azimuth;
@property(readonly, nonatomic) double altitude; // @synthesize altitude=_altitude;
- (id)initWithLocation:(CDStruct_c3b9c2ee)arg1 julianDay:(double)arg2 body:(long long)arg3 useHighPrecision:(_Bool)arg4;
- (id)initWithLocation:(CDStruct_c3b9c2ee)arg1 date:(id)arg2 body:(long long)arg3 useHighPrecision:(_Bool)arg4;
- (id)initWithLocation:(CDStruct_c3b9c2ee)arg1 date:(id)arg2 body:(long long)arg3;

@end

