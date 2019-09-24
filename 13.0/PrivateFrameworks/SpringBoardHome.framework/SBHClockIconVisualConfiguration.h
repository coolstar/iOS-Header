//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardHome/BSDescriptionProviding-Protocol.h>
#import <SpringBoardHome/NSCopying-Protocol.h>

@class NSString;

@interface SBHClockIconVisualConfiguration : NSObject <NSCopying, BSDescriptionProviding>
{
    double _secondHandTailLength;
    double _hourMinuteHandCenterRadius;
    double _secondHandCenterRadius;
    struct CGSize _hourHandSize;
    struct CGSize _minuteHandSize;
    struct CGSize _secondHandSize;
}

@property(nonatomic) double secondHandCenterRadius; // @synthesize secondHandCenterRadius=_secondHandCenterRadius;
@property(nonatomic) double hourMinuteHandCenterRadius; // @synthesize hourMinuteHandCenterRadius=_hourMinuteHandCenterRadius;
@property(nonatomic) double secondHandTailLength; // @synthesize secondHandTailLength=_secondHandTailLength;
@property(nonatomic) struct CGSize secondHandSize; // @synthesize secondHandSize=_secondHandSize;
@property(nonatomic) struct CGSize minuteHandSize; // @synthesize minuteHandSize=_minuteHandSize;
@property(nonatomic) struct CGSize hourHandSize; // @synthesize hourHandSize=_hourHandSize;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
