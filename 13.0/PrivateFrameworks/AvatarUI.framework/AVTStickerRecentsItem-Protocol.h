//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AvatarUI/AVTDiscardableContent-Protocol.h>

@class NSString, NSURL, UIImage;

@protocol AVTStickerRecentsItem <AVTDiscardableContent>
@property(readonly, copy, nonatomic) CDUnknownBlockType provider;
@property(retain, nonatomic) NSURL *url;
@property(retain, nonatomic) UIImage *image;
@property(readonly, copy, nonatomic) NSString *localizedDescription;
- (NSString *)cellIdentifier;
@end
