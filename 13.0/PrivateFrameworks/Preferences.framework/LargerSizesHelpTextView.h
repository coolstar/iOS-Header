//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <Preferences/PSHeaderFooterView-Protocol.h>

@class UILabel;

@interface LargerSizesHelpTextView : UIView <PSHeaderFooterView>
{
    UILabel *_helpLabel;
}

- (void).cxx_destruct;
- (void)layoutForWidth:(double)arg1 inTableView:(id)arg2;
- (double)preferredHeightForWidth:(double)arg1 inTableView:(id)arg2;
- (void)layoutSubviews;
- (id)initWithSpecifier:(id)arg1;

@end
