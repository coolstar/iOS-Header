//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/NSObject-Protocol.h>

@class NSData;

@protocol MKMapsSuggestionsPredictor <NSObject>
- (_Bool)transportModeForDestinationEntryData:(NSData *)arg1 originCoordinateData:(NSData *)arg2 handler:(void (^)(NSArray *, NSError *))arg3;
- (_Bool)transportModeForDestinationMapItemData:(NSData *)arg1 originCoordinateData:(NSData *)arg2 handler:(void (^)(NSArray *, NSError *))arg3;
@end
