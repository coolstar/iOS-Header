//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <coreroutine/NSObject-Protocol.h>

@class NSManagedObjectModel;

@protocol RTPersistenceModelProvider <NSObject>
- (NSManagedObjectModel *)modelFollowingModel:(NSManagedObjectModel *)arg1;
- (NSManagedObjectModel *)latestModel;
@end
