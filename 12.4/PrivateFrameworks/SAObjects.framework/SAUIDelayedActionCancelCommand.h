//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainCommand.h>

@class NSString;

@interface SAUIDelayedActionCancelCommand : SADomainCommand
{
}

+ (id)delayedActionCancelCommandWithDictionary:(id)arg1 context:(id)arg2;
+ (id)delayedActionCancelCommand;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSString *delayedActionAceId;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
