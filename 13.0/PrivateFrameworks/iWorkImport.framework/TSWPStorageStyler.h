//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TSWPStorage;

__attribute__((visibility("hidden")))
@interface TSWPStorageStyler : NSObject
{
    TSWPStorage *_storage;
    unsigned long long _attributeArrayKind;
}

@property(nonatomic) unsigned long long attributeArrayKind; // @synthesize attributeArrayKind=_attributeArrayKind;
@property(retain, nonatomic) TSWPStorage *storage; // @synthesize storage=_storage;
- (void).cxx_destruct;
- (void)performStylingInRange:(struct _NSRange)arg1 undoTransaction:(struct TSWPStorageTransaction *)arg2;
- (void)applyStyle:(id)arg1 range:(struct _NSRange)arg2 undoTransaction:(struct TSWPStorageTransaction *)arg3;
- (id)replacementStyleForStyle:(id)arg1 range:(struct _NSRange)arg2;
- (id)initWithStorage:(id)arg1 attributeArrayKind:(unsigned long long)arg2;

@end
