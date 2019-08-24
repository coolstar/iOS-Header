//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsUICore/NSObject-Protocol.h>

@class CNObservable, CNUIImage, CNUILikenessRenderingScope, NSArray;
@protocol CNKeyDescriptor;

@protocol CNUILikenessRendering <NSObject>
+ (id <CNKeyDescriptor>)descriptorForRequiredKeys;
- (CNUIImage *)loadingPlaceholderForContactCount:(unsigned long long)arg1 scope:(CNUILikenessRenderingScope *)arg2;
- (CNObservable *)renderedBasicMonogramFromString:(CNObservable *)arg1 scope:(CNUILikenessRenderingScope *)arg2;
- (CNObservable *)renderedLikenessesForContacts:(NSArray *)arg1 scope:(CNUILikenessRenderingScope *)arg2;
@end
