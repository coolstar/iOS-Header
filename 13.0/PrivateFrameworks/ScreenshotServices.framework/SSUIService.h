//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SSUIServiceClient;

@interface SSUIService : NSObject
{
    SSUIServiceClient *_client;
}

- (void).cxx_destruct;
- (void)_runPPTNamed:(id)arg1;
- (void)showScreenshotUIForImage:(id)arg1 options:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)showScreenshotUIForImage:(id)arg1 options:(id)arg2;
- (id)init;

@end
