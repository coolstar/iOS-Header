//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "TUCommandType-Protocol.h"

@class NSString;
@protocol FCHeadlineProviding;

@interface FRArticleLikeCommand : NSObject <TUCommandType>
{
    id <FCHeadlineProviding> _headline;
}

@property(readonly, nonatomic) id <FCHeadlineProviding> headline; // @synthesize headline=_headline;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject *context;
@property(readonly, nonatomic) Class contextClass;
@property(readonly, copy, nonatomic) NSString *identifier;
- (id)initWithContext:(id)arg1;

@end
