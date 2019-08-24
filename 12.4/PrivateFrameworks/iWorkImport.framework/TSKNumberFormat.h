//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSKFormat.h>

#import <iWorkImport/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface TSKNumberFormat : TSKFormat <NSCopying>
{
    _Bool _showThousandsSeparator;
    _Bool _usePlusSign;
    int _negativeStyle;
    unsigned long long _decimalPlaces;
}

@property(readonly, nonatomic) _Bool usePlusSign; // @synthesize usePlusSign=_usePlusSign;
@property(readonly, nonatomic) _Bool showThousandsSeparator; // @synthesize showThousandsSeparator=_showThousandsSeparator;
@property(readonly, nonatomic) int negativeStyle; // @synthesize negativeStyle=_negativeStyle;
@property(readonly, nonatomic) unsigned long long decimalPlaces; // @synthesize decimalPlaces=_decimalPlaces;
- (id)description;
- (id)asNumberFormat;
- (id)stringFromDouble:(double)arg1 locale:(id)arg2;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithFormatType:(int)arg1 decimalPlaces:(unsigned long long)arg2 negativeStyle:(int)arg3 showSeparator:(_Bool)arg4;
- (id)initWithFormatType:(int)arg1;

@end
