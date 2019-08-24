//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, NSUUID, StorageDebugCollection;
@protocol MSPImmutableObject, MSPReplicaRecord;

__attribute__((visibility("hidden")))
@interface StorageDebugCollectionElement : NSObject
{
    id <MSPReplicaRecord> _record;
    id <MSPImmutableObject> _contentObject;
    NSUUID *_identifier;
    StorageDebugCollection *_owner;
    NSArray *_displayableProperties;
}

@property(copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSArray *displayableProperties; // @synthesize displayableProperties=_displayableProperties;
- (void).cxx_destruct;
- (void)select;
@property(readonly, nonatomic) NSString *subtitle;
@property(readonly, nonatomic) NSString *title;
- (id)initWithReplicaRecord:(id)arg1 identifier:(id)arg2 associatedContentObject:(id)arg3 contentsDescriptionHandler:(CDUnknownBlockType)arg4 owner:(id)arg5;

@end
