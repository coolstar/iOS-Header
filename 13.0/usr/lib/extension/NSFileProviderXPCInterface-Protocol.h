//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSFileCoordinationDebugInfoXPCInteface-Protocol.h>

@class NSSet, NSString, NSURL;

@protocol NSFileProviderXPCInterface <NSFileCoordinationDebugInfoXPCInteface>
- (void)movingItemAtURL:(NSURL *)arg1 requiresProvidingWithDestinationURL:(NSURL *)arg2 completionHandler:(void (^)(_Bool))arg3;
- (oneway void)observeEndOfWriteAtURL:(NSURL *)arg1 forClaimWithID:(id)arg2 fromProcessWithIdentifier:(int)arg3;
- (oneway void)observePresentationChangeOfKind:(NSString *)arg1 forPresenterWithID:(id)arg2 fromProcessWithIdentifier:(int)arg3 observedUbiquityAttributes:(NSSet *)arg4 url:(NSURL *)arg5 newURL:(NSURL *)arg6;
- (void)providePhysicalItemForURL:(NSURL *)arg1 completionHandler:(void (^)(NSURL *))arg2;
- (oneway void)cancelProvidingItemAtURL:(NSURL *)arg1 forClaimWithID:(id)arg2;
- (void)provideItemAtURL:(NSURL *)arg1 forClaimWithID:(id)arg2 madeByClientWithProcessIdentifier:(int)arg3 options:(unsigned long long)arg4 kernelOperation:(unsigned int)arg5 completionHandler:(void (^)(NSString *, NSError *))arg6;
- (void)checkInProviderWithReply:(void (^)(_Bool))arg1;
@end
