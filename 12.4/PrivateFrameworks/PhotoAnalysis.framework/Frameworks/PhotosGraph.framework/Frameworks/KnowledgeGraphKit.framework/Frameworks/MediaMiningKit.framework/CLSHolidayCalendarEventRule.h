//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CLSHolidayCalendarEventRuleRequiredTraits, NSArray, NSString;
@protocol CLSHolidayCalendarEventDateRuleDelegate;

@interface CLSHolidayCalendarEventRule : NSObject
{
    NSString *_uuid;
    NSString *_name;
    NSArray *_dateRules;
    CLSHolidayCalendarEventRuleRequiredTraits *_requiredTraits;
    id <CLSHolidayCalendarEventDateRuleDelegate> _dateRuleDelegate;
    NSString *_localizedName;
    unsigned long long _category;
}

+ (id)localizedNameForName:(id)arg1;
@property(readonly, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
@property(nonatomic) __weak id <CLSHolidayCalendarEventDateRuleDelegate> dateRuleDelegate; // @synthesize dateRuleDelegate=_dateRuleDelegate;
@property(readonly, nonatomic) CLSHolidayCalendarEventRuleRequiredTraits *requiredTraits; // @synthesize requiredTraits=_requiredTraits;
@property(readonly, nonatomic) NSArray *dateRules; // @synthesize dateRules=_dateRules;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)_isMatchingOnlyLocalDate:(id)arg1;
@property(readonly, nonatomic) _Bool allowSceneClassificationBasedEvaluation;
@property(readonly, nonatomic) unsigned long long category; // @synthesize category=_category;
@property(readonly, nonatomic) _Bool isCelebration;
- (_Bool)evaluateOnlyTraits:(id)arg1;
- (id)_dateRuleForYear:(long long)arg1;
- (id)localDateByEvaluatingRuleForYear:(long long)arg1;
- (_Bool)evaluateWithLocalDate:(id)arg1 traits:(id)arg2;
- (id)initWithEventDescription:(id)arg1;

@end
