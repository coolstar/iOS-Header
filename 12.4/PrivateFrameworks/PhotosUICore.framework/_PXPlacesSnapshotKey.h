//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/NSCopying-Protocol.h>

@interface _PXPlacesSnapshotKey : NSObject <NSCopying>
{
    struct CGSize __imageSize;
}

@property(nonatomic) struct CGSize _imageSize; // @synthesize _imageSize=__imageSize;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithImageSize:(struct CGSize)arg1;

@end
