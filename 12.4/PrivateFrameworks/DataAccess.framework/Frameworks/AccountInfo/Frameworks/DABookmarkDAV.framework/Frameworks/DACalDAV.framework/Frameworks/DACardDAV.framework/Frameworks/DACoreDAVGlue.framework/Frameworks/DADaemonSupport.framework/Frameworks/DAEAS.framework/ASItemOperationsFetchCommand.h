//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ASItemOperationsFetchCommand : NSObject
{
    NSString *_collectionID;
    NSString *_serverID;
    NSString *_longID;
}

- (void).cxx_destruct;
- (id)longID;
- (id)serverID;
- (id)collectionID;
- (id)initWithCollectionID:(id)arg1 withServerID:(id)arg2 withLongID:(id)arg3;

@end
