//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKServiceProviderOrder.h>

@class NSString;

@interface PKPeerPaymentServiceProviderOrder : PKServiceProviderOrder
{
    NSString *_sourceAccount;
    NSString *_targetAccount;
    NSString *_dpanIdentifier;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *dpanIdentifier; // @synthesize dpanIdentifier=_dpanIdentifier;
@property(copy, nonatomic) NSString *targetAccount; // @synthesize targetAccount=_targetAccount;
@property(copy, nonatomic) NSString *sourceAccount; // @synthesize sourceAccount=_sourceAccount;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)serviceProviderData;
- (id)init;

@end
