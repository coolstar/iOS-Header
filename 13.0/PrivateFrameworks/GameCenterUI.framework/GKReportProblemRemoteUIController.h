//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterUI/GKRemoteUIController.h>

@class GKPlayer, NSURL;

@interface GKReportProblemRemoteUIController : GKRemoteUIController
{
    GKPlayer *_problemPlayer;
    NSURL *_url;
}

+ (id)controllerForProblemPlayer:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(retain, nonatomic) GKPlayer *problemPlayer; // @synthesize problemPlayer=_problemPlayer;
- (void).cxx_destruct;
- (id)postBodyForInitialLoad;
- (id)bagKey;
- (id)fallbackURL;
- (int)preferredLayoutStyle;
- (id)initWithProblemPlayer:(id)arg1;

@end
