//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsFeedLayout/NFLSubBatchLayout.h>

@class NFLPairSubBatchLayout;

@interface NFLThreePairsSubBatchLayout : NFLSubBatchLayout
{
    NFLPairSubBatchLayout *_leftPairComponent;
    NFLPairSubBatchLayout *_centerPairComponent;
    NFLPairSubBatchLayout *_rightPairComponent;
}

@property(retain, nonatomic) NFLPairSubBatchLayout *rightPairComponent; // @synthesize rightPairComponent=_rightPairComponent;
@property(retain, nonatomic) NFLPairSubBatchLayout *centerPairComponent; // @synthesize centerPairComponent=_centerPairComponent;
@property(retain, nonatomic) NFLPairSubBatchLayout *leftPairComponent; // @synthesize leftPairComponent=_leftPairComponent;
- (void).cxx_destruct;
- (id)layoutInfosAtRowOrigin:(long long)arg1 columnOrigin:(long long)arg2 subBatchRowOffset:(long long)arg3 feedSettings:(id)arg4;
- (unsigned long long)rowSpan;
- (id)singleComponentLayouts;
- (id)tileInfosUsed;
- (double)rank;
- (_Bool)isValid;

@end
