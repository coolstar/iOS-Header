//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ComponentKit/CKComponent.h>

@class CKMemoizingComponentStateWrapper;

@interface CKMemoizingComponent : CKComponent
{
    CKMemoizingComponentStateWrapper *_wrapper;
    CKComponent *_component;
}

+ (id)newWithComponentBlock:(CDUnknownBlockType)arg1;
+ (id)initialState;
- (void).cxx_destruct;
- (struct CKComponentLayout)computeLayoutThatFits:(struct CKSizeRange)arg1 restrictedToSize:(const struct CKComponentSize *)arg2 relativeToParentSize:(struct CGSize)arg3;

@end
