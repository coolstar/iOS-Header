//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber;

__attribute__((visibility("hidden")))
@interface AutocompleteSectionRule : NSObject
{
    _Bool _matchesAnySourceType;
    _Bool _matchesAnySourceSubtype;
    _Bool _matchesAnyIndexInCompletionSections;
    long long _sourceType;
    long long _sourceSubtype;
    NSNumber *_indexInCompletionSections;
}

+ (id)ruleWithSourceType:(long long)arg1 matchesAnySourceSubtype:(_Bool)arg2 sourceSubtype:(long long)arg3 indexInCompletionSections:(id)arg4;
+ (id)ruleWithSourceType:(long long)arg1 indexInCompletionSections:(id)arg2;
+ (id)ruleWithSourceType:(long long)arg1 sourceSubtype:(long long)arg2 indexInCompletionSections:(id)arg3;
+ (id)ruleWithSourceType:(long long)arg1 sourceSubtype:(long long)arg2;
+ (id)ruleWithSourceType:(long long)arg1;
+ (id)ruleMatchingAnySourceType;
@property(retain, nonatomic) NSNumber *indexInCompletionSections; // @synthesize indexInCompletionSections=_indexInCompletionSections;
@property(nonatomic) _Bool matchesAnyIndexInCompletionSections; // @synthesize matchesAnyIndexInCompletionSections=_matchesAnyIndexInCompletionSections;
@property(nonatomic) long long sourceSubtype; // @synthesize sourceSubtype=_sourceSubtype;
@property(nonatomic) _Bool matchesAnySourceSubtype; // @synthesize matchesAnySourceSubtype=_matchesAnySourceSubtype;
@property(nonatomic) long long sourceType; // @synthesize sourceType=_sourceType;
@property(nonatomic) _Bool matchesAnySourceType; // @synthesize matchesAnySourceType=_matchesAnySourceType;
- (void).cxx_destruct;
- (id)debugDescription;
- (_Bool)matchesItemWithSourceType:(long long)arg1 sourceSubtype:(long long)arg2 indexInCompletionSections:(id)arg3;
- (id)initMatchingAnySourceType:(_Bool)arg1 sourceType:(long long)arg2 matchesAnySourceSubtype:(_Bool)arg3 sourceSubtype:(long long)arg4 matchesAnyIndexInCompletionSections:(_Bool)arg5 indexInCompletionSections:(id)arg6;

@end
