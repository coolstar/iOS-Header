//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSUNumberParser : NSObject
{
}

+ (_Bool)numberValueFromString:(id)arg1 locale:(id)arg2 outDecimalValue:(struct TSUDecimal *)arg3;
+ (_Bool)numberValueFromString:(id)arg1 locale:(id)arg2 outDecimalValue:(struct TSUDecimal *)arg3 outValueType:(int *)arg4;
+ (_Bool)numberValueFromString:(id)arg1 locale:(id)arg2 outDecimalValue:(struct TSUDecimal *)arg3 outValueType:(int *)arg4 outCurrencyCode:(id *)arg5;
+ (_Bool)numberValueFromString:(id)arg1 locale:(id)arg2 outDoubleValue:(double *)arg3;
+ (_Bool)numberValueFromString:(id)arg1 locale:(id)arg2 outDoubleValue:(double *)arg3 outValueType:(int *)arg4;
+ (_Bool)numberValueFromString:(id)arg1 locale:(id)arg2 outDoubleValue:(double *)arg3 outValueType:(int *)arg4 outCurrencyCode:(id *)arg5;

@end
