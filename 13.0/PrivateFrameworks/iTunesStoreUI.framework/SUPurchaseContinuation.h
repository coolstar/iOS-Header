//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStoreUI/SUContinuation.h>

@class SUPurchaseManager;

@interface SUPurchaseContinuation : SUContinuation
{
    id _purchase;
    SUPurchaseManager *_purchaseManager;
}

@property(nonatomic) __weak SUPurchaseManager *purchaseManager; // @synthesize purchaseManager=_purchaseManager;
@property(readonly, nonatomic) id purchase; // @synthesize purchase=_purchase;
- (void)start;
- (void)cancel;
- (void)dealloc;
- (id)initWithPurchase:(id)arg1;

@end
