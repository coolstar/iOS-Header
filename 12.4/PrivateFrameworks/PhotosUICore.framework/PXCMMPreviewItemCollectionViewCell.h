//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIColor, UIImage, UIImageView;

@interface PXCMMPreviewItemCollectionViewCell : UICollectionViewCell
{
    UIImageView *_imageView;
    UIImage *_image;
    UIColor *_imageBorderColor;
    double _imageBorderWidth;
}

@property(nonatomic) double imageBorderWidth; // @synthesize imageBorderWidth=_imageBorderWidth;
@property(copy, nonatomic) UIColor *imageBorderColor; // @synthesize imageBorderColor=_imageBorderColor;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)_updateImage;

@end

