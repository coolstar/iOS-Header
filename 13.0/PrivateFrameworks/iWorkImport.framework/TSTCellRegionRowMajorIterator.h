//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSTCellRegionIterating-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TSTCellRegionRowMajorIterator : NSObject <TSTCellRegionIterating>
{
    set_5fd94db8 mCellRangeSet;
    struct TSUCellCoord mCellID;
    struct TSUCellRect mBoundingCellRange;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)terminate;
- (struct TSUCellCoord)advanceToCellID:(struct TSUCellCoord)arg1;
- (struct TSUCellCoord)getNext;
- (id)initWithCellRegion:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
