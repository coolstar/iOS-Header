//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class HKBarButtonItemControl, HKCDADocumentReportViewController, HKLargePlainTextViewController, UIBarButtonItem, UIStackView, _HKReportSegmentControl;

@interface HKCDADocumentDetailViewController : UIViewController
{
    UIStackView *_stackView;
    _HKReportSegmentControl *_reportSegmentControl;
    HKCDADocumentReportViewController *_formattedReportController;
    HKLargePlainTextViewController *_plainTextReportController;
    UIBarButtonItem *_searchButton;
    HKBarButtonItemControl *_searchInSegmentControl;
}

@property(readonly, nonatomic) HKBarButtonItemControl *searchInSegmentControl; // @synthesize searchInSegmentControl=_searchInSegmentControl;
@property(readonly, nonatomic) UIBarButtonItem *searchButton; // @synthesize searchButton=_searchButton;
@property(readonly, nonatomic) HKLargePlainTextViewController *plainTextReportController; // @synthesize plainTextReportController=_plainTextReportController;
@property(readonly, nonatomic) HKCDADocumentReportViewController *formattedReportController; // @synthesize formattedReportController=_formattedReportController;
@property(readonly, nonatomic) _HKReportSegmentControl *reportSegmentControl; // @synthesize reportSegmentControl=_reportSegmentControl;
@property(readonly, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (void)searchButtonAction:(id)arg1;
- (void)changeReportDisplayed:(id)arg1;
- (void)_replaceLastArrangedViewWith:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithReportData:(id)arg1;

@end
