//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class TabBarDropExpansionView;
@protocol UIDropSession;

@protocol TabBarDropExpansionViewDelegate <NSObject>

@optional
- (void)tabBarDropExpansionView:(TabBarDropExpansionView *)arg1 didEndTrackingDropSession:(id <UIDropSession>)arg2;
- (void)tabBarDropExpansionView:(TabBarDropExpansionView *)arg1 didBeginTrackingDropSession:(id <UIDropSession>)arg2;
@end
