//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSDPathSource.h>

#import <TSReading/TSDMixing-Protocol.h>

@class TSDBezierPath;

@interface TSDBezierPathSource : TSDPathSource <TSDMixing>
{
    TSDBezierPath *mPath;
    _Bool mIsRectangular;
    struct CGSize mNaturalSize;
}

+ (id)pathSourceWithBezierPath:(id)arg1;
@property(nonatomic) struct CGSize naturalSize; // @synthesize naturalSize=mNaturalSize;
- (void)p_setBezierPath:(id)arg1;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1;
- (_Bool)isCircular;
- (_Bool)isRectangularForever;
- (_Bool)isRectangular;
- (id)bezierPathWithoutFlips;
- (struct CGAffineTransform)transformToNaturalSize;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithNaturalSize:(struct CGSize)arg1;
- (id)initWithBezierPath:(id)arg1;

@end
