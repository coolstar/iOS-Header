//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IKAppDocument, NSDictionary;

@interface IKNavigationItem : NSObject
{
    IKAppDocument *_document;
    NSDictionary *_options;
}

@property(retain, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property(retain, nonatomic) IKAppDocument *document; // @synthesize document=_document;
- (void).cxx_destruct;
- (id)initWithDocument:(id)arg1 presentationOptions:(id)arg2;

@end
