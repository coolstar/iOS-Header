//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface WMListLevelTextMapper : NSObject
{
    NSMutableArray *_tokens;
}

- (void).cxx_destruct;
- (id)listLevelTextForOutline:(id)arg1;
- (id)initWithText:(id)arg1 levelDescriptions:(id)arg2 language:(int)arg3;
- (id)initWithText:(id)arg1;
- (id)token:(unsigned int)arg1;
- (unsigned long long)tokenCount;

@end

