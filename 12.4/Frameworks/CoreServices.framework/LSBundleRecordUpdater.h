//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreServices/LSRecordBuilder.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface LSBundleRecordUpdater : LSRecordBuilder
{
    struct LSContext _context;
    _Bool _hasContext;
    unsigned int _bundleID;
    struct LSBundleData _bundleData;
    NSString *_bundleIdentifier;
}

@property(readonly, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (int)updateBundleRecord;
- (void)parsePlaceholderMetadata:(id)arg1;
- (void)parseSINFDictionary:(id)arg1;
- (void)parseiTunesMetadata:(id)arg1;
- (void)dealloc;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1 preferPlaceholder:(_Bool)arg2;

@end
