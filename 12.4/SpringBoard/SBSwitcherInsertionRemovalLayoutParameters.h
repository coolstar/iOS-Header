//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SBAppLayout;

@interface SBSwitcherInsertionRemovalLayoutParameters : NSObject
{
    SBAppLayout *_appLayout;
    unsigned long long _targetVisibilityState;
}

@property(readonly, nonatomic) unsigned long long targetVisibilityState; // @synthesize targetVisibilityState=_targetVisibilityState;
@property(readonly, nonatomic) SBAppLayout *appLayout; // @synthesize appLayout=_appLayout;
- (void).cxx_destruct;
- (id)initWithAppLayout:(id)arg1 targetVisibilityState:(unsigned long long)arg2;

@end

