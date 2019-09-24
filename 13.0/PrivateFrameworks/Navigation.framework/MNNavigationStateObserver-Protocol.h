//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Navigation/NSObject-Protocol.h>

@class MNNavigationStateManager, NSArray;

@protocol MNNavigationStateObserver <NSObject>

@optional
- (void)stateManagerPredictingDidArrive:(MNNavigationStateManager *)arg1;
- (void)stateManager:(MNNavigationStateManager *)arg1 didUpdatePossibleDestinations:(NSArray *)arg2;
- (void)stateManager:(MNNavigationStateManager *)arg1 didChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (void)stateManager:(MNNavigationStateManager *)arg1 willChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
@end
