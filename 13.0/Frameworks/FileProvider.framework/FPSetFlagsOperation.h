//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FileProvider/FPTransformOperation.h>

@protocol NSFileProviderItemFlags;

@interface FPSetFlagsOperation : FPTransformOperation
{
    id <NSFileProviderItemFlags> _flags;
}

- (void).cxx_destruct;
- (id)fp_prettyDescription;
- (unsigned long long)transformItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)initWithItems:(id)arg1 flags:(id)arg2;
- (id)replicateForItems:(id)arg1;

@end
