//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TouchRemote/TRResponseMessage.h>

@interface TRSetupActivationResponse : TRResponseMessage
{
    _Bool _activated;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool activated; // @synthesize activated=_activated;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
