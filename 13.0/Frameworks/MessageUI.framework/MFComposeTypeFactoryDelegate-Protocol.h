//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MessageUI/NSObject-Protocol.h>

@class EFFuture, MFMailAccountProxy, MFMutableMessageHeaders, NSArray, NSString, UIView;
@protocol MFComposeBodyField, MFMailAccountProxyGenerator;

@protocol MFComposeTypeFactoryDelegate <NSObject>
- (EFFuture *)shouldCreateRichTextRepresentation;
- (NSArray *)attachments;
- (MFMailAccountProxy *)sendingAccountProxy;
- (NSString *)sendingEmailAddress;
- (void)setSendingEmailAddress:(NSString *)arg1;
- (MFMutableMessageHeaders *)savedHeaders;
- (void)setSavedHeaders:(MFMutableMessageHeaders *)arg1;
- (NSString *)subject;
- (void)setSubject:(NSString *)arg1;
- (NSArray *)bccRecipients;
- (void)setBccRecipients:(NSArray *)arg1;
- (NSArray *)ccRecipients;
- (void)setCcRecipients:(NSArray *)arg1;
- (NSArray *)toRecipients;
- (void)setToRecipients:(NSArray *)arg1;
- (UIView<MFComposeBodyField> *)bodyField;
- (id <MFMailAccountProxyGenerator>)accountProxyGenerator;

@optional
- (unsigned long long)contentVariationIndex;
- (void)contentDidChange;
- (void)addSignature:(_Bool)arg1;
@end
