//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@interface HKBloodTypeObject : NSObject <NSCopying, NSSecureCoding>
{
    long long _bloodType;
}

+ (_Bool)supportsSecureCoding;
@property(readonly) long long bloodType; // @synthesize bloodType=_bloodType;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_initWithBloodType:(long long)arg1;

@end
