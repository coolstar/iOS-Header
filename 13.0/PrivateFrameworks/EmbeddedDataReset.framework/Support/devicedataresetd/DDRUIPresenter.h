//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PUIProgressWindow;

@interface DDRUIPresenter : NSObject
{
    _Bool _progressBarVisible;
    double _progress;
    PUIProgressWindow *_resetProgressWindow;
}

@property(retain, nonatomic) PUIProgressWindow *resetProgressWindow; // @synthesize resetProgressWindow=_resetProgressWindow;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(nonatomic) _Bool progressBarVisible; // @synthesize progressBarVisible=_progressBarVisible;
- (void).cxx_destruct;
- (void)show;
- (id)init;

@end
