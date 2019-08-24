//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TextInputCore/NSObject-Protocol.h>

@protocol TIKeyboardAssertionManagerDelegate;

@protocol TIKeyboardAssertionManaging <NSObject>
@property(nonatomic) id <TIKeyboardAssertionManagerDelegate> delegate;
@property(readonly, nonatomic) _Bool hasBackgroundActivityAssertions;
@property(readonly, nonatomic) _Bool hasAssertions;
- (void)releaseBackgroundActivityAssertion;
- (void)retainBackgroundActivityAssertion;
- (void)removeAssertionForObject:(id)arg1;
- (void)addAssertionForObject:(id)arg1;
@end
