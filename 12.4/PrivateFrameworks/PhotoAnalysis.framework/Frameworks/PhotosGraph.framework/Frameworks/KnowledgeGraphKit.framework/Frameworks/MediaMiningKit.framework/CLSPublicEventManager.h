//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CLSPublicEventCache;

@interface CLSPublicEventManager : NSObject
{
    CLSPublicEventCache *_cache;
    double _queryRadius;
}

+ (id)urlForEventsForCacheInvalidation;
@property(nonatomic) double queryRadius; // @synthesize queryRadius=_queryRadius;
@property(readonly, nonatomic) CLSPublicEventCache *cache; // @synthesize cache=_cache;
- (void).cxx_destruct;
- (id)loadInvalidationTokensAndInvalidateCachesIfNeeded;
- (void)saveEventsForCacheInvalidation:(id)arg1;
- (id)publicEventsByTimeLocationTupleIdentifierForTimeLocationTuples:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (id)init;

@end

