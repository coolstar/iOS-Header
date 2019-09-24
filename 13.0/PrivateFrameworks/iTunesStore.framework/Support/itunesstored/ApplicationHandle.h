//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "DownloadHandle.h"

@class NSString;

@interface ApplicationHandle : DownloadHandle
{
    NSString *_bundleID;
}

@property(readonly, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithTransactionIdentifier:(long long)arg1 downloadIdentifier:(long long)arg2 bundleIdentifier:(id)arg3;
- (id)initWithDownloadHandle:(id)arg1 bundleIdentifier:(id)arg2;
- (id)initWithTransactionIdentifier:(long long)arg1 downloadIdentifier:(long long)arg2;

@end
