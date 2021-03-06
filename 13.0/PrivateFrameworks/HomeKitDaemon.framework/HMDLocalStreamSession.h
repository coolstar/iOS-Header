//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDCameraStreamSession.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMDCameraNetworkConfig, HMDCameraParameterSelection, NSString;
@protocol HMDCameraRemoteStreamSenderProtocol;

@interface HMDLocalStreamSession : HMDCameraStreamSession <HMFLogging>
{
    id <HMDCameraRemoteStreamSenderProtocol> _streamSender;
    HMDCameraParameterSelection *_parameterSelection;
    unsigned long long _streamState;
    HMDCameraNetworkConfig *_localNetworkConfig;
}

+ (id)logCategory;
@property(readonly, nonatomic) HMDCameraNetworkConfig *localNetworkConfig; // @synthesize localNetworkConfig=_localNetworkConfig;
@property(nonatomic) unsigned long long streamState; // @synthesize streamState=_streamState;
@property(retain, nonatomic) HMDCameraParameterSelection *parameterSelection; // @synthesize parameterSelection=_parameterSelection;
@property(readonly, nonatomic) id <HMDCameraRemoteStreamSenderProtocol> streamSender; // @synthesize streamSender=_streamSender;
- (void).cxx_destruct;
- (id)logIdentifier;
- (id)stateAsString;
- (_Bool)containsState:(long long)arg1;
- (void)updateState:(long long)arg1;
- (void)dealloc;
- (id)initWithSessionID:(id)arg1 reachabilityPath:(unsigned long long)arg2 streamSender:(id)arg3 remoteCapabilities:(id)arg4 localNetworkConfig:(id)arg5 streamPreference:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

