//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SALogStringEvent : SABaseClientBoundCommand
{
}

+ (id)logStringEventWithDictionary:(id)arg1 context:(id)arg2;
+ (id)logStringEvent;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSString *eventValue;
@property(copy, nonatomic) NSString *eventName;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
