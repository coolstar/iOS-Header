//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SBBootDefaults;

@interface SBStartupTransitionContextPersistence : NSObject
{
    SBBootDefaults *_bootDefaults;
    _Bool _loginSession;
}

- (void).cxx_destruct;
- (id)readTransitionContext;
- (void)saveContext:(id)arg1;
- (id)initWithBootDefaults:(id)arg1 loginSession:(_Bool)arg2;

@end

