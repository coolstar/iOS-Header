//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "TSSearchResultsModuleType-Protocol.h"

@protocol FRFeldsparContext;

@interface FRSearchResultsModule : NSObject <TSSearchResultsModuleType>
{
    id <FRFeldsparContext> _feldsparContext;
}

@property(readonly, nonatomic) id <FRFeldsparContext> feldsparContext; // @synthesize feldsparContext=_feldsparContext;
- (void).cxx_destruct;
- (id)createViewControllerForToolbar;
- (id)initWithFeldsparContext:(id)arg1;

@end
