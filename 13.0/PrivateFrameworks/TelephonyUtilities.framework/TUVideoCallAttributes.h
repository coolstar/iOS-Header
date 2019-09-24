//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TelephonyUtilities/NSSecureCoding-Protocol.h>

@interface TUVideoCallAttributes : NSObject <NSSecureCoding>
{
    long long _remoteCameraOrientation;
    long long _localVideoContextSlotIdentifier;
    long long _remoteVideoContextSlotIdentifier;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) long long remoteVideoContextSlotIdentifier; // @synthesize remoteVideoContextSlotIdentifier=_remoteVideoContextSlotIdentifier;
@property(nonatomic) long long localVideoContextSlotIdentifier; // @synthesize localVideoContextSlotIdentifier=_localVideoContextSlotIdentifier;
@property(nonatomic) long long remoteCameraOrientation; // @synthesize remoteCameraOrientation=_remoteCameraOrientation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqualToVideoCallAttributes:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)description;

@end
