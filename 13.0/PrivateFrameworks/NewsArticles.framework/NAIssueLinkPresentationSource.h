//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsArticles/UIActivityItemLinkPresentationSource-Protocol.h>

@class LPImage, NSString, NSURL;

@interface NAIssueLinkPresentationSource : NSObject <UIActivityItemLinkPresentationSource>
{
    NSString *_title;
    NSString *_subtitle;
    LPImage *_linkPresentationImage;
    NSURL *_url;
}

@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, nonatomic) LPImage *linkPresentationImage; // @synthesize linkPresentationImage=_linkPresentationImage;
@property(readonly, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)urlFromIssue:(id)arg1;
- (id)linkPresentationImageFromIssue:(id)arg1;
- (id)subtitleFromIssue:(id)arg1;
- (id)titleFromIssue:(id)arg1;
- (id)activityViewControllerLinkPresentationMetadata:(id)arg1;
- (id)initWithIssue:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
