//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PETScalarEventTracker;

@interface PPMFeedbackRegistered : NSObject
{
    PETScalarEventTracker *_tracker;
}

@property(readonly, nonatomic) PETScalarEventTracker *tracker; // @synthesize tracker=_tracker;
- (void).cxx_destruct;
- (void)trackEventWithScalar:(unsigned long long)arg1 client_id:(id)arg2 variant_name:(id)arg3 type:(struct PPMPortraitFeedbackType_)arg4 component:(struct PPMPortraitComponent_)arg5 mapping_id:(id)arg6 from_portrait:(struct PPMTypeSafeBool_)arg7;
- (id)init;

@end
