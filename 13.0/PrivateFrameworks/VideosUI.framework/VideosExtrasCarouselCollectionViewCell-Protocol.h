//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideosUI/VideosExtrasZoomingImageTransitionParticipant-Protocol.h>

@class NSAttributedString, NSString, UIColor, UIImage;

@protocol VideosExtrasCarouselCollectionViewCell <VideosExtrasZoomingImageTransitionParticipant>
- (UIImage *)thumbnailImage;
- (NSString *)descriptionTextStyle;
- (NSString *)subtitleTextStyle;
- (NSString *)titleTextStyle;
- (void)setItemIndex:(unsigned long long)arg1;
- (unsigned long long)itemIndex;
- (void)setZoomingImageTransitionIdentifier:(NSString *)arg1;
- (void)setAllowsPinchingThumbnailImageForInteractiveZoomingImageTransition:(_Bool)arg1;
- (NSString *)descriptionText;
- (void)setDescriptionText:(NSAttributedString *)arg1;
- (NSString *)subtitleText;
- (void)setSubtitleText:(NSAttributedString *)arg1;
- (NSString *)titleText;
- (void)setTitleText:(NSAttributedString *)arg1;
- (void)setThumbnailOverlayImage:(UIImage *)arg1;
- (void)setThumbnailImageAccessibilityText:(NSString *)arg1;
- (void)setThumbnailImagePlaceholder:(UIImage *)arg1;
- (void)setThumbnailBorderColor:(UIColor *)arg1;
- (void)setThumbnailImage:(UIImage *)arg1;
- (struct CGSize)thumbnailMaxSize;
- (void)setThumbnailMaxSize:(struct CGSize)arg1;
@end
