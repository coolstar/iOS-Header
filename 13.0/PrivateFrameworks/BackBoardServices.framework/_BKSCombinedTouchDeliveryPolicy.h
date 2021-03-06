//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BackBoardServices/BKSTouchDeliveryPolicy.h>

@class NSArray;

@interface _BKSCombinedTouchDeliveryPolicy : BKSTouchDeliveryPolicy
{
    NSArray *_policies;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSArray *policies; // @synthesize policies=_policies;
- (void).cxx_destruct;
- (void)setAssertionEndpoint:(id)arg1;
- (id)assertionEndpoint;
- (id)matchSharingTouchesPolicy:(CDUnknownBlockType)arg1 orCancelTouchesPolicy:(CDUnknownBlockType)arg2 orCombinedPolicy:(CDUnknownBlockType)arg3;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPolicies:(id)arg1;

@end

