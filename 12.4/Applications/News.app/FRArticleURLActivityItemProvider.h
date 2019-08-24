//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIActivityItemSource-Protocol.h"

@class NSString, NSURL;
@protocol FCHeadlineProviding;

@interface FRArticleURLActivityItemProvider : NSObject <UIActivityItemSource>
{
    id <FCHeadlineProviding> _headline;
    NSURL *_articleURL;
}

@property(retain, nonatomic) NSURL *articleURL; // @synthesize articleURL=_articleURL;
@property(readonly, nonatomic) id <FCHeadlineProviding> headline; // @synthesize headline=_headline;
- (void).cxx_destruct;
- (id)bodyStringForMailMessage;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (id)initWithHeadline:(id)arg1 targetIsVideo:(_Bool)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
