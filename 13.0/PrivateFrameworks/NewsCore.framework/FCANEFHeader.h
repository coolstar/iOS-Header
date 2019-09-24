//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface FCANEFHeader : NSObject
{
    NSData *_wrappingKeyID;
    NSData *_wrappedKey;
    NSString *_contentType;
    NSData *_headerData;
}

@property(readonly, copy, nonatomic) NSData *headerData; // @synthesize headerData=_headerData;
@property(readonly, copy, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
@property(readonly, copy, nonatomic) NSData *wrappedKey; // @synthesize wrappedKey=_wrappedKey;
@property(readonly, copy, nonatomic) NSData *wrappingKeyID; // @synthesize wrappingKeyID=_wrappingKeyID;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long totalLength;
- (id)init;
- (id)initWithFileHandle:(id)arg1;
- (id)initWithFilePath:(id)arg1;
- (id)initWithWrappingKeyID:(id)arg1 wrappedKey:(id)arg2 contentType:(id)arg3;
- (id)initWithHeaderData:(id)arg1 wrappingKeyID:(id)arg2 wrappedKey:(id)arg3 contentType:(id)arg4;

@end
