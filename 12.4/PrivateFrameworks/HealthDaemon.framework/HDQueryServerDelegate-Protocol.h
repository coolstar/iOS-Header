//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDTaskServerDelegate-Protocol.h>

@class HDQueryServer, HDReadAuthorizationStatus, HKObjectType, NSArray;

@protocol HDQueryServerDelegate <HDTaskServerDelegate>
- (unsigned int)clientSDKVersionForQueryServer:(HDQueryServer *)arg1;
- (void)queryServerDidFinish:(HDQueryServer *)arg1;
- (void)queryServer:(HDQueryServer *)arg1 shouldStartWithCompletion:(void (^)(_Bool, NSError *))arg2;
- (void)queryServer:(HDQueryServer *)arg1 requestsAuthorizationForSamples:(NSArray *)arg2 completion:(void (^)(NSArray *, NSError *))arg3;
- (HDReadAuthorizationStatus *)readAuthorizationStatusForQueryServer:(HDQueryServer *)arg1 type:(HKObjectType *)arg2 error:(id *)arg3;
@end
