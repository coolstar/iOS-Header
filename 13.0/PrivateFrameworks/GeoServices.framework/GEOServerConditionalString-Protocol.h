//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/NSCoding-Protocol.h>
#import <GeoServices/NSObject-Protocol.h>

@protocol GEOServerCondition, GEOServerFormattedString;

@protocol GEOServerConditionalString <NSObject, NSCoding>
@property(readonly, nonatomic) id <GEOServerCondition> condition;
@property(readonly, nonatomic) id <GEOServerFormattedString> formattedString;
@end
