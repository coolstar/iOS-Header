//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreServices/LSPlugInQuery.h>

@class NSURL;

@interface LSPlugInQueryWithURL : LSPlugInQuery
{
    NSURL *_bundleURL;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)_enumerateWithXPCConnection:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)_bundleURL;
- (id)_initWithURL:(id)arg1;

@end
