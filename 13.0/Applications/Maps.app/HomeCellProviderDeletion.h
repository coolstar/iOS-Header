//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSIndexPath;

__attribute__((visibility("hidden")))
@interface HomeCellProviderDeletion : NSObject
{
    _Bool _tentativelyDeleted;
    _Bool _completed;
    _Bool _success;
    id _object;
    NSIndexPath *_indexPath;
    CDUnknownBlockType _tableViewCompletionHandler;
    NSError *_error;
}

@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) _Bool success; // @synthesize success=_success;
@property(readonly, nonatomic) _Bool completed; // @synthesize completed=_completed;
@property(readonly, nonatomic) _Bool tentativelyDeleted; // @synthesize tentativelyDeleted=_tentativelyDeleted;
@property(readonly, nonatomic) CDUnknownBlockType tableViewCompletionHandler; // @synthesize tableViewCompletionHandler=_tableViewCompletionHandler;
@property(readonly, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(readonly, nonatomic) id object; // @synthesize object=_object;
- (void).cxx_destruct;
- (void)markAsCompletedWithSuccess:(_Bool)arg1 error:(id)arg2;
- (void)markAsTentativelyDeleted;
- (id)initWithObject:(id)arg1 indexPath:(id)arg2 tableViewCompletionHandler:(CDUnknownBlockType)arg3;

@end

