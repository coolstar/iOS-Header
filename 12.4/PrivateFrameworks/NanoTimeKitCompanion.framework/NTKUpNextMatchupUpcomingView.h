//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NTKColoringLabel, UIImageView, UILayoutGuide;

@interface NTKUpNextMatchupUpcomingView : UIView
{
    UIImageView *_homeLogoImageView;
    UIImageView *_awayLogoImageView;
    NTKColoringLabel *_versusLabel;
    NTKColoringLabel *_descriptionLabel;
    UILayoutGuide *_homeLogoLayoutGuide;
    UILayoutGuide *_awayLogoLayoutGuide;
    _Bool _paused;
}

@property(nonatomic, getter=isPaused) _Bool paused; // @synthesize paused=_paused;
- (void).cxx_destruct;
- (void)configureWithMatchup:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
