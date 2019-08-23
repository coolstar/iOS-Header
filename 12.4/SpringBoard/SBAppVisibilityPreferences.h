//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SBAppVisibilityPreferences : NSObject
{
    NSString *_bundleID;
    _Bool _defaultVisible;
    _Bool _currentlyVisible;
}

@property _Bool currentlyVisible; // @synthesize currentlyVisible=_currentlyVisible;
@property(readonly) _Bool defaultVisible; // @synthesize defaultVisible=_defaultVisible;
- (void).cxx_destruct;
- (_Bool)update;
- (id)description;
- (id)initWithDefaultVisible:(_Bool)arg1 bundleID:(id)arg2;

@end

