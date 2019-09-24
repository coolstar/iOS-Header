//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CNCDPersistenceContext, NSPredicate;

__attribute__((visibility("hidden")))
@interface CNCDAccountFetcher : NSObject
{
    NSPredicate *_predicate;
    CNCDPersistenceContext *_persistenceContext;
}

+ (id)accountsForPredicate:(id)arg1 inPersistenceStack:(id)arg2 error:(id *)arg3;
@property(readonly, nonatomic) CNCDPersistenceContext *persistenceContext; // @synthesize persistenceContext=_persistenceContext;
@property(readonly, nonatomic) NSPredicate *predicate; // @synthesize predicate=_predicate;
- (void).cxx_destruct;
- (id)fetchAccounts:(id *)arg1;
- (id)initWithPredicate:(id)arg1 persistenceContext:(id)arg2;
- (id)init;

@end
