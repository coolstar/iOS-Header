//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKit/NSObject-Protocol.h>

@class NSArray, _HMCameraClipCollectionDataSource;

@protocol _HMCameraClipCollectionDataSourceObserver <NSObject>
- (void)dataSource:(_HMCameraClipCollectionDataSource *)arg1 addedClips:(NSArray *)arg2 removedClips:(NSArray *)arg3 updatedClips:(NSArray *)arg4;
@end
