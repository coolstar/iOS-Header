//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DoNotDisturbServer/NSObject-Protocol.h>

@class DNDSModeAssertionUpdateResult;

@protocol DNDSModeAssertionUpdating <NSObject>
- (DNDSModeAssertionUpdateResult *)updateModeAssertionsWithContextHandler:(_Bool (^)(id <DNDSModeAssertionUpdateContext>))arg1 error:(id *)arg2;
@end
