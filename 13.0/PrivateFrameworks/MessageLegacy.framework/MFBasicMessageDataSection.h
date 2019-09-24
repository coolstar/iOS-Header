//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MessageLegacy/MFMessageDataSection-Protocol.h>

@class MFDataHolder, NSString;

@interface MFBasicMessageDataSection : NSObject <MFMessageDataSection>
{
    MFDataHolder *_dataHolder;
    _Bool _complete;
    _Bool _partial;
    NSString *_partName;
}

@property(retain, nonatomic) NSString *partName; // @synthesize partName=_partName;
@property(nonatomic, getter=isComplete) _Bool complete; // @synthesize complete=_complete;
@property(nonatomic, getter=isPartial) _Bool partial; // @synthesize partial=_partial;
@property(retain, nonatomic) MFDataHolder *dataHolder; // @synthesize dataHolder=_dataHolder;
- (void)setData:(id)arg1;
- (void)dealloc;

@end
