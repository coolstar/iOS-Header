//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreImage/MLFeatureProvider-Protocol.h>

@class NSSet, NSString;

__attribute__((visibility("hidden")))
@interface CIFeatureProviderImage : NSObject <MLFeatureProvider>
{
    NSString *name;
    struct __CVBuffer *buffer;
}

@property(nonatomic) struct __CVBuffer *buffer; // @synthesize buffer;
@property(retain, nonatomic) NSString *name; // @synthesize name;
- (id)featureValueForName:(id)arg1;
@property(readonly, nonatomic) NSSet *featureNames;
- (id)initWithName:(id)arg1 buffer:(struct __CVBuffer *)arg2;

@end
