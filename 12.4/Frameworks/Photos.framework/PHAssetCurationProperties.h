//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Photos/PHAssetPropertySet.h>

@class NSDate;

@interface PHAssetCurationProperties : PHAssetPropertySet
{
    float _interestingSubjectScore;
    NSDate *_addedDate;
}

+ (id)propertiesToFetch;
+ (id)keyPathToPrimaryObject;
+ (id)keyPathFromPrimaryObject;
+ (id)propertySetName;
@property(readonly, nonatomic) float interestingSubjectScore; // @synthesize interestingSubjectScore=_interestingSubjectScore;
@property(readonly, nonatomic) NSDate *addedDate; // @synthesize addedDate=_addedDate;
- (void).cxx_destruct;
- (id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(_Bool)arg3;

@end
