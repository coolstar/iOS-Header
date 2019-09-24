//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PlugInKit/NSSecureCoding-Protocol.h>

@protocol OS_xpc_object;

@interface PKXPCObject : NSObject <NSSecureCoding>
{
    NSObject<OS_xpc_object> *_object;
}

+ (_Bool)supportsSecureCoding;
+ (id)object:(id)arg1;
@property(retain) NSObject<OS_xpc_object> *object; // @synthesize object=_object;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithObject:(id)arg1;

@end
