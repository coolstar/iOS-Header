//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UINavigationController.h>

@class RUIStyle;

@interface RUINavigationController : UINavigationController
{
    unsigned long long _ruiSupportedInterfaceOrientations;
    RUIStyle *_style;
    CDUnknownBlockType _menuDismissalHandler;
}

@property(copy, nonatomic) CDUnknownBlockType menuDismissalHandler; // @synthesize menuDismissalHandler=_menuDismissalHandler;
@property(retain, nonatomic) RUIStyle *style; // @synthesize style=_style;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (_Bool)canBeShownFromSuspendedState;
- (void)_menuButtonPressed:(id)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (unsigned long long)supportedInterfaceOrientations;
- (void)setSupportedInterfaceOrientations:(unsigned long long)arg1;

@end
