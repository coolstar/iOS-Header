//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSURL.h>

#import <OfficeImport/TSUDownloadItem-Protocol.h>

@class NSString;

@interface NSURL (DownloadItem) <TSUDownloadItem>
+ (void)downloadManager:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
+ (_Bool)downloadManager:(id)arg1 task:(id)arg2 didFinishDownloadingToURL:(id)arg3 error:(id *)arg4;
+ (_Bool)canHandleDownloadTask:(id)arg1;
@property(readonly, nonatomic) long long totalBytesExpectedToBeDownloaded;
@property(readonly, nonatomic) NSURL *downloadURL;
@property(readonly, nonatomic) NSString *downloadTaskDescription;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool needsDownload;
@property(readonly) Class superclass;
@end

