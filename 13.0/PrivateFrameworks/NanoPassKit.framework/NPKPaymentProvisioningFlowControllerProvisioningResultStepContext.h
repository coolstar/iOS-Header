//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoPassKit/NPKPaymentProvisioningFlowStepContext.h>

@class NSError, PKPaymentPass;

@interface NPKPaymentProvisioningFlowControllerProvisioningResultStepContext : NPKPaymentProvisioningFlowStepContext
{
    _Bool _cardAdded;
    PKPaymentPass *_provisionedPass;
    NSError *_error;
}

@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) PKPaymentPass *provisionedPass; // @synthesize provisionedPass=_provisionedPass;
@property(nonatomic) _Bool cardAdded; // @synthesize cardAdded=_cardAdded;
- (void).cxx_destruct;
- (id)description;
- (id)initWithRequestContext:(id)arg1;

@end
