//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SAIntentGroupSnippetTemplate.h>

@class NSString;

@interface SAIntentGroupMessageContentSnippetTemplate : SAIntentGroupSnippetTemplate
{
}

+ (id)messageContentSnippetTemplateWithDictionary:(id)arg1 context:(id)arg2;
+ (id)messageContentSnippetTemplate;
@property(nonatomic) _Bool sentStatus;
@property(copy, nonatomic) NSString *content;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
