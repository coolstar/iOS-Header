//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@protocol CSTouchPassThroughContainerViewDelegate;

@interface CSTouchPassThroughContainerView : UIView
{
    id <CSTouchPassThroughContainerViewDelegate> _delegate;
}

@property(nonatomic) __weak id <CSTouchPassThroughContainerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;

@end

