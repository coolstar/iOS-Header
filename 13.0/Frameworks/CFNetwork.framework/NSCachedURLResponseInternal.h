//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, NSURLResponse;

@interface NSCachedURLResponseInternal : NSObject
{
    NSURLResponse *response;
    NSData *data;
    NSDictionary *userInfo;
    unsigned long long storagePolicy;
    struct _CFCachedURLResponse *_cachedURLResponse;
}

- (void)dealloc;

@end
