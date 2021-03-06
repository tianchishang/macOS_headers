//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSTDropHandler.h"

@interface TSTQuickCalcDropHandler : TSTDropHandler
{
    struct __CFUUID *mSourceTableIDCFUUID;
    BOOL mDropTargettingSameTable;
}

+ (id)newDropHandlerForRep:(id)arg1 withDraggingInfo:(id)arg2;
- (BOOL)handleDragOperation:(unsigned long long)arg1 withSender:(id)arg2 atPoint:(struct CGPoint)arg3;
- (void)updateDragAndDropCellRegionForPoint:(struct CGPoint)arg1;
- (unsigned long long)dragOperationForSender:(id)arg1 atPoint:(struct CGPoint)arg2;
- (void)dealloc;
- (id)initWithTableRep:(id)arg1 dragAndDropDetails:(id)arg2;

@end

