//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVCaptureInput, NSString;

@interface AVCaptureInputPortInternal : NSObject
{
    AVCaptureInput *input;
    NSString *mediaType;
    struct opaqueCMFormatDescription *formatDescription;
    struct OpaqueCMClock *clock;
    _Bool enabled;
    int changeSeed;
    NSString *sourceID;
}

- (void)dealloc;
- (id)init;

@end
