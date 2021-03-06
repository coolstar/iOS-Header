//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CNContactsUserDefaults : NSObject
{
}

+ (void)flushSharedInstance;
+ (id)sharedDefaults;
- (void)setFilteredGroupAndContainerIDs:(id)arg1;
- (id)filteredGroupAndContainerIDs;
@property(nonatomic) _Bool shortNameFormatPrefersNicknames;
@property(nonatomic, getter=isShortNameFormatEnabled) _Bool shortNameFormatEnabled;
@property(nonatomic) long long shortNameFormat;
@property(readonly, copy, nonatomic) NSString *countryCode;
@property(readonly, nonatomic) long long sortOrder;
@property(nonatomic) long long displayNameOrder;
- (long long)newContactDisplayNameOrder;
- (id)init;

@end

