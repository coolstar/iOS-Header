//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIView;

@protocol _UIDynamicReferenceSystem <NSObject>
- (struct CGRect)bounds;

@optional
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromView:(UIView *)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toView:(UIView *)arg2;
- (struct CGRect)_dynamicReferenceBounds;
@end

