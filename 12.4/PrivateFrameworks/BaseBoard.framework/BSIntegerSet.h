//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BaseBoard/NSCopying-Protocol.h>
#import <BaseBoard/NSMutableCopying-Protocol.h>

@class NSHashTable;

@interface BSIntegerSet : NSObject <NSCopying, NSMutableCopying>
{
    NSHashTable *_hashTable;
    _Bool _hasZeroValue;
}

- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)enumerateWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)containsValue:(long long)arg1;
@property(readonly, nonatomic) unsigned long long count;
- (id)_initWithHashTable:(id)arg1 hasZeroValue:(_Bool)arg2;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)init;

@end
