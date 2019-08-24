//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClassroomKit/CRKCloudStoringSubItem-Protocol.h>
#import <ClassroomKit/NSSecureCoding-Protocol.h>

@class NSData, NSDate, NSString;

@interface CRKPrivateIdentity : NSObject <CRKCloudStoringSubItem, NSSecureCoding>
{
    NSData *_identityPersistentId;
    NSData *_stagedIdentityPersistentId;
    NSString *_commonNamePrefix;
    NSDate *_identityExpirationDate;
    NSDate *_stagedIdentityExpirationDate;
}

+ (id)instanceWithParentObject:(id)arg1 keyValue:(id)arg2;
+ (id)instanceWithRecord:(id)arg1;
+ (id)skeletonInstance;
+ (_Bool)supportsSecureCoding;
+ (id)recordType;
+ (id)keychainGroup;
+ (id)commonNameWithPrefix:(id)arg1;
+ (id)createIdentityWithCommonName:(id)arg1;
+ (id)freshPrivateIdentityWithCommonNamePrefix:(id)arg1;
@property(retain, nonatomic) NSDate *stagedIdentityExpirationDate; // @synthesize stagedIdentityExpirationDate=_stagedIdentityExpirationDate;
@property(retain, nonatomic) NSDate *identityExpirationDate; // @synthesize identityExpirationDate=_identityExpirationDate;
@property(copy, nonatomic) NSString *commonNamePrefix; // @synthesize commonNamePrefix=_commonNamePrefix;
@property(retain, nonatomic) NSData *stagedIdentityPersistentId; // @synthesize stagedIdentityPersistentId=_stagedIdentityPersistentId;
@property(retain, nonatomic) NSData *identityPersistentId; // @synthesize identityPersistentId=_identityPersistentId;
- (void).cxx_destruct;
- (_Bool)isChangedFrom:(id)arg1;
- (void)applyFieldsToRecord:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)recordName;
- (id)dictionaryValue;
- (id)initWithDictionary:(id)arg1;
- (_Bool)refreshIdentities;
- (id)initWithIdentityPersistentId:(id)arg1 stagedIdentityPersistentId:(id)arg2 commonNamePrefix:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
