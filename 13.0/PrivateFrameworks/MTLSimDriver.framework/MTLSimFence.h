//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Metal/_MTLObjectWithLabel.h>

#import <MTLSimDriver/MTLFence-Protocol.h>
#import <MTLSimDriver/MTLSerializerFence-Protocol.h>

@class MTLSimDevice, NSString;
@protocol MTLDevice;

__attribute__((visibility("hidden")))
@interface MTLSimFence : _MTLObjectWithLabel <MTLFence, MTLSerializerFence>
{
    MTLSimDevice *_device;
    unsigned int _fenceRef;
}

- (unsigned int)fenceRef;
@property(readonly) id <MTLDevice> device;
- (void)dealloc;
- (id)initWithDevice:(id)arg1 fenceRef:(unsigned int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy) NSString *label;
@property(readonly) Class superclass;

@end
