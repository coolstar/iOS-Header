//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol WFRemoteQuarantinePolicyEvaluatorDelegate;

@interface WFRemoteQuarantinePolicyEvaluator : NSObject
{
    _Bool _hasCalledCompletionHandler;
    id <WFRemoteQuarantinePolicyEvaluatorDelegate> _delegate;
}

@property(nonatomic) __weak id <WFRemoteQuarantinePolicyEvaluatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)evaluatePolicyForRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

