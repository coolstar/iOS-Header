//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIActivityItemsConfigurationReading-Protocol.h>

@class NSArray, NSItemProvider, NSString;

@protocol _UICopyConfigurationReading <UIActivityItemsConfigurationReading>
@property(readonly, copy, nonatomic) NSArray *activityItemsForSharing;
@property(readonly, copy, nonatomic) NSArray *itemProvidersForSharing;
@property(readonly, nonatomic) _Bool allowsSharing;
- (NSItemProvider *)previewForSharedItemProviderAtIndex:(long long)arg1 intent:(NSString *)arg2;
- (id)sharingMetadataForKey:(NSString *)arg1;

@optional
@property(readonly, copy, nonatomic) NSArray *applicationActivitiesForSharing;
@end
