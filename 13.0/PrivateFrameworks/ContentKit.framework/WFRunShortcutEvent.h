//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContentKit/WFEvent.h>

@class NSString;

@interface WFRunShortcutEvent : WFEvent
{
    _Bool _completed;
    int _source;
    unsigned int _actionCount;
    NSString *_key;
    NSString *_runSource;
    NSString *_automationType;
}

+ (id)serializablePropertyTransformers;
+ (Class)codableEventClass;
@property(nonatomic) _Bool completed; // @synthesize completed=_completed;
@property(nonatomic) unsigned int actionCount; // @synthesize actionCount=_actionCount;
@property(copy, nonatomic) NSString *automationType; // @synthesize automationType=_automationType;
@property(copy, nonatomic) NSString *runSource; // @synthesize runSource=_runSource;
@property(nonatomic) int source; // @synthesize source=_source;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
- (void).cxx_destruct;

@end
