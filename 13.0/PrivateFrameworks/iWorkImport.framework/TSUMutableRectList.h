//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSURectList.h>

__attribute__((visibility("hidden")))
@interface TSUMutableRectList : TSURectList
{
}

- (void)makeEmpty;
- (void)replaceRect:(struct CGRect)arg1 atIndex:(unsigned long long)arg2;
- (void)insertRect:(struct CGRect)arg1 atIndex:(unsigned long long)arg2;
- (void)addRectList:(id)arg1;
- (void)addRect:(struct CGRect)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
