//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

#import "MapsTheming-Protocol.h"

@class NSString, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface TransportTypeSegment : UIControl <MapsTheming>
{
    long long _transportType;
    UIImageView *_iconView;
    UILabel *_label;
}

@property(readonly, nonatomic) UILabel *label; // @synthesize label=_label;
@property(readonly, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(readonly, nonatomic) long long transportType; // @synthesize transportType=_transportType;
- (void).cxx_destruct;
- (void)_updateViewsWithTheme:(id)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)updateTheme;
- (void)_setupConstraints;
- (void)willMoveToWindow:(id)arg1;
- (id)initWithTransportType:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
