//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSObject, NSString;
@protocol OS_xpc_object;

@protocol Activity <NSObject>
@property(readonly) const char *registeredName;
@property(readonly, getter=isEnabled) _Bool enabled;
@property(readonly) NSString *descriptiveName;
@property(readonly) NSObject<OS_xpc_object> *criteria;
- (void)run;

@optional
@property(readonly) long long deadline;
@end

