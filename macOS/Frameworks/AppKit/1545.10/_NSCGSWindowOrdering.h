//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppKit/_NSCGSWindowOrderingState-Protocol.h>

@class NSMutableArray, NSString, _NSCGSWindowOrderingProperties;

__attribute__((visibility("hidden")))
@interface _NSCGSWindowOrdering : NSObject <_NSCGSWindowOrderingState>
{
    NSMutableArray *_operations;
    _NSCGSWindowOrderingProperties *_latestProperties;
}

+ (id)currentOrdering;
- (BOOL)isWindowOrderedIn:(id)arg1;
- (id)windowsWithOptions:(unsigned int)arg1 onSpaces:(id)arg2 forConnectionID:(unsigned int)arg3;
- (id)onScreenWindowsForConnectionID:(unsigned int)arg1;
- (unsigned long long)onScreenWindowsCountForConnectionID:(unsigned int)arg1;
- (id)orderingGroupForWindow:(id)arg1;
- (void)clearOrderingGroup:(id)arg1;
- (void)removeWindowFromOrderingGroup:(id)arg1;
- (void)addWindow:(id)arg1 toOrderingGroupBelowWindow:(id)arg2;
- (void)addWindow:(id)arg1 toOrderingGroupAboveWindow:(id)arg2;
- (void)conditionallyOrderGroupFront:(id)arg1 withTimestamp:(double)arg2;
- (void)orderGroup:(id)arg1 op:(int)arg2 againstWindow:(id)arg3;
- (void)orderApplicationWindowsFront;
- (BOOL)_hasUncommittedSpaceAssignmentChanges:(id)arg1;
- (void)reassociateWithSpacesByGeometry:(id)arg1;
- (void)disassociateFromSpacesIfOrderedOut:(id)arg1;
- (void)setDesiredSpace:(unsigned long long)arg1 forWindow:(id)arg2;
- (int)subLevelForWindow:(id)arg1;
- (void)setSubLevel:(int)arg1 forWindow:(id)arg2;
- (int)levelForWindow:(id)arg1;
- (void)setLevel:(int)arg1 forWindow:(id)arg2;
- (void)orderWindow:(id)arg1 op:(int)arg2 againstWindow:(id)arg3;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

