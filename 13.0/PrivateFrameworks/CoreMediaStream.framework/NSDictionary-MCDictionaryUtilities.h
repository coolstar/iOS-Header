//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSDictionary.h>

@interface NSDictionary (MCDictionaryUtilities)
- (id)MSDeepCopy;
- (id)MSDeepCopyWithZone:(struct _NSZone *)arg1;
- (id)MSMutableDeepCopy;
- (id)MSMutableDeepCopyWithZone:(struct _NSZone *)arg1;
- (_Bool)MSASIsErrorRecovery;
- (_Bool)MSASIsNotInteresting;
- (id)MSASEventIsDueToAssetCollectionDeletionAssetCollectionGUID;
- (id)MSASEventIsDueToAlbumDeletionAlbumGUID;
- (_Bool)MSASIsLocalChange;
- (id)MSASAlbumResetSyncAlbumGUID;
- (_Bool)MSASIsGlobalResetSync;
@end
