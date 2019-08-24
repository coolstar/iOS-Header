//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSuggestions/SGOrigin.h>

@interface SGOrigin (Internal)
+ (id)originForDuplicateKey:(id)arg1 entity:(id)arg2 parent:(id)arg3;
+ (id)originForDuplicateKey:(id)arg1 sourceKey:(id)arg2 store:(id)arg3;
+ (unsigned long long)originTypeForEntityType:(long long)arg1;
- (void)addSnippetIfNotExistsFromContentOfEntity:(id)arg1;
- (void)addDetailsFromOriginatingInteractionEntity:(id)arg1;
- (void)addDetailsFromOriginatingCalendarEntity:(id)arg1;
- (void)addDetailsFromOriginatingContactEntity:(id)arg1;
- (void)addDetailsFromOriginatingMessageEntity:(id)arg1;
- (void)addDetailsFromParticipantsOfEntity:(id)arg1;
- (void)addDetailsFromOriginatingGenericEntity:(id)arg1;
@end
