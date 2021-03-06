//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionView.h>

@interface CKSearchCollectionView : UICollectionView
{
    _Bool _suppressDatasourceUpdates;
    _Bool _lockContentOffset;
    struct UIEdgeInsets _marginInsets;
}

@property(nonatomic) _Bool lockContentOffset; // @synthesize lockContentOffset=_lockContentOffset;
@property(nonatomic) _Bool suppressDatasourceUpdates; // @synthesize suppressDatasourceUpdates=_suppressDatasourceUpdates;
@property(nonatomic) struct UIEdgeInsets marginInsets; // @synthesize marginInsets=_marginInsets;
- (void)setContentOffset:(struct CGPoint)arg1;
- (void)setDataSource:(id)arg1;
- (id)dequeueReusableSupplementaryViewOfKind:(id)arg1 withReuseIdentifier:(id)arg2 forIndexPath:(id)arg3;
- (id)dequeueReusableCellWithReuseIdentifier:(id)arg1 forIndexPath:(id)arg2;

@end

