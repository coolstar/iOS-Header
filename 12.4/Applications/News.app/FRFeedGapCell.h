//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class FRSpinnerView;

@interface FRFeedGapCell : UICollectionViewCell
{
    FRSpinnerView *_spinnerView;
}

@property(retain, nonatomic) FRSpinnerView *spinnerView; // @synthesize spinnerView=_spinnerView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)applyLayoutAttributes:(id)arg1;
- (void)stopSpinner;
- (void)startSpinner;
- (id)initWithFrame:(struct CGRect)arg1;

@end
