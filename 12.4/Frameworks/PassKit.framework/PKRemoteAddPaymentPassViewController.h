//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_UIRemoteViewController.h>

#import <PassKit/PKRemoteAddPassViewControllerProtocol-Protocol.h>

@class NSString;
@protocol PKAddPaymentPassViewControllerDelegate;

@interface PKRemoteAddPaymentPassViewController : _UIRemoteViewController <PKRemoteAddPassViewControllerProtocol>
{
    _Bool _finished;
    id <PKAddPaymentPassViewControllerDelegate> _delegate;
}

+ (id)serviceViewControllerInterface;
+ (id)exportedInterface;
+ (_Bool)shouldPropagateAppearanceCustomizations;
@property(nonatomic) __weak id <PKAddPaymentPassViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_addPaymentPassVC;
- (void)generateRequestWithCertificateChain:(id)arg1 nonce:(id)arg2 nonceSignature:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)didFinishWithPass:(id)arg1 error:(id)arg2;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
