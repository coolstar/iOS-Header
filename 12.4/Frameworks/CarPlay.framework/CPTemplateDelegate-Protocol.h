//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CarPlay/NSObject-Protocol.h>

@class CPTemplate, NSUUID;

@protocol CPTemplateDelegate <NSObject>
- (void)handleActionForControlIdentifier:(NSUUID *)arg1;

@optional
- (void)templateDidDismiss:(CPTemplate *)arg1;
- (void)templateDidDisappear:(CPTemplate *)arg1 animated:(_Bool)arg2;
- (void)templateWillDisappear:(CPTemplate *)arg1 animated:(_Bool)arg2;
- (void)templateDidAppear:(CPTemplate *)arg1 animated:(_Bool)arg2;
- (void)templateWillAppear:(CPTemplate *)arg1 animated:(_Bool)arg2;
@end

