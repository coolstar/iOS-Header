//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, _INPBVolumeValue;

@protocol _INPBVolume <NSObject>
+ (Class)valueType;
@property(readonly, nonatomic) unsigned long long valuesCount;
@property(copy, nonatomic) NSArray *values;
- (_INPBVolumeValue *)valueAtIndex:(unsigned long long)arg1;
- (void)addValue:(_INPBVolumeValue *)arg1;
- (void)clearValues;
@end
