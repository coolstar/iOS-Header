//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class _CDInteractionStore;

@interface _CDQueryInteractionAdvisor : NSObject
{
    _CDInteractionStore *_store;
}

@property(retain) _CDInteractionStore *store; // @synthesize store=_store;
- (void).cxx_destruct;
- (id)adviseInteractionsForKeywordsInString:(id)arg1 usingSettings:(id)arg2;
- (id)initWithStore:(id)arg1;

@end
