//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleAccountUI/NSObject-Protocol.h>

@class AAUIDataclassPickerViewController, NSString;

@protocol AAUIDataclassPickerViewControllerDelegate <NSObject>
- (void)dataclassPickerViewController:(AAUIDataclassPickerViewController *)arg1 didCompleteWithDataclassActions:(struct NSDictionary *)arg2;
- (void)dataclassPickerViewControllerDidCancel:(AAUIDataclassPickerViewController *)arg1;

@optional
- (NSString *)footerTextForDataclassPickerViewController:(AAUIDataclassPickerViewController *)arg1;
@end
