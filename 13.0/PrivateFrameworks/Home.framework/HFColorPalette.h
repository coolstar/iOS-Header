//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Home/NAEquatable-Protocol.h>
#import <Home/NSCopying-Protocol.h>
#import <Home/NSMutableCopying-Protocol.h>

@class NSArray, NSString;

@interface HFColorPalette : NSObject <NAEquatable, NSCopying, NSMutableCopying>
{
    NSArray *_colors;
    unsigned long long _paletteType;
}

+ (id)defaultColorPaletteOfType:(unsigned long long)arg1;
+ (id)defaultColorPalette;
+ (id)_defaultColorsOfType:(unsigned long long)arg1;
+ (id)_defaultTemperatureColors;
+ (id)_defaultRGBColors;
+ (id)warmWhiteColor;
@property(readonly, nonatomic) unsigned long long paletteType; // @synthesize paletteType=_paletteType;
@property(copy, nonatomic) NSArray *colors; // @synthesize colors=_colors;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)colorPaletteByAdjustingForColorProfile:(id)arg1;
- (id)serializedRepresentation;
- (id)initWithSerializedRepresentation:(id)arg1 type:(unsigned long long)arg2;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (id)init;
- (id)initWithColors:(id)arg1 type:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
