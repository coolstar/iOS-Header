//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OpusKit/OKWidgetCALayerProxy.h>

#import <OpusKit/OKSettingsSupport-Protocol.h>

@class NSString;

@interface OKWidgetCATextLayerProxy : OKWidgetCALayerProxy <OKSettingsSupport>
{
}

+ (void)setupJavascriptContext:(id)arg1;
+ (id)supportedSettings;
- (void)setSettingString:(id)arg1;
- (id)settingString;
- (id)settingObjectForKey:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

