//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CATTaskRequest.h"

@class NSSet;

@interface CRKIdentityServiceFetchCourseIdentifiersTaskRequest : CATTaskRequest
{
    NSSet *_asmCourseIDs;
}

+ (_Bool)supportsSecureCoding;
+ (Class)whitelistedClassForResultObject;
@property(copy, nonatomic) NSSet *asmCourseIDs; // @synthesize asmCourseIDs=_asmCourseIDs;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
