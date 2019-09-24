//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreML/NSCopying-Protocol.h>
#import <CoreML/NSSecureCoding-Protocol.h>

@interface MLPredictionOptions : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _usesCPUOnly;
    unsigned long long _classifyTopK;
    unsigned long long _maxComputationBatchSize;
}

+ (_Bool)supportsSecureCoding;
+ (id)defaultOptions;
@property unsigned long long maxComputationBatchSize; // @synthesize maxComputationBatchSize=_maxComputationBatchSize;
@property unsigned long long classifyTopK; // @synthesize classifyTopK=_classifyTopK;
@property(nonatomic) _Bool usesCPUOnly; // @synthesize usesCPUOnly=_usesCPUOnly;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property _Bool useCPUOnly;
- (id)initWithUseCPUOnly:(_Bool)arg1;
- (id)init;
- (id)initWithUsesCPUOnly:(_Bool)arg1;

@end
