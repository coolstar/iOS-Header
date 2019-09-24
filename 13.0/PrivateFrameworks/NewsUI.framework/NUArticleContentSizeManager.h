//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/NUArticleContentSizeManager-Protocol.h>

@class FCTagSettings, NSString;

@interface NUArticleContentSizeManager : NSObject <NUArticleContentSizeManager>
{
    FCTagSettings *_tagSettings;
}

@property(readonly, nonatomic) FCTagSettings *tagSettings; // @synthesize tagSettings=_tagSettings;
- (void).cxx_destruct;
- (long long)textSizeForContentSizeCategory:(id)arg1;
- (id)contentSizeCategoryForSize:(long long)arg1;
- (void)updateContentScale:(long long)arg1 forArticle:(id)arg2;
- (long long)contentScaleForArticle:(id)arg1;
- (void)updateContentSizeCategory:(id)arg1 forArticle:(id)arg2;
- (id)contentSizeCategoryForArticle:(id)arg1;
- (id)initWithTagSettings:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
