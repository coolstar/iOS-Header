//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TextInput/NSCopying-Protocol.h>
#import <TextInput/NSSecureCoding-Protocol.h>
#import <TextInput/TIKeyboardCandidateCoding-Protocol.h>

@class NSString, TIProactiveTrigger;

@interface TIKeyboardCandidate : NSObject <NSCopying, NSSecureCoding, TIKeyboardCandidateCoding>
{
    _Bool _responseCandidate;
    _Bool _isSendCurrentLocation;
    unsigned int _slotID;
    NSString *_alternativeText;
    NSString *_annotationText;
    unsigned long long _customInfoType;
    unsigned long long _indexForMetrics;
}

+ (int)type;
+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool isSendCurrentLocation; // @synthesize isSendCurrentLocation=_isSendCurrentLocation;
@property(readonly, nonatomic, getter=isResponseCandidate) _Bool responseCandidate; // @synthesize responseCandidate=_responseCandidate;
@property(nonatomic) unsigned long long indexForMetrics; // @synthesize indexForMetrics=_indexForMetrics;
@property(nonatomic) unsigned long long customInfoType; // @synthesize customInfoType=_customInfoType;
@property(nonatomic) unsigned int slotID; // @synthesize slotID=_slotID;
@property(copy, nonatomic) NSString *annotationText; // @synthesize annotationText=_annotationText;
@property(copy, nonatomic) NSString *alternativeText; // @synthesize alternativeText=_alternativeText;
- (void).cxx_destruct;
- (void)encodeWithCandidateResultSetCoder:(id)arg1;
- (id)initWithCandidateResultSetCoder:(id)arg1;
@property(readonly, nonatomic, getter=isSecureContentCandidate) _Bool secureContentCandidate;
@property(readonly, nonatomic, getter=isRegionalCandidate) _Bool regionalCandidate;
@property(readonly, nonatomic, getter=isOTAWordListCandidate) _Bool OTAWordListCandidate;
@property(readonly, nonatomic, getter=isPunctuationCompletionCandidate) _Bool punctuationCompletionCandidate;
@property(readonly, nonatomic, getter=isPunctuationKeyCandidate) _Bool punctuationKeyCandidate;
- (_Bool)isPunctuation;
@property(readonly, nonatomic, getter=isFacemarkCandidate) _Bool facemarkCandidate;
@property(readonly, nonatomic, getter=isFullwidthCandidate) _Bool fullwidthCandidate;
@property(readonly, nonatomic) unsigned int usageTrackingMask;
@property(readonly, nonatomic, getter=isInlineCompletionCandidate) _Bool inlineCompletionCandidate;
@property(readonly, nonatomic, getter=isCompletionCandidate) _Bool completionCandidate;
@property(readonly, nonatomic, getter=isEmojiCandidate) _Bool emojiCandidate;
@property(readonly, nonatomic, getter=isExtensionCandidate) _Bool extensionCandidate;
@property(readonly, nonatomic) _Bool isAutocorrection;
@property(readonly, nonatomic) _Bool isForShortcutConversion;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) long long cursorMovement;
@property(readonly, nonatomic) unsigned long long deleteCount;
@property(readonly, nonatomic) unsigned long long wordOriginFeedbackID;
@property(copy, nonatomic) NSString *label;
@property(readonly, nonatomic) NSString *input;
@property(readonly, nonatomic) _Bool isAddress;
@property(readonly, nonatomic) NSString *responseKitCategory;
@property(readonly, nonatomic) TIProactiveTrigger *proactiveTrigger;
@property(readonly, nonatomic) NSString *candidate;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

