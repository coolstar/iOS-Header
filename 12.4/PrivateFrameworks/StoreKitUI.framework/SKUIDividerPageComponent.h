//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIPageComponent.h>

@class NSString, SKUIDividerViewElement;

@interface SKUIDividerPageComponent : SKUIPageComponent
{
    NSString *_title;
}

@property(readonly, nonatomic) NSString *dividerTitle; // @synthesize dividerTitle=_title;
- (void).cxx_destruct;
- (long long)componentType;
- (id)initWithViewElement:(id)arg1;
- (id)initWithDividerTitle:(id)arg1;
- (id)initWithCustomPageContext:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) SKUIDividerViewElement *viewElement; // @dynamic viewElement;

@end
