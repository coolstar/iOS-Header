//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface _PFMulticasterReceiverList : NSObject
{
    id _inlineReceivers[12];
    NSMutableArray *_extraReceivers;
    SEL _selector;
    unsigned long long _count;
}

@property(readonly) unsigned long long count; // @synthesize count=_count;
@property(readonly) SEL selector; // @synthesize selector=_selector;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)enumerateReceiversWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)hasReceivers;
- (id)initWithSelector:(SEL)arg1 receiversHash:(id)arg2;
- (id)initWithSelector:(SEL)arg1 receivers:(id)arg2;

@end
