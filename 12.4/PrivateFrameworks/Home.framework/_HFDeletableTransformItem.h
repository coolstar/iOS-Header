//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFTransformItem.h>

#import <Home/HFHomeObserver-Protocol.h>
#import <Home/HFItemDeletionProtocol-Protocol.h>

@class NSString;

@interface _HFDeletableTransformItem : HFTransformItem <HFItemDeletionProtocol, HFHomeObserver>
{
}

- (id)hf_deleteItem;
- (_Bool)hf_canDeleteItem;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
