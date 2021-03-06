//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSPanel.h>

#import <AppKit/NSCollectionViewDataSource-Protocol.h>
#import <AppKit/NSCollectionViewDelegate-Protocol.h>
#import <AppKit/NSCollectionViewDelegateFlowLayout-Protocol.h>
#import <AppKit/NSTouchBarCustomizationPaletteLayoutDelegate-Protocol.h>

@class NSBox, NSButton, NSCollectionView, NSPopUpButton, NSScrollView, NSSegmentedControl, NSString, NSTextField, NSToolbar, NSToolbarSnapshotWindow, _NSToolbarImageRepView;

__attribute__((visibility("hidden")))
@interface NSToolbarConfigPanel : NSPanel <NSCollectionViewDataSource, NSTouchBarCustomizationPaletteLayoutDelegate, NSCollectionViewDelegateFlowLayout, NSCollectionViewDelegate>
{
    NSToolbar *_editedToolbar;
    double _widthOfWidgets;
    double _individualItemsMaxHeight;
    NSToolbar *_individualItemsToolbar;
    NSTextField *_individualItemsText;
    NSCollectionView *_individualItemsCollectionView;
    NSScrollView *_individualItemsScrollView;
    NSTextField *_defaultItemsText;
    _NSToolbarImageRepView *_defaultToolbarImageRep;
    NSTextField *_displayModeLabel;
    NSPopUpButton *_displayModePopUp;
    long long _desiredSheetWidth;
    NSButton *_useSmallIconsCheckBox;
    NSSegmentedControl *_displayModeSegmentedControl;
    NSToolbarSnapshotWindow *_snapshotWindow;
    NSBox *_defaultItemsContainer;
}

+ (id)toolbarConfigPanelForToolbar:(id)arg1 withWidth:(long long)arg2;
+ (id)_nibName;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_updateTouchBarWithToolbarDisplayMode:(unsigned long long)arg1;
- (void)_touchBarDisplayModeChanged:(id)arg1;
- (id)makeTouchBar;
- (void)_setDefaultToolbarItemSetFromMenuItem:(id)arg1;
- (BOOL)preventsApplicationTerminationWhenModal;
- (double)_spaceNeededForPaletteLabelsOfItem:(id)arg1 preferredWidth:(double)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 draggingImageForItemsAtIndexPaths:(id)arg2 withEvent:(id)arg3 offset:(struct CGPoint *)arg4;
- (BOOL)collectionView:(id)arg1 writeItemsAtIndexPaths:(id)arg2 toPasteboard:(id)arg3;
- (BOOL)collectionView:(id)arg1 canDragItemsAtIndexPaths:(id)arg2 withEvent:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 maxSizeForItemAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 minSizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 itemForRepresentedObjectAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)_removeVibrancyOnContainerIfNecessary;
- (void)_loadData;
- (int)_setBackingStoreResolution:(double)arg1;
- (void)_loadIndividualItemsCollectionView;
- (void)_loadDefaultSetImageRep;
- (id)_createOffscreenDefaultImageRepSetWindow;
- (void)_setUpTextField:(id)arg1;
- (BOOL)_shouldUseTexturedAppearanceForSegmentedCellInView:(id)arg1;
- (void)cancel:(id)arg1;
- (void)ok:(id)arg1;
- (BOOL)_addCursorRect:(struct CGRect)arg1 cursor:(id)arg2 forView:(id)arg3;
- (void)dealloc;
- (id)editedToolbar;
- (void)_orderFrontRelativeToWindow:(id)arg1;
- (BOOL)_shouldSuppressRolloversForSegmentedCellInView:(id)arg1;
- (void)_finishInitialization;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

