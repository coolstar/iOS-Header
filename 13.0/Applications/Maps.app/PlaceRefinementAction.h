//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ReverseGeocodeAction.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface PlaceRefinementAction : ReverseGeocodeAction
{
    NSString *_address;
}

@property(copy, nonatomic) NSString *address; // @synthesize address=_address;
- (void).cxx_destruct;
- (void)resolveMapItemWithTraits:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithLabel:(id)arg1 atCoordinate:(struct CLLocationCoordinate2D)arg2 address:(id)arg3;

@end
