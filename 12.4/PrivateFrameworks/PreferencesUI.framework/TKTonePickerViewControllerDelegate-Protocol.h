//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PreferencesUI/NSObject-Protocol.h>

@class NSNumber, NSString, TKTonePickerViewController, TKVibrationPickerViewController;

@protocol TKTonePickerViewControllerDelegate <NSObject>

@optional
- (void)tonePickerViewController:(TKTonePickerViewController *)arg1 didChangeIgnoreMute:(_Bool)arg2;
- (void)tonePickerViewController:(TKTonePickerViewController *)arg1 didDismissVibrationPickerViewController:(TKVibrationPickerViewController *)arg2;
- (void)tonePickerViewController:(TKTonePickerViewController *)arg1 willPresentVibrationPickerViewController:(TKVibrationPickerViewController *)arg2;
- (void)tonePickerViewController:(TKTonePickerViewController *)arg1 selectedMediaItemWithIdentifier:(NSNumber *)arg2;
- (void)tonePickerViewController:(TKTonePickerViewController *)arg1 selectedToneWithIdentifier:(NSString *)arg2;
@end
