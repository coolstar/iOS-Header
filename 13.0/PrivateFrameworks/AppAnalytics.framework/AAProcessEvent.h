//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AAJSON, MISSING_TYPE, NSString;

@interface AAProcessEvent : NSObject
{
    MISSING_TYPE *name;
    MISSING_TYPE *version;
    MISSING_TYPE *json;
    MISSING_TYPE *groupName;
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) NSString *groupName;
@property(nonatomic, readonly) AAJSON *json; // @synthesize json;
@property(nonatomic, readonly) NSString *version;
@property(nonatomic, readonly) NSString *name;

@end
