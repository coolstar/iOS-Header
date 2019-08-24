//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKitUI/NSCopying-Protocol.h>

@class NSArray, NSURL;

@interface SKUIFacebookLikeStatus : NSObject <NSCopying>
{
    NSArray *_friends;
    NSURL *_url;
    _Bool _userLiked;
}

@property(nonatomic, getter=isUserLiked) _Bool userLiked; // @synthesize userLiked=_userLiked;
@property(copy, nonatomic) NSURL *URL; // @synthesize URL=_url;
@property(copy, nonatomic) NSArray *friendNames; // @synthesize friendNames=_friends;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithURL:(id)arg1 likeStatusDictionary:(id)arg2;

@end
