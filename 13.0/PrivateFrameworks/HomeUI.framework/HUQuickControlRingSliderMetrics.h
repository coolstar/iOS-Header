//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HUIntrinsicSizeDescriptor;

@interface HUQuickControlRingSliderMetrics : NSObject
{
    HUIntrinsicSizeDescriptor *_sizeDescriptor;
    double _outerRadius;
}

@property(readonly, nonatomic) double outerRadius; // @synthesize outerRadius=_outerRadius;
@property(readonly, nonatomic) HUIntrinsicSizeDescriptor *sizeDescriptor; // @synthesize sizeDescriptor=_sizeDescriptor;
- (void).cxx_destruct;
- (id)initWithSizeDescriptor:(id)arg1 outerRadius:(double)arg2;

@end

