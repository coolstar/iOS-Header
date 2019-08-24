//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlaybackCore/MPAVItemPlaylistIdentifier-Protocol.h>

@class MPQueueFeeder, NSString;
@protocol MPAVItemQueueIdentifier;

@interface _MPCAVItemSourceContext : NSObject <MPAVItemPlaylistIdentifier>
{
    id <MPAVItemQueueIdentifier> _itemIdentifier;
    MPQueueFeeder *_queueFeeder;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) MPQueueFeeder *queueFeeder; // @synthesize queueFeeder=_queueFeeder;
@property(retain, nonatomic) id <MPAVItemQueueIdentifier> itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
- (void).cxx_destruct;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
