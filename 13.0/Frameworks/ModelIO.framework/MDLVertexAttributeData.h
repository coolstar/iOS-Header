//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MDLMeshBufferMap;

@interface MDLVertexAttributeData : NSObject
{
    MDLMeshBufferMap *_map;
    void *_dataStart;
    unsigned long long _stride;
    unsigned long long _format;
    unsigned long long _bufferSize;
}

@property(nonatomic) unsigned long long bufferSize; // @synthesize bufferSize=_bufferSize;
- (void).cxx_destruct;
- (id)init;
- (void)setbufferSize:(unsigned long long)arg1;
@property(nonatomic) unsigned long long format;
@property(nonatomic) unsigned long long stride;
@property(nonatomic) void *dataStart;
@property(retain, nonatomic) MDLMeshBufferMap *map;

@end
