//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSNumber;

__attribute__((visibility("hidden")))
@interface MapsCarEngineState : NSObject <NSCopying>
{
    _Bool _lowRangeWarning;
    int _engineType;
    NSNumber *_range;
}

+ (void)prepareForUse;
+ (id)engineStateCNG;
+ (id)engineStateElectric;
+ (id)engineStateDiesel;
+ (id)engineStateGasoline;
@property(retain) NSNumber *range; // @synthesize range=_range;
@property _Bool lowRangeWarning; // @synthesize lowRangeWarning=_lowRangeWarning;
@property int engineType; // @synthesize engineType=_engineType;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqualToEngineState:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)updateWithVehicleInfo:(id)arg1;
- (id)initWithEngineType:(int)arg1;
- (id)init;

@end
