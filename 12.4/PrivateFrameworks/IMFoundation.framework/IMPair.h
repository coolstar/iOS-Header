//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IMFoundation/NSCopying-Protocol.h>

@interface IMPair : NSObject <NSCopying>
{
    id _first;
    id _second;
}

+ (id)pairWithFirst:(id)arg1 second:(id)arg2;
@property(retain) id second; // @synthesize second=_second;
@property(retain) id first; // @synthesize first=_first;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithFirst:(id)arg1 second:(id)arg2;

@end

