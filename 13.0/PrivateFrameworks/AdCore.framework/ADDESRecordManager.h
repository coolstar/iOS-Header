//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AdCore/ADSingleton.h>

@class NSMutableDictionary;

@interface ADDESRecordManager : ADSingleton
{
    NSMutableDictionary *_desRecords;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *desRecords; // @synthesize desRecords=_desRecords;
- (void).cxx_destruct;
- (id)recordForRequestID:(id)arg1;
- (void)addImpressionForRequestID:(id)arg1;
- (void)addTapForRequestID:(id)arg1;
- (void)updateAdData:(id)arg1 forRequestID:(id)arg2;
- (id)init;

@end
