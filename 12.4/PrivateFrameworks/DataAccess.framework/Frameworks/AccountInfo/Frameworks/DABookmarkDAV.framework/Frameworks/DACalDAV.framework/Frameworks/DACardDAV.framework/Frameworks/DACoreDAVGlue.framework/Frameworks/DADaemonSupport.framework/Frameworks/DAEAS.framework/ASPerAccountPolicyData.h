//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface ASPerAccountPolicyData : NSObject
{
    NSString *_accountPersistentUUID;
}

- (void).cxx_destruct;
- (void)setPolicyKey:(id)arg1 policyValues:(id)arg2;
@property(readonly, nonatomic) NSDictionary *policyValues;
@property(readonly, nonatomic) NSString *policyKey;
- (id)description;
- (id)initWithAccountPersistentUUID:(id)arg1;

@end

