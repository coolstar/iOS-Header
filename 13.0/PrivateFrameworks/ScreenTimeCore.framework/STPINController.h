//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSManagedObjectContext, STCoreUser;

@interface STPINController : NSObject
{
    STCoreUser *_user;
    NSManagedObjectContext *_managedObjectContext;
}

+ (unsigned long long)pinLength;
@property(readonly, nonatomic) NSManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext=_managedObjectContext;
@property(readonly, nonatomic) STCoreUser *user; // @synthesize user=_user;
- (void).cxx_destruct;
- (_Bool)_authenticateWithPIN:(id)arg1 forUser:(id)arg2 error:(id *)arg3;
- (void)authenticateWithPIN:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)authenticateWithPIN:(id)arg1 error:(id *)arg2;
- (_Bool)_setNewPIN:(id)arg1 current:(id)arg2 forUser:(id)arg3 error:(id *)arg4;
- (void)_setNewPIN:(id)arg1 currentPIN:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)_setNewPIN:(id)arg1 currentPIN:(id)arg2 error:(id *)arg3;
- (_Bool)_isPINValid:(id)arg1;
- (void)removePIN:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)removePIN:(id)arg1 error:(id *)arg2;
- (void)updatePIN:(id)arg1 toPIN:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)updatePIN:(id)arg1 toPIN:(id)arg2 error:(id *)arg3;
- (void)setPIN:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)setPIN:(id)arg1 error:(id *)arg2;
- (id)initWithUser:(id)arg1;

@end
