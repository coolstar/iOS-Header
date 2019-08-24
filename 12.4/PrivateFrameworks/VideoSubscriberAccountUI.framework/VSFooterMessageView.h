//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <VideoSubscriberAccountUI/PSHeaderFooterView-Protocol.h>

@class NSString, VSFontCenter;

__attribute__((visibility("hidden")))
@interface VSFooterMessageView : UIView <PSHeaderFooterView>
{
    NSString *_primaryMessage;
    NSString *_secondaryMessage;
    NSString *_tertiaryMessage;
    VSFontCenter *_fontCenter;
}

@property(retain, nonatomic) VSFontCenter *fontCenter; // @synthesize fontCenter=_fontCenter;
@property(copy, nonatomic) NSString *tertiaryMessage; // @synthesize tertiaryMessage=_tertiaryMessage;
@property(copy, nonatomic) NSString *secondaryMessage; // @synthesize secondaryMessage=_secondaryMessage;
@property(copy, nonatomic) NSString *primaryMessage; // @synthesize primaryMessage=_primaryMessage;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (double)preferredHeightForWidth:(double)arg1;
- (void)dealloc;
- (id)initWithSpecifier:(id)arg1;

@end
