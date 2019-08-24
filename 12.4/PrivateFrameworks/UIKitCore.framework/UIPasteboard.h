//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, NSURL, UIColor, UIImage;

@interface UIPasteboard : NSObject
{
}

+ (id)_pasteboardWithUniqueName;
+ (id)_pasteboardWithName:(id)arg1 create:(_Bool)arg2;
+ (void)removePasteboardWithName:(id)arg1;
+ (id)pasteboardWithUniqueName;
+ (id)pasteboardWithName:(id)arg1 create:(_Bool)arg2;
+ (id)generalPasteboard;
- (_Bool)canInstantiateObjectsOfClass:(Class)arg1;
- (id)itemProvidersForInstantiatingObjectsOfClass:(Class)arg1;
@property(copy, nonatomic) NSArray *itemProviders;
@property(readonly, copy, nonatomic) NSArray *availableTypes;
- (void)setObjects:(id)arg1 localOnly:(_Bool)arg2 expirationDate:(id)arg3;
- (void)setObjects:(id)arg1;
- (void)setObjects:(id)arg1 options:(id)arg2;
- (void)setItemProviders:(id)arg1 localOnly:(_Bool)arg2 expirationDate:(id)arg3;
- (void)setItemProviders:(id)arg1 options:(id)arg2;
- (_Bool)_hasStrings;
@property(readonly, nonatomic) _Bool hasColors;
@property(readonly, nonatomic) _Bool hasImages;
@property(readonly, nonatomic) _Bool hasURLs;
@property(readonly, nonatomic) _Bool hasStrings;
@property(copy, nonatomic) NSArray *colors;
@property(copy, nonatomic) NSArray *images;
@property(copy, nonatomic) NSArray *URLs;
@property(copy, nonatomic) NSArray *strings;
@property(copy, nonatomic) UIColor *color;
@property(copy, nonatomic) UIImage *image;
@property(copy, nonatomic) NSURL *URL;
@property(copy, nonatomic) NSString *string;
- (void)setItems:(id)arg1 options:(id)arg2;
- (void)addItems:(id)arg1;
@property(copy, nonatomic) NSArray *items;
- (id)dataForPasteboardType:(id)arg1 inItemSet:(id)arg2;
- (id)valuesForPasteboardType:(id)arg1 inItemSet:(id)arg2;
- (id)itemSetWithPasteboardTypes:(id)arg1;
- (_Bool)containsPasteboardTypes:(id)arg1 inItemSet:(id)arg2;
- (id)pasteboardTypesForItemSet:(id)arg1;
@property(readonly, nonatomic) long long numberOfItems;
- (void)setData:(id)arg1 forPasteboardType:(id)arg2;
- (void)setValue:(id)arg1 forPasteboardType:(id)arg2;
- (id)valueForPasteboardType:(id)arg1;
- (id)dataForPasteboardType:(id)arg1;
- (_Bool)containsPasteboardTypes:(id)arg1;
@property(readonly, nonatomic) NSArray *pasteboardTypes;
@property(readonly, nonatomic) long long changeCount;
- (void)setPersistent:(_Bool)arg1;
@property(readonly, nonatomic, getter=isPersistent) _Bool persistent;
- (void)setName:(id)arg1;
@property(readonly, nonatomic) NSString *name;

@end
