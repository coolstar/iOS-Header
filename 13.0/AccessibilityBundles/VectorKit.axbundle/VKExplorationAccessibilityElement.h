//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIAccessibilityElement.h>

@class AXVKExplorationVertexElement;

@interface VKExplorationAccessibilityElement : UIAccessibilityElement
{
    _Bool _isExplorationElement;
    AXVKExplorationVertexElement *_vertex;
}

@property(nonatomic) _Bool isExplorationElement; // @synthesize isExplorationElement=_isExplorationElement;
@property(retain, nonatomic) AXVKExplorationVertexElement *vertex; // @synthesize vertex=_vertex;
- (void).cxx_destruct;
- (_Bool)accessibilityActivate;
- (id)initWithAccessibilityContainer:(id)arg1 andVertex:(id)arg2;
- (struct CGRect)accessibilityFrame;
- (id)accessibilityPaths;
- (id)accessibilityPath;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (_Bool)isCurrent;

@end

