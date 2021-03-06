//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class PKEnterCurrencyAmountView, PKEnterValueNewBalanceView, PKPass, UIImageView;
@protocol PKEnterCurrencyAmountPassViewDelegate;

@interface PKEnterCurrencyAmountPassView : UIView
{
    UIImageView *_passView;
    _Bool _loadingSnapshot;
    id <PKEnterCurrencyAmountPassViewDelegate> _delegate;
    PKEnterCurrencyAmountView *_enterCurrencyAmountView;
    PKEnterValueNewBalanceView *_balanceView;
    PKPass *_pass;
}

@property(retain, nonatomic) PKPass *pass; // @synthesize pass=_pass;
@property(readonly, nonatomic) PKEnterValueNewBalanceView *balanceView; // @synthesize balanceView=_balanceView;
@property(readonly, nonatomic) PKEnterCurrencyAmountView *enterCurrencyAmountView; // @synthesize enterCurrencyAmountView=_enterCurrencyAmountView;
@property(nonatomic) __weak id <PKEnterCurrencyAmountPassViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (struct CGSize)_passViewSize;
- (double)_topPadding;
- (void)shakePassView;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithCurrenyAmount:(id)arg1 pass:(id)arg2;
- (id)initWithCurrenyAmount:(id)arg1;

@end

