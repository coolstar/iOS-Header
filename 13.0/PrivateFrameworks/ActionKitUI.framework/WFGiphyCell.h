//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSURLSessionDataTask, UIActivityIndicatorView, UIImageView, WFGiphyObject;

__attribute__((visibility("hidden")))
@interface WFGiphyCell : UICollectionViewCell
{
    UIActivityIndicatorView *_indicatorView;
    UIImageView *_imageView;
    UIImageView *_selectedImageView;
    NSURLSessionDataTask *_dataTask;
    WFGiphyObject *_object;
}

@property(nonatomic) __weak WFGiphyObject *object; // @synthesize object=_object;
@property(nonatomic) __weak NSURLSessionDataTask *dataTask; // @synthesize dataTask=_dataTask;
@property(nonatomic) __weak UIImageView *selectedImageView; // @synthesize selectedImageView=_selectedImageView;
@property(nonatomic) __weak UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) __weak UIActivityIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
