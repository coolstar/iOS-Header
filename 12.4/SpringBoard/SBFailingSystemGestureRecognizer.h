//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIGestureRecognizer.h>

@protocol SBSystemGestureRecognizerDelegate;

@interface SBFailingSystemGestureRecognizer : UIGestureRecognizer
{
}

- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (id)init;

// Remaining properties
@property(nonatomic) __weak id <SBSystemGestureRecognizerDelegate> delegate; // @dynamic delegate;

@end

