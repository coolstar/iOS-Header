//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@class NSCollectionLayoutSpacing;

@interface NSCollectionLayoutEdgeSpacing : NSObject <NSCopying>
{
    NSCollectionLayoutSpacing *_leading;
    NSCollectionLayoutSpacing *_top;
    NSCollectionLayoutSpacing *_trailing;
    NSCollectionLayoutSpacing *_bottom;
}

+ (id)spacingForLeading:(id)arg1 top:(id)arg2 trailing:(id)arg3 bottom:(id)arg4;
+ (id)fixedSpacing:(double)arg1;
+ (id)flexibleSpacing:(double)arg1;
+ (id)defaultSpacing;
- (void).cxx_destruct;
- (id)_spacingForEdge:(unsigned long long)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)_hasSpacing;
@property(readonly, nonatomic) NSCollectionLayoutSpacing *bottom;
@property(readonly, nonatomic) NSCollectionLayoutSpacing *top;
@property(readonly, nonatomic) NSCollectionLayoutSpacing *trailing;
@property(readonly, nonatomic) NSCollectionLayoutSpacing *leading;
- (double)spacingForEdge:(unsigned long long)arg1;
- (_Bool)isSpacingFlexibleForEdge:(unsigned long long)arg1;
- (_Bool)isSpacingFixedForEdge:(unsigned long long)arg1;
- (struct NSDirectionalEdgeInsets)edgeOutsets;
- (id)description;
- (id)initWithLeading:(id)arg1 top:(id)arg2 trailing:(id)arg3 bottom:(id)arg4;

@end

