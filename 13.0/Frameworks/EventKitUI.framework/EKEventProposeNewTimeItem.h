//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EventKitUI/EKEventDetailItem.h>

@class UITableViewCell;

__attribute__((visibility("hidden")))
@interface EKEventProposeNewTimeItem : EKEventDetailItem
{
    UITableViewCell *_cell;
    _Bool _cellNeedsUpdate;
}

+ (_Bool)eventShowsProposeTime:(id)arg1;
- (void).cxx_destruct;
- (id)detailViewControllerWithFrame:(struct CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (void)_updateCellIfNeededForWidth:(double)arg1;
- (void)setCellPosition:(int)arg1;
- (_Bool)configureWithCalendar:(id)arg1 preview:(_Bool)arg2;
- (void)reset;

@end
