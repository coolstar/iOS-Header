//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class WebScriptCallFramePrivate;

@interface WebScriptCallFrame : NSObject
{
    WebScriptCallFramePrivate *_private;
    id _userInfo;
}

- (id)exception;
- (id)functionName;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (void)dealloc;
- (id)_convertValueToObjcValue:(struct JSValue)arg1;
- (id)_initWithGlobalObject:(id)arg1 functionName:(struct String)arg2 exceptionValue:(struct JSValue)arg3;

@end
