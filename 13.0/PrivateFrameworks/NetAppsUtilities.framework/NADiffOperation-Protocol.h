//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NetAppsUtilities/NAEquatable-Protocol.h>
#import <NetAppsUtilities/NSObject-Protocol.h>

@class NSString;

@protocol NADiffOperation <NSObject, NAEquatable>
@property(readonly, copy, nonatomic) NSString *operationDescription;
@property(readonly, nonatomic) unsigned long long type;
@end
