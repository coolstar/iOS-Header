//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SAMPMediaEntity.h>

@class NSNumber, NSString, SACalendar, SAMPReleaseInfo;

@interface SAMPMediaItem : SAMPMediaEntity
{
}

+ (id)mediaItemWithDictionary:(id)arg1 context:(id)arg2;
+ (id)mediaItem;
@property(copy, nonatomic) NSString *sortArtist;
@property(copy, nonatomic) NSString *sortAlbum;
@property(retain, nonatomic) SAMPReleaseInfo *releaseInfo;
@property(copy, nonatomic) NSNumber *perceivableStartTimeInSeconds;
@property(copy, nonatomic) NSString *genre;
@property(retain, nonatomic) SACalendar *datePurchased;
@property(copy, nonatomic) NSString *artist;
@property(copy, nonatomic) NSString *album;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

