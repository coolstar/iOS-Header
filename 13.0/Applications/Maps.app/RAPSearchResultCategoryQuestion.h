//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "RAPMenuQuestion.h"

@protocol RAPUserSearch;

__attribute__((visibility("hidden")))
@interface RAPSearchResultCategoryQuestion : RAPMenuQuestion
{
    id <RAPUserSearch> _selectedValue;
}

+ (id)localizedHeaderText;
@property(readonly, nonatomic) id <RAPUserSearch> selectedValue; // @synthesize selectedValue=_selectedValue;
- (void).cxx_destruct;
- (id)selectedPlace;
- (id)followUpQuestionForCategory:(long long)arg1;
- (_Bool)canDisplayMenuItemForQuestionCategory:(long long)arg1;
- (id)mainMenuQuestionCategories;
- (void)resetCachedMenuItems;
- (long long)questionCategory;
- (int)userAction;
- (int)analyticTarget;
- (id)initWithReport:(id)arg1 parentQuestion:(id)arg2 search:(id)arg3;

@end
