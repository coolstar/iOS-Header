//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface GEOThrottlerRequester : NSObject
{
}

+ (id)sharedRequester;
- (_Bool)allowRequest:(CDStruct_d1a7ebee)arg1 forClient:(id)arg2 throttlerToken:(id *)arg3 error:(id *)arg4;
- (_Bool)getThrottleStateFor:(CDStruct_d1a7ebee)arg1 nextSafeRequestTime:(double *)arg2 availableRequestCount:(unsigned int *)arg3 error:(id *)arg4;
- (id)getTokenOrInfoFor:(CDStruct_d1a7ebee)arg1 nextSafeRequestTime:(double *)arg2 availableRequestCount:(unsigned int *)arg3 error:(id *)arg4;
- (_Bool)_getTokenAndInfo:(id *)arg1 forRequest:(CDStruct_d1a7ebee)arg2 nextSafeRequestTime:(double *)arg3 availableRequestCount:(unsigned int *)arg4 error:(id *)arg5;

@end
