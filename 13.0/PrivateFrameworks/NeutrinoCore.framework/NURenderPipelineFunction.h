//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface NURenderPipelineFunction : NSObject
{
}

+ (id)functionWithEvaluationBlock:(CDUnknownBlockType)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)evaluate:(id)arg1 error:(out id *)arg2;
- (id)nu_evaluateWithPipelineState:(id)arg1 error:(out id *)arg2;

@end

