//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class BrowseGlyphViewLayout;

__attribute__((visibility("hidden")))
@interface SearchCompletionTableViewCell : UITableViewCell
{
    BrowseGlyphViewLayout *_layout;
}

+ (id)collectionsButtonCell;
+ (Class)layoutClass;
- (void).cxx_destruct;
@property(retain, nonatomic) BrowseGlyphViewLayout *layout; // @synthesize layout=_layout;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithReuseIdentifier:(id)arg1;

@end

