//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor;

@interface SBPieChartSlice : NSObject
{
    double _value;
    UIColor *_fillColor;
}

+ (id)sliceWithValue:(double)arg1 fillColor:(id)arg2;
@property(readonly) UIColor *fillColor; // @synthesize fillColor=_fillColor;
@property(readonly) double value; // @synthesize value=_value;
- (void).cxx_destruct;
- (id)initWithValue:(double)arg1 fillColor:(id)arg2;

@end

