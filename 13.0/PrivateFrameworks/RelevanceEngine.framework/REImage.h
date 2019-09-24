//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RelevanceEngine/NSCoding-Protocol.h>
#import <RelevanceEngine/NSCopying-Protocol.h>

@interface REImage : NSObject <NSCopying, NSCoding>
{
}

+ (id)imageWithCGImage:(struct CGImage *)arg1 scale:(double)arg2;
+ (id)imageWithData:(id)arg1 scale:(double)arg2;
+ (id)imageWithContentsOfFileAtPath:(id)arg1 scale:(double)arg2;
+ (id)imageNamed:(id)arg1 inBundle:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
