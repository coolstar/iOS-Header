//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSData, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface KTTreeHead : NSManagedObject
{
}

+ (id)fetchRequest;

// Remaining properties
@property(copy, nonatomic) NSString *application; // @dynamic application;
@property(retain, nonatomic) NSSet *failures; // @dynamic failures;
@property(nonatomic) long long logBeginTime; // @dynamic logBeginTime;
@property(nonatomic) long long logType; // @dynamic logType;
@property(nonatomic) double receiptTime; // @dynamic receiptTime;
@property(nonatomic) long long revision; // @dynamic revision;
@property(nonatomic) _Bool signatureVerified; // @dynamic signatureVerified;
@property(retain, nonatomic) NSData *sth; // @dynamic sth;
@property(nonatomic) long long verificationResult; // @dynamic verificationResult;

@end
