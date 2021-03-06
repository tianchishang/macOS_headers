//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotoLibraryPrivate/RDDatabaseAccessAction.h>

@class LiAddress, NSArray, NSString, RDUndoRedoChange;

@interface IPXRearrangeFolderContentsAction : RDDatabaseAccessAction
{
    NSArray *_movedItemAddresses;
    LiAddress *_afterItemAddress;
    LiAddress *_targetFolderAddress;
    BOOL _doNoteReparentItems;
    RDUndoRedoChange *_customOrderChanges;
    NSString *_oldSortKey;
}

- (void).cxx_destruct;
- (BOOL)canUndo;
- (int)performRedo;
- (int)performUndo;
- (void)performAction:(CDUnknownBlockType)arg1;
- (id)resourceObject;
- (id)defaultActionName;
- (id)initWithItems:(id)arg1 afterItem:(id)arg2 inFolder:(id)arg3 doNotReparentItems:(BOOL)arg4;

@end

