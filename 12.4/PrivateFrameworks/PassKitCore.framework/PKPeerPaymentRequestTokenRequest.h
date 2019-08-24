//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPeerPaymentWebServiceRequest.h>

@class NSDecimalNumber, NSString;

@interface PKPeerPaymentRequestTokenRequest : PKPeerPaymentWebServiceRequest
{
    NSString *_recipientIdentifier;
    NSDecimalNumber *_amount;
    NSString *_currency;
    NSString *_senderAddress;
    NSString *_recipientPhoneOrEmail;
}

@property(copy, nonatomic) NSString *recipientPhoneOrEmail; // @synthesize recipientPhoneOrEmail=_recipientPhoneOrEmail;
@property(copy, nonatomic) NSString *senderAddress; // @synthesize senderAddress=_senderAddress;
@property(copy, nonatomic) NSString *currency; // @synthesize currency=_currency;
@property(copy, nonatomic) NSDecimalNumber *amount; // @synthesize amount=_amount;
@property(copy, nonatomic) NSString *recipientIdentifier; // @synthesize recipientIdentifier=_recipientIdentifier;
- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2 deviceIdentifier:(id)arg3 deviceScore:(id)arg4 deviceMetadata:(id)arg5;

@end
