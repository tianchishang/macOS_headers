//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol TNodeEngineProtocol <NSObject>

@optional
- (void)spotlightAttrSyncComplete:(const struct TGroupedNodes *)arg1 inObservedNode:(const struct TFENode *)arg2;
- (void)nodesChanged:(const vector_614ab7ad *)arg1 inObservedNode:(const struct TFENode *)arg2;
- (void)folderContentChanged:(const struct FolderContentChangeDescriptor *)arg1;
- (struct TBaseNodeComparator *)createComparator:(const struct TFENode *)arg1;
@end

