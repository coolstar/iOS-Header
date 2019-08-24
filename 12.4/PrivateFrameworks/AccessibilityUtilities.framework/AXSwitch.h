//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AccessibilityUtilities/NSSecureCoding-Protocol.h>

@class AXMIDIEvent, NSString, NSUUID;

@interface AXSwitch : NSObject <NSSecureCoding>
{
    unsigned short _keyCode;
    long long _action;
    long long _longPressAction;
    NSString *_name;
    struct NSString *_source;
    struct NSString *_type;
    NSString *_productName;
    NSString *_manufacturerName;
    NSUUID *_uuid;
    long long _buttonNumber;
    long long _headSwitch;
    AXMIDIEvent *_midiEvent;
    NSString *_remoteSwitchIdentifier;
    NSString *_remoteDeviceName;
    NSString *_remoteDeviceIdentifier;
}

+ (id)switchWithAction:(long long)arg1 name:(id)arg2 source:(struct NSString *)arg3 type:(struct NSString *)arg4;
+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *remoteDeviceIdentifier; // @synthesize remoteDeviceIdentifier=_remoteDeviceIdentifier;
@property(copy, nonatomic) NSString *remoteDeviceName; // @synthesize remoteDeviceName=_remoteDeviceName;
@property(copy, nonatomic) NSString *remoteSwitchIdentifier; // @synthesize remoteSwitchIdentifier=_remoteSwitchIdentifier;
@property(retain, nonatomic) AXMIDIEvent *midiEvent; // @synthesize midiEvent=_midiEvent;
@property(nonatomic) long long headSwitch; // @synthesize headSwitch=_headSwitch;
@property(nonatomic) long long buttonNumber; // @synthesize buttonNumber=_buttonNumber;
@property(nonatomic) unsigned short keyCode; // @synthesize keyCode=_keyCode;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(copy, nonatomic) NSString *manufacturerName; // @synthesize manufacturerName=_manufacturerName;
@property(copy, nonatomic) NSString *productName; // @synthesize productName=_productName;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *source; // @synthesize source=_source;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long longPressAction; // @synthesize longPressAction=_longPressAction;
@property(nonatomic) long long action; // @synthesize action=_action;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
@property(readonly, nonatomic) NSString *localizedSourceDescription;
@property(readonly, nonatomic) _Bool supportsLongPress;
@property(readonly, nonatomic) _Bool hasLongPressAction;
- (id)initWithAction:(long long)arg1 name:(id)arg2 source:(struct NSString *)arg3 type:(struct NSString *)arg4;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
