//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIBarAppearanceData.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface _UINavTitleAppearanceData : _UIBarAppearanceData
{
    NSDictionary *_titleTextAttributes;
    NSDictionary *_largeTitleTextAttributes;
    struct UIOffset _titlePositionAdjustment;
}

+ (id)decodeFromCoder:(id)arg1 prefix:(id)arg2;
+ (id)standardTitleData;
- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *largeTitleTextAttributes;
@property(nonatomic) struct UIOffset titlePositionAdjustment;
@property(copy, nonatomic) NSDictionary *titleTextAttributes;
- (id)replicate;
- (_Bool)checkEqualTo:(id)arg1;
- (long long)hashInto:(long long)arg1;
- (void)describeInto:(id)arg1;
- (void)encodeToCoder:(id)arg1 prefix:(id)arg2;

@end
