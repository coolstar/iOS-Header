//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MessageUI/MFComposeRecipient.h>

@class NSArray;

@interface MFComposeRecipientGroup : MFComposeRecipient
{
    NSArray *_children;
}

- (void).cxx_destruct;
- (id)childrenWithCompleteMatches;
- (id)completelyMatchedAttributedStrings;
- (_Bool)wasCompleteMatch;
- (_Bool)isEqual:(id)arg1;
- (id)commentedAddress;
- (id)address;
- (int)recordID;
- (void *)record;
- (int)property;
- (_Bool)isRemovableFromSearchResults;
- (_Bool)isGroup;
- (id)sortedChildren;
- (void)_populateSortedChildren;
- (id)children;
- (id)unlocalizedLabel;
- (id)placeholderName;
- (id)compositeName;
- (id)label;
- (id)displayString;
- (id)initWithChildren:(id)arg1 displayString:(id)arg2;

@end
