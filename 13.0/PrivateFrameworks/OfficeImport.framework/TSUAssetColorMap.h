//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface TSUAssetColorMap : NSObject
{
    NSMutableDictionary *mAssetPathToColorMap;
}

+ (id)assetColorMap;
- (void).cxx_destruct;
- (void)addChartEntries;
- (void)addSharedEntries;
- (void)addEntriesFromPlistBasename:(id)arg1 transformKeyBlock:(CDUnknownBlockType)arg2;
- (id)TSUColorFromColorArray:(id)arg1;
@property(readonly, copy, nonatomic) NSDictionary *assetPathToColorMap;
- (id)init;

@end
