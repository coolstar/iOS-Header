//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MSPauseManager;

@protocol MSPauseManagerDelegate <NSObject>

@optional
- (void)pauseManagerDidUnpause:(MSPauseManager *)arg1;
- (void)pauseManagerDidPause:(MSPauseManager *)arg1;
@end
