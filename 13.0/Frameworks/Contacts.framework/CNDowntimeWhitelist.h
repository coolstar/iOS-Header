//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CNContactStore;
@protocol NSObject;

@interface CNDowntimeWhitelist : NSObject
{
    CNContactStore *_store;
    id <NSObject> _contactStoreDidChangeNotificationToken;
}

+ (id)os_log;
@property(readonly) id <NSObject> contactStoreDidChangeNotificationToken; // @synthesize contactStoreDidChangeNotificationToken=_contactStoreDidChangeNotificationToken;
@property(readonly) CNContactStore *store; // @synthesize store=_store;
- (void).cxx_destruct;
- (id)allWhitelistedHandleStrings;
- (_Bool)isWhitelisted:(id)arg1;
- (_Bool)anyContactIsWhitelisted:(id)arg1;
- (id)keys;
- (id)allWhitelistedContacts;
- (_Bool)isHandleStringWhitelisted:(id)arg1;
- (id)whitelistedHandleStringsFromHandleStrings:(id)arg1;
- (void)dealloc;
- (void)contactStoreDidChange;
- (id)initWithContactStore:(id)arg1;
- (id)init;

@end

