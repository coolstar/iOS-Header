//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "_TtC5Files21DOCFileProviderSource.h"

@class MISSING_TYPE;

@interface _TtC5Files17DOCWebDAVProvider : _TtC5Files21DOCFileProviderSource
{
    MISSING_TYPE *rootItemCollection;
    MISSING_TYPE *rootItemCollectionObserverCount;
    MISSING_TYPE *isEjectable;
}

- (void).cxx_destruct;
- (void)collection:(id)arg1 didUpdateItemsAtIndexPaths:(id)arg2 changes:(id)arg3;
- (void)collection:(id)arg1 didDeleteItemsAtIndexPaths:(id)arg2;
- (void)collection:(id)arg1 didMoveItemsFromIndexPaths:(id)arg2 toIndexPaths:(id)arg3;
- (void)collection:(id)arg1 didInsertItemsAtIndexPaths:(id)arg2;
- (void)collection:(id)arg1 didEncounterError:(id)arg2;
- (void)collection:(id)arg1 didPerformBatchUpdateWithReplayBlock:(CDUnknownBlockType)arg2;
- (void)dataForCollectionShouldBeReloaded:(id)arg1;
@property(nonatomic) _Bool isEjectable; // @synthesize isEjectable;
- (void)dealloc;

@end
