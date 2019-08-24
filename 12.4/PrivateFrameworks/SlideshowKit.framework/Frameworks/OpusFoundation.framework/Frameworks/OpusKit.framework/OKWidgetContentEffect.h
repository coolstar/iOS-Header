//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <OpusKit/CAAnimationDelegate-Protocol.h>
#import <OpusKit/OKSettingsSupport-Protocol.h>

@class CAAnimation, NSDictionary, NSString, OFUIView;

@interface OKWidgetContentEffect : NSObject <CAAnimationDelegate, OKSettingsSupport>
{
    NSString *_uuid;
    NSDictionary *_settings;
    CAAnimation *_animation;
    OFUIView *_animatedView;
    _Bool _loop;
    _Bool _autoplay;
    _Bool _isPaused;
    _Bool _needsApplySettings;
    double _defaultDuration;
}

+ (id)supportedSettings;
+ (id)animationKeyPrefix;
@property(nonatomic) _Bool autoplay; // @synthesize autoplay=_autoplay;
@property(nonatomic) _Bool loop; // @synthesize loop=_loop;
@property(nonatomic) double defaultDuration; // @synthesize defaultDuration=_defaultDuration;
@property(retain, nonatomic) CAAnimation *animation; // @synthesize animation=_animation;
- (double)remainingPlayDuration;
- (_Bool)isAnimating;
- (void)stopAnimation;
- (void)resumeAnimation;
- (void)pauseAnimation;
- (void)startAnimation;
- (void)prepareContentEffectWithView:(id)arg1;
- (void)applySettings;
- (void)applySettingsIfNeeded;
- (void)needsApplySettings;
- (void)setUserSettingObject:(id)arg1 forKey:(id)arg2;
- (id)settingObjectForKey:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
@property(nonatomic) OFUIView *animatedView; // @synthesize animatedView=_animatedView;
- (void)dealloc;
- (id)initWithSettings:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
