//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BulletinDistributorCompanion/BLTPingSubscribing-Protocol.h>

@class NSString, NSXPCConnection;

@interface BLTSubscriberRemoteClient : NSObject <BLTPingSubscribing>
{
    NSXPCConnection *_connection;
}

@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (void)pingWithBulletin:(id)arg1 ack:(CDUnknownBlockType)arg2;
- (void)pingWithBulletin:(id)arg1;
- (void)pingWithRecordID:(id)arg1 forSectionID:(id)arg2 ack:(CDUnknownBlockType)arg3;
- (void)pingWithRecordID:(id)arg1 forSectionID:(id)arg2;
- (id)subscriptionInfos;
- (id)sectionIDsForBulletins;
- (id)sectionIDs;
- (void)dealloc;
- (void)pingSubscriberDidLoad;
- (id)initWithConnection:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

