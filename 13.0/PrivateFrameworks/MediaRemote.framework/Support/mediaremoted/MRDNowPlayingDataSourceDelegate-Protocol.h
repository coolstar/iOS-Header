//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MRDNowPlayingDataSource;

@protocol MRDNowPlayingDataSourceDelegate <NSObject>

@optional
- (void)nowPlayingDataSourceAnyApplicationPlaybackStateDidChange:(MRDNowPlayingDataSource *)arg1;
- (void)nowPlayingDataSourceNowPlayingApplicationPlaybackStateDidChange:(MRDNowPlayingDataSource *)arg1;
- (void)nowPlayingDataSourceNowPlayingApplicationDidChange:(MRDNowPlayingDataSource *)arg1;
@end
