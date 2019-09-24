//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITextSelectionRect.h>

@class PDFPage;

__attribute__((visibility("hidden")))
@interface PDFTextSelectionRect : UITextSelectionRect
{
    PDFPage *_page;
    struct CGRect _rect;
    _Bool _isStartingRect;
    _Bool _isEndingRect;
}

- (void).cxx_destruct;
- (id)description;
- (void)setIsEndingRect:(_Bool)arg1;
- (void)setIsStartingRect:(_Bool)arg1;
- (_Bool)isVertical;
- (_Bool)containsEnd;
- (_Bool)containsStart;
- (long long)writingDirection;
- (struct CGRect)rect;
- (id)initWithRect:(struct CGRect)arg1 onPage:(id)arg2;

@end
