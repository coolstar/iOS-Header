//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface HUDynamicScrollingOptions : NSObject
{
    long long _viewSizeSubclass;
    CDStruct_d6c048b4 _textScaleSetting;
}

+ (id)_defaultOptionsWithoutStatusSectionForViewSizeSubclass:(long long)arg1;
+ (id)_defaultOptionsWithStatusSectionForViewSizeSubclass:(long long)arg1;
+ (id)defaultOptionsForViewSizeSubclass:(long long)arg1 showsStatusSection:(_Bool)arg2;
@property(nonatomic) CDStruct_d6c048b4 textScaleSetting; // @synthesize textScaleSetting=_textScaleSetting;
@property(readonly, nonatomic) long long viewSizeSubclass; // @synthesize viewSizeSubclass=_viewSizeSubclass;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithViewSizeSubclass:(long long)arg1;

@end
