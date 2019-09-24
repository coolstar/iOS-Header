//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSTTableDataObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TSTTableDataString : TSTTableDataObject
{
    NSString *_string;
}

+ (id)objectWithString:(id)arg1 refCount:(unsigned int)arg2;
- (id)string;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)estimateByteSize;
- (unsigned long long)hash;
- (void)encodeToArchive:(struct TableDataList_ListEntry *)arg1 key:(unsigned int)arg2 archiver:(id)arg3;
- (void)loadFromArchive:(const struct TableDataList_ListEntry *)arg1 unarchiver:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initObjectWithString:(id)arg1 refCount:(unsigned int)arg2;

@end
