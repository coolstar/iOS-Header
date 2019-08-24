//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NotesUI/NSObject-Protocol.h>

@class PKCanvasView, PKDrawing, UITouch;

@protocol PKCanvasViewDelegate <NSObject>

@optional
- (void)canvasViewRenderingDidFinish:(PKCanvasView *)arg1;
- (void)canvasViewDidEndStroke:(PKCanvasView *)arg1;
- (void)canvasViewDidCancelStroke:(PKCanvasView *)arg1;
- (void)canvasViewDidBeginNewStroke:(PKCanvasView *)arg1;
- (void)canvasViewWillBeginNewStroke:(PKCanvasView *)arg1 withTouch:(UITouch *)arg2;
- (void)canvasViewDrawingDidChange:(PKCanvasView *)arg1;
- (void)canvasView:(PKCanvasView *)arg1 drawingDidChange:(PKDrawing *)arg2;
@end
