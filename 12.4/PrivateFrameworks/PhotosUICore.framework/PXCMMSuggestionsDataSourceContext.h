//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PHSuggestionMessageContext;

@interface PXCMMSuggestionsDataSourceContext : NSObject
{
    unsigned char _type;
    _Bool _shouldShowAccepted;
    PHSuggestionMessageContext *_messageContext;
    unsigned long long _matchingStrategy;
    long long _fetchLimit;
}

@property(nonatomic) long long fetchLimit; // @synthesize fetchLimit=_fetchLimit;
@property(nonatomic) _Bool shouldShowAccepted; // @synthesize shouldShowAccepted=_shouldShowAccepted;
@property(nonatomic) unsigned long long matchingStrategy; // @synthesize matchingStrategy=_matchingStrategy;
@property(retain, nonatomic) PHSuggestionMessageContext *messageContext; // @synthesize messageContext=_messageContext;
@property(readonly, nonatomic) unsigned char type; // @synthesize type=_type;
- (void).cxx_destruct;
- (_Bool)supportsMatching;
- (id)description;
- (id)initWithType:(unsigned char)arg1;

@end

