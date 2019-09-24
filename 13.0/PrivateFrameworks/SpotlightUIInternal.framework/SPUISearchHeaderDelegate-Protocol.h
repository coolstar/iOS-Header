//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpotlightUIInternal/NSObject-Protocol.h>

@class SPSearchQueryContext, SPUISearchHeader;

@protocol SPUISearchHeaderDelegate <NSObject>
- (void)returnKeyPressed;
- (void)cancelButtonPressed;
- (void)dictationButtonPressed;
- (void)didBeginEditing;
- (void)queryContextDidChange:(SPSearchQueryContext *)arg1 fromSearchHeader:(SPUISearchHeader *)arg2 allowZKW:(_Bool)arg3;
@end
