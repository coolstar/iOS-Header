//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface PLRevGeoCompoundNameInfo : NSObject <NSSecureCoding>
{
    _Bool _isContinuation;
    _Bool _suffixWhenPrefixOnly;
    NSString *_namePrefix;
    NSString *_nameSuffix;
    NSArray *_sortedNames;
}

+ (_Bool)supportsSecureCoding;
+ (id)_localizedNameForName:(id)arg1;
@property(readonly, nonatomic) _Bool suffixWhenPrefixOnly; // @synthesize suffixWhenPrefixOnly=_suffixWhenPrefixOnly;
@property(readonly, nonatomic) _Bool isContinuation; // @synthesize isContinuation=_isContinuation;
@property(readonly, copy, nonatomic) NSArray *sortedNames; // @synthesize sortedNames=_sortedNames;
@property(readonly, copy, nonatomic) NSString *nameSuffix; // @synthesize nameSuffix=_nameSuffix;
@property(readonly, copy, nonatomic) NSString *namePrefix; // @synthesize namePrefix=_namePrefix;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)localizedTitleForNameInfo;
- (id)localizedSortedNames;
- (id)description;
- (id)initWithNamePrefix:(id)arg1 nameSuffix:(id)arg2 sortedNames:(id)arg3 isContinuation:(_Bool)arg4 suffixWhenPrefixOnly:(_Bool)arg5;

@end
