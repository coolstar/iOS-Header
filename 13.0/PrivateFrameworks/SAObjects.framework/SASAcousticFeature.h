//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSArray, NSNumber, NSString;

@interface SASAcousticFeature : AceObject <SAAceSerializable>
{
}

+ (id)acousticFeatureWithDictionary:(id)arg1 context:(id)arg2;
+ (id)acousticFeature;
@property(copy, nonatomic) NSNumber *frameDuration;
@property(copy, nonatomic) NSArray *acousticFeaturePerFrame;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

