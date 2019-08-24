//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/OADDrawable.h>

@class ODDColorTransform, ODDNodePoint, ODDStyleDefinition;

__attribute__((visibility("hidden")))
@interface ODDDiagram : OADDrawable
{
    ODDNodePoint *mDocumentPoint;
    ODDColorTransform *mColorTransform;
    ODDStyleDefinition *mStyleDefinition;
}

- (id)description;
- (id)styleDefinition;
- (id)colorTransform;
- (void)setDocumentPoint:(id)arg1;
- (id)documentPoint;
- (void)setParentTextListStyle:(id)arg1;
- (void)dealloc;
- (id)init;

@end
