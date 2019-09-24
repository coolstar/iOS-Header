//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSWPSelection.h>

__attribute__((visibility("hidden")))
@interface TSTWPFormulaSelection : TSWPSelection
{
    unsigned long long mActiveTokenCharIndex;
}

+ (Class)archivedSelectionClass;
@property(nonatomic) unsigned long long activeTokenCharIndex; // @synthesize activeTokenCharIndex=mActiveTokenCharIndex;
- (long long)compare:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithType:(int)arg1 range:(struct _NSRange)arg2 styleInsertionBehavior:(int)arg3 caretAffinity:(int)arg4 smartFieldRange:(struct _NSRange)arg5 leadingEdge:(_Bool)arg6 leadingCharIndex:(unsigned long long)arg7 activeTokenCharIndex:(unsigned long long)arg8;
- (id)initWithType:(int)arg1 range:(struct _NSRange)arg2 styleInsertionBehavior:(int)arg3 caretAffinity:(int)arg4 smartFieldRange:(struct _NSRange)arg5 leadingEdge:(_Bool)arg6 leadingCharIndex:(unsigned long long)arg7;

@end
