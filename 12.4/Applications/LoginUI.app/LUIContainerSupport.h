//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class LKClassConfiguration, NSURL;

@interface LUIContainerSupport : NSObject
{
}

+ (id)sharedInstance;
@property(readonly) NSURL *classRosterInformationFileURL;
- (id)containerLibraryDirectoryURL;
@property(readonly) LKClassConfiguration *cachedClassConfiguration;

@end
