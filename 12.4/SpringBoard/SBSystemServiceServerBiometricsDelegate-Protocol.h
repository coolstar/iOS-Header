//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SBSystemServiceServerDelegate-Protocol.h"

@class SBSystemServiceServer;
@protocol FBSServiceFacilityClientHandle;

@protocol SBSystemServiceServerBiometricsDelegate <SBSystemServiceServerDelegate>
- (void)systemServiceServer:(SBSystemServiceServer *)arg1 client:(id <FBSServiceFacilityClientHandle>)arg2 fetchUnlockCredentialSet:(void (^)(NSData *))arg3;
@end

