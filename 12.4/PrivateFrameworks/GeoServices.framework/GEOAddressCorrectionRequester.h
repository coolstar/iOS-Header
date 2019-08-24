//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSMapTable;

@interface GEOAddressCorrectionRequester : NSObject
{
    NSMapTable *_pendingRequests;
    NSLock *_pendingRequestsLock;
}

+ (id)sharedRequester;
- (void).cxx_destruct;
- (void)cancelRequest:(id)arg1;
- (void)startAddressCorrectionUpdateRequest:(id)arg1 finished:(CDUnknownBlockType)arg2 error:(CDUnknownBlockType)arg3;
- (void)startAddressCorrectionInitRequest:(id)arg1 finished:(CDUnknownBlockType)arg2 error:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)init;

@end
