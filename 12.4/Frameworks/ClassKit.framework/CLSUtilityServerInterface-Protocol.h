//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ClassKit/NSObject-Protocol.h>

@class NSArray;

@protocol CLSUtilityServerInterface <NSObject>
- (oneway void)remote_statusWithCompletion:(void (^)(id, NSError *))arg1;
- (oneway void)remote_getDevModeWithCompletion:(void (^)(int, NSError *))arg1;
- (oneway void)remote_setDevMode:(int)arg1 completion:(void (^)(NSError *))arg2;
- (oneway void)remote_recreateDevelopmentDatabaseWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (oneway void)remote_authorizationStatusForContextAtPath:(NSArray *)arg1 completion:(void (^)(id, NSError *))arg2;
- (oneway void)remote_removeAuthorizationStatus:(unsigned long long)arg1 forContextAtPath:(NSArray *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (oneway void)remote_addAuthorizationStatus:(unsigned long long)arg1 forContextAtPath:(NSArray *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (oneway void)remote_syncFetchWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (oneway void)remote_syncPushWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (oneway void)remote_syncStatsWithCompletion:(void (^)(id, NSError *))arg1;
- (oneway void)remote_recreateDatabaseWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (oneway void)remote_databasePathWithCompletion:(void (^)(id, NSError *))arg1;
@end
