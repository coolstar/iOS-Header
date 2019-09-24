//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface RidesharingAppPreferenceManager : NSObject
{
}

+ (id)_lastSelectionDates;
+ (id)mostRecentSelectedAppIdentifers;
+ (void)removeRecordedAppSelectionForAppIdentifiers:(id)arg1;
+ (id)preferredRideChoiceNamesByAppIdentifier;
+ (void)recordRideChoice:(id)arg1;
+ (void)recordAppSelection:(id)arg1;
+ (id)sortedRideOptionStatuses:(id)arg1 withStoreOrdering:(id)arg2;

@end
