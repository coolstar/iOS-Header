//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NFAssembly-Protocol.h"

@class FRFeedViewContext, NSString;
@protocol FRFeldsparContext;

@interface FRForYouFeedAssembly : NSObject <NFAssembly>
{
    id <FRFeldsparContext> _feldsparContext;
    FRFeedViewContext *_feedContext;
}

@property(retain, nonatomic) FRFeedViewContext *feedContext; // @synthesize feedContext=_feedContext;
@property(retain, nonatomic) id <FRFeldsparContext> feldsparContext; // @synthesize feldsparContext=_feldsparContext;
- (void).cxx_destruct;
- (void)loadInRegistry:(id)arg1;
- (id)initWithFeldsparContext:(id)arg1 feedContext:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
