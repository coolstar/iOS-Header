//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol PersonalizedAutocompleteItem;

__attribute__((visibility("hidden")))
@interface AutocompleteItemManagerItemWrapper : NSObject
{
    id <PersonalizedAutocompleteItem> _item;
    long long _priority;
}

@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(retain, nonatomic) id <PersonalizedAutocompleteItem> item; // @synthesize item=_item;
- (void).cxx_destruct;

@end
