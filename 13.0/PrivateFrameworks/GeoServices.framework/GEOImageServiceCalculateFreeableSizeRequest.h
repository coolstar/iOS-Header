//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEOXPCRequest.h>

#import <GeoServices/GEOXPCRequest-Protocol.h>

@class NSString;

@interface GEOImageServiceCalculateFreeableSizeRequest : GEOXPCRequest <GEOXPCRequest>
{
}

+ (Class)replyClass;
+ (_Bool)supportsSecureCoding;
- (_Bool)expectsReply;
- (_Bool)isValid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

