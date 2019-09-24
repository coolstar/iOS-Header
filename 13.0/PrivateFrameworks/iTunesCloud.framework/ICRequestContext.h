//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iTunesCloud/NSCopying-Protocol.h>
#import <iTunesCloud/NSSecureCoding-Protocol.h>

@class ICClientInfo, ICDeviceInfo, ICNetworkConstraints, ICURLResponseAuthenticationProvider, NSString;

@interface ICRequestContext : NSObject <NSCopying, NSSecureCoding>
{
    unsigned int _allowsMutation:1;
    ICNetworkConstraints *_networkConstraints;
    ICClientInfo *_clientInfo;
    ICDeviceInfo *_deviceInfo;
    ICURLResponseAuthenticationProvider *_authenticationProvider;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) ICURLResponseAuthenticationProvider *authenticationProvider; // @synthesize authenticationProvider=_authenticationProvider;
@property(readonly, nonatomic) ICDeviceInfo *deviceInfo; // @synthesize deviceInfo=_deviceInfo;
@property(readonly, copy, nonatomic) ICClientInfo *clientInfo; // @synthesize clientInfo=_clientInfo;
@property(readonly, copy, nonatomic) ICNetworkConstraints *networkConstraints; // @synthesize networkConstraints=_networkConstraints;
- (void).cxx_destruct;
- (_Bool)_allowsMutation;
@property(readonly, copy, nonatomic) NSString *userAgent;
- (void)setNetworkConstraints:(id)arg1;
- (void)setDeviceInfo:(id)arg1;
- (void)setClientInfo:(id)arg1;
- (void)setAuthenticationProvider:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copyWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithClientInfo:(id)arg1 authenticationProvider:(id)arg2;
- (id)initWithClientInfo:(id)arg1;

@end
