//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUHorizontalAlbumListGadgetLayout.h>

@class NSMutableDictionary;

@interface PUDoubleHeightHorizontalAlbumListGadgetLayout : PUHorizontalAlbumListGadgetLayout
{
    NSMutableDictionary *_layoutAttributesByIndexPath;
}

@property(readonly, nonatomic) NSMutableDictionary *layoutAttributesByIndexPath; // @synthesize layoutAttributesByIndexPath=_layoutAttributesByIndexPath;
- (void).cxx_destruct;
- (void)_adjustLayoutAttributes:(id)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (struct CGSize)collectionViewContentSize;
- (_Bool)pagingEnabled;
- (void)invalidateLayout;
- (id)initWithHorizontalLayoutDelegate:(id)arg1;

@end
