//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngine/RETextContentProvider.h>

@class NSString;

@interface RESimpleTextContentProvider : RETextContentProvider
{
    NSString *_text;
}

+ (id)textContentProviderWithText:(id)arg1;
@property(readonly, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)clockKitTextProviderRepresentation;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)attributedStringRepresentation;
- (id)initWithText:(id)arg1;
- (id)contentEncodedString;

@end
