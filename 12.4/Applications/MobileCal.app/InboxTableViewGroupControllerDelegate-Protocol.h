//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class EKCalendarEventInvitationNotificationAttendee, EKEvent, NSIndexSet, UITableViewController;
@protocol InboxTableViewGroupController;

@protocol InboxTableViewGroupControllerDelegate <NSObject>
- (void)inboxTableViewGroupController:(id <InboxTableViewGroupController>)arg1 viewProposedTimeForAttendee:(EKCalendarEventInvitationNotificationAttendee *)arg2 onEvent:(EKEvent *)arg3;
- (void)inboxTableViewGroupController:(id <InboxTableViewGroupController>)arg1 viewCommentsForEvent:(EKEvent *)arg2;
- (void)inboxTableViewGroupController:(id <InboxTableViewGroupController>)arg1 inspectEvent:(EKEvent *)arg2;
- (void)inboxTableViewGroupController:(id <InboxTableViewGroupController>)arg1 addedRows:(NSIndexSet *)arg2 removedRows:(NSIndexSet *)arg3 updatedRows:(NSIndexSet *)arg4;
- (UITableViewController *)parentTableViewControllerForGroupController:(id <InboxTableViewGroupController>)arg1;
@end

