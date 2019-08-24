//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NUVideoReadingHistory-Protocol.h"

@class FCReadingHistory;

@interface FRFCReadingHistoryVideoHistory : NSObject <NUVideoReadingHistory>
{
    FCReadingHistory *_readingHistory;
}

@property(readonly, nonatomic) FCReadingHistory *readingHistory; // @synthesize readingHistory=_readingHistory;
- (void).cxx_destruct;
- (void)markArticleAsReadWithVideoItem:(id)arg1;
- (void)markArticleAsSeenWithVideoItem:(id)arg1;
- (id)initWithReadingHistory:(id)arg1;
- (id)init;

@end
