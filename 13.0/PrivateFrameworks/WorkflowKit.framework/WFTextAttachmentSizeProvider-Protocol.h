//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/NSObject-Protocol.h>

@class NSTextAttachment;

@protocol WFTextAttachmentSizeProvider <NSObject>

@optional
- (double)preferredHeightForDrawingTextAttachment:(NSTextAttachment *)arg1 atCharacterIndex:(unsigned long long)arg2 withProposedHeight:(double)arg3;
- (_Bool)shouldDrawTextAttachment:(NSTextAttachment *)arg1 atCharacterIndex:(unsigned long long)arg2;
@end
