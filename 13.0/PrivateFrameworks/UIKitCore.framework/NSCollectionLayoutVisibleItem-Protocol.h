//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>
#import <UIKitCore/UIDynamicItem-Protocol.h>

@class NSIndexPath, NSString;

@protocol NSCollectionLayoutVisibleItem <NSObject, UIDynamicItem>
@property(readonly, nonatomic) NSString *representedElementKind;
@property(readonly, nonatomic) unsigned long long representedElementCategory;
@property(readonly, nonatomic) struct CGRect bounds;
@property(readonly, nonatomic) struct CGRect frame;
@property(readonly, nonatomic) NSIndexPath *indexPath;
@property(readonly, nonatomic) NSString *name;
@property(nonatomic) struct CATransform3D transform3D;
@property(nonatomic) struct CGAffineTransform transform;
@property(nonatomic) struct CGPoint center;
@property(nonatomic, getter=isHidden) _Bool hidden;
@property(nonatomic) long long zIndex;
@property(nonatomic) double alpha;
@end
