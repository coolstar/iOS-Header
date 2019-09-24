//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Photos/PHChangeRequest.h>

#import <Photos/PHInsertChangeRequest-Protocol.h>
#import <Photos/PHUpdateChangeRequest-Protocol.h>

@class NSManagedObjectID, NSString, PHObjectPlaceholder;

@interface PHKeywordChangeRequest : PHChangeRequest <PHInsertChangeRequest, PHUpdateChangeRequest>
{
}

+ (void)deleteKeywords:(id)arg1;
+ (id)changeRequestForKeyword:(id)arg1;
+ (id)creationRequestForKeyword;
- (_Bool)_validateMutationOfTitleToKeyword:(id)arg1 error:(id *)arg2;
- (_Bool)allowMutationToManagedObject:(id)arg1 propertyKey:(id)arg2 error:(id *)arg3;
@property(readonly, nonatomic) NSString *managedEntityName;
- (_Bool)prepareForPhotoLibraryCheck:(id)arg1 error:(id *)arg2;
- (_Bool)prepareForServicePreflightCheck:(id *)arg1;
- (void)encodeToXPCDict:(id)arg1;
- (id)initWithXPCDict:(id)arg1 request:(id)arg2 clientAuthorization:(id)arg3;
- (id)initWithUUID:(id)arg1 objectID:(id)arg2;
@property(copy, nonatomic) NSString *shortcut;
@property(copy, nonatomic) NSString *title;
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) PHObjectPlaceholder *placeholderForCreatedKeyword;
- (id)initForNewObject;

// Remaining properties
@property(readonly, nonatomic, getter=isClientEntitled) _Bool clientEntitled;
@property(readonly, nonatomic) NSString *clientName;
@property(readonly, nonatomic) CDUnknownBlockType concurrentWorkBlock;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) _Bool isNewRequest;
@property(readonly, getter=isMutated) _Bool mutated;
@property(readonly, nonatomic) NSManagedObjectID *objectID;
@property(readonly) Class superclass;

@end
