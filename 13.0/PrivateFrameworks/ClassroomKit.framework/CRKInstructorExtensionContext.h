//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSExtensionContext.h>

#import <ClassroomKit/CRKInstructorExtensionVendor-Protocol.h>
#import <ClassroomKit/NSXPCListenerDelegate-Protocol.h>

@class NSString, NSXPCListener;

@interface CRKInstructorExtensionContext : NSExtensionContext <NSXPCListenerDelegate, CRKInstructorExtensionVendor>
{
    NSXPCListener *mListener;
}

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
- (void).cxx_destruct;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)listenerEndpointWithCompletion:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

