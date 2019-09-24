//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Stocks/SCKDatabaseObserver-Protocol.h>

@class NSHashTable, SCKDatabase, SCKStartupQueue;
@protocol OS_dispatch_queue, SCWatchlistDefaultsProviding, SCWatchlistMetadataProviding;

@interface SCWatchlist : NSObject <SCKDatabaseObserver>
{
    SCKDatabase *_database;
    id <SCWatchlistMetadataProviding> _metadataProvider;
    id <SCWatchlistDefaultsProviding> _defaultsProvider;
    NSHashTable *_observers;
    SCKStartupQueue *_startupQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

+ (id)supportedCommands;
+ (id)zoneMergeHandler;
+ (id)zoneSchema;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(retain, nonatomic) SCKStartupQueue *startupQueue; // @synthesize startupQueue=_startupQueue;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) id <SCWatchlistDefaultsProviding> defaultsProvider; // @synthesize defaultsProvider=_defaultsProvider;
@property(retain, nonatomic) id <SCWatchlistMetadataProviding> metadataProvider; // @synthesize metadataProvider=_metadataProvider;
@property(retain, nonatomic) SCKDatabase *database; // @synthesize database=_database;
- (void).cxx_destruct;
- (void)_enqueueStartupSequence;
- (id)_sortedStocks:(id)arg1 withSymbolOrder:(id)arg2;
- (void)database:(id)arg1 didChangeZone:(id)arg2 from:(id)arg3 to:(id)arg4;
- (void)reorderStock:(id)arg1 toIndex:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeStock:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)replaceSymbol:(id)arg1 withSymbol:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)reorderSymbol:(id)arg1 afterSymbol:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeSymbol:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addStock:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchStocksWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithDatabase:(id)arg1 metadataProvider:(id)arg2 defaults:(id)arg3;
- (id)initWithDatabase:(id)arg1 metadataProvider:(id)arg2 defaultsProvider:(id)arg3;

@end
