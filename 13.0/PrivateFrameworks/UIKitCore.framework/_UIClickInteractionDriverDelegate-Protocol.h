//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class UIGestureRecognizer;
@protocol _UIClickInteractionDriving;

@protocol _UIClickInteractionDriverDelegate <NSObject>
- (void)clickDriver:(id <_UIClickInteractionDriving>)arg1 didPerformEvent:(unsigned long long)arg2;
- (void)clickDriver:(id <_UIClickInteractionDriving>)arg1 shouldBegin:(void (^)(_Bool))arg2;

@optional
- (_Bool)clickDriver:(id <_UIClickInteractionDriving>)arg1 shouldDelayGestureRecognizer:(UIGestureRecognizer *)arg2;
- (void)clickDriver:(id <_UIClickInteractionDriving>)arg1 didUpdateHighlightProgress:(double)arg2;
@end
