//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class PDFDocument;

__attribute__((visibility("hidden")))
@interface PDFPageIconLayer : CALayer
{
    PDFDocument *_document;
    struct CGSize _frameSize;
    int _pageIndex;
    _Bool _needsUpdate;
}

- (void).cxx_destruct;
- (void)updateAsPageIndex:(int)arg1 forDocument:(id)arg2;
- (void)setFrame:(struct CGRect)arg1;
- (void)setNeedsUpdate;
- (int)pageIndex;
- (id)document;
- (id)initWithSize:(struct CGSize)arg1;

@end
