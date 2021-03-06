//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TBaseBrowserViewController.h"

#import "TThumbnailExtractorDelegate-Protocol.h"

@class NSCountedSet, NSString, NSView, TBrowserContainerController, TBrowserViewDataSource, TViewOptionsSettingsController;

@interface TBrowserViewController : TBaseBrowserViewController <TThumbnailExtractorDelegate>
{
    _Bool _okayToReloadData;
    _Bool _willReloadData;
    _Bool _binding;
    _Bool _tearingDown;
    TBrowserContainerController *_containerController;
    struct TNodeBrowser *_nodeBrowser;
    _Bool _selectionHasBeenHandled;
    TViewOptionsSettingsController *_viewOptionsSettingsController;
    shared_ptr_0f967b3d _thumbnailController;
    struct TFENode _backupLiveTarget;
    struct TNSRef<TBrowserViewDataSource *> _dataSource;
    NSView *_browserView;
    _Bool _iCloudMode;
    _Bool _allowXrayFolders;
    struct map<TFENode, TFENode, std::__1::less<TFENode>, std::__1::allocator<std::__1::pair<const TFENode, TFENode>>> _xrayFolders;
    struct TFENodeVector _resolvedTargetPath;
    struct TFENodeVector _unResolvedTargetPath;
    struct TFENode _nodeBeingEdited;
    struct TFENodeVector _nodesBeingDragged;
    NSCountedSet *_openContainers;
    struct CGPoint _scrollPosition;
    _Bool _grouping;
    struct TNSRef<NSString *> _sortBy;
    _Bool _isPerformingDropAnimation;
    _Bool _isPerformingDropOperation;
    _Bool _isTrackingDragOver;
    TRef_9e01da98 _dropAction;
    _Bool _userHasInteractedWithView;
    _Bool _forceScrollToTop;
    double _scrollDistanceFromTop;
    _Bool _shouldRestoreScrollDistance;
    struct TNSRef<TICloudNoDocumentsViewController *> _iCloudNoDocumentsViewController;
    struct TNSRef<TDelayedPopulationViewController *> _delayedPopulationViewController;
    _Bool _isShowingICloudDriveContent;
    struct TKeyValueBinder _sortByBinder;
}

+ (id)appCentricLibraryFolderIcon:(const struct TFENode *)arg1 iconSize:(double)arg2 includeAppIconOverlay:(_Bool)arg3;
+ (id)ubiquityStatusTextForNode:(const struct TFENode *)arg1;
+ (id)keyPathsForValuesAffectingViewSettings;
@property _Bool shouldRestoreScrollDistance; // @synthesize shouldRestoreScrollDistance=_shouldRestoreScrollDistance;
@property(nonatomic) double scrollDistanceFromTop; // @synthesize scrollDistanceFromTop=_scrollDistanceFromTop;
@property(nonatomic) _Bool forceScrollToTop; // @synthesize forceScrollToTop=_forceScrollToTop;
@property(nonatomic) _Bool userHasInteractedWithView; // @synthesize userHasInteractedWithView=_userHasInteractedWithView;
@property(nonatomic) TRef_9e01da98 dropAction; // @synthesize dropAction=_dropAction;
@property(nonatomic) _Bool isTrackingDragOver; // @synthesize isTrackingDragOver=_isTrackingDragOver;
@property(nonatomic) _Bool isPerformingDropOperation; // @synthesize isPerformingDropOperation=_isPerformingDropOperation;
@property(nonatomic) _Bool isPerformingDropAnimation; // @synthesize isPerformingDropAnimation=_isPerformingDropAnimation;
@property(nonatomic, getter=isGrouping) _Bool grouping; // @synthesize grouping=_grouping;
@property(nonatomic) NSView *browserView; // @synthesize browserView=_browserView;
@property(nonatomic) struct CGPoint scrollPosition; // @synthesize scrollPosition=_scrollPosition;
@property(nonatomic) _Bool selectionHasBeenHandled; // @synthesize selectionHasBeenHandled=_selectionHasBeenHandled;
@property(nonatomic) struct TNodeBrowser *nodeBrowser; // @synthesize nodeBrowser=_nodeBrowser;
@property(readonly, nonatomic) TBrowserContainerController *containerController; // @synthesize containerController=_containerController;
@property(readonly, nonatomic) _Bool isBindingViewSettings; // @synthesize isBindingViewSettings=_binding;
@property(nonatomic) _Bool willReloadData; // @synthesize willReloadData=_willReloadData;
@property(nonatomic) _Bool okayToReloadData; // @synthesize okayToReloadData=_okayToReloadData;
@property(retain, nonatomic) TViewOptionsSettingsController *viewOptionsSettingsController; // @synthesize viewOptionsSettingsController=_viewOptionsSettingsController;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)openPreviewPanelInFullScreen:(_Bool)arg1;
- (struct TGroupManager *)getDateGroupManagerForProperty:(unsigned int)arg1 andContainer:(const struct TFENode *)arg2;
- (struct CGRect)thumbnailFrameForNode:(const struct TFENode *)arg1;
- (struct TFENode)thumbnailTargetNodeForNode:(const struct TFENode *)arg1;
- (void)invalidateThumbnailForKeyNodes:(const struct TFENodeVector *)arg1;
- (_Bool)getThumbnailExtractorData:(struct TThumbnailExtractorData *)arg1 forNode:(const struct TFENode *)arg2;
- (_Bool)getThumbnailExtractorData:(struct TThumbnailExtractorData *)arg1 forNode:(const struct TFENode *)arg2 inContainer:(const struct TFENode *)arg3 inVisibleRect:(const struct CGRect *)arg4;
@property(readonly, nonatomic) shared_ptr_0f967b3d thumbnailController; // @dynamic thumbnailController;
- (void)checkForUbquityStatusChange;
- (id)imageForUbiquityStatus:(const struct TFENode *)arg1 selected:(_Bool)arg2;
- (struct CGImage *)createRestoreImageForNode:(const struct TFENode *)arg1 outRect:(struct CGRect *)arg2;
- (id)restoreImages;
- (id)getCellForNode:(const struct TFENode *)arg1;
- (void)setNodeBeingEdited:(const struct TFENode *)arg1;
- (const struct TFENode *)nodeBeingEdited;
- (void)springNodeDetails:(const struct TFENode *)arg1 globalMouse:(const struct CGPoint *)arg2 spawnNewWindow:(_Bool)arg3;
- (void)springSidebarNode:(const struct TFENode *)arg1 globalMouse:(const struct CGPoint *)arg2 spawnNewWindow:(_Bool)arg3;
- (void)springNode:(const struct TFENode *)arg1 globalMouse:(const struct CGPoint *)arg2 spawnNewWindow:(_Bool)arg3;
- (_Bool)panelDisableNode:(const struct TFENode *)arg1;
- (_Bool)allowsBrowsingPackages;
- (_Bool)nodeCanBeDisclosed:(const struct TFENode *)arg1;
- (_Bool)canBrowseNode:(const struct TFENode *)arg1;
- (_Bool)uiAllowsRenamingNode:(const struct TFENode *)arg1;
- (struct TFENode)groupNodeOfNode:(const struct TFENode *)arg1;
- (_Bool)groupingByTag;
- (_Bool)nodeIsGroupNode:(const struct TFENode *)arg1;
- (_Bool)nodeIsDimmed:(const struct TFENode *)arg1;
- (_Bool)showEjectButtonForNode:(const struct TFENode *)arg1;
- (unsigned int)nodeObserverOptionsForContainer:(const struct TFENode *)arg1;
- (_Bool)shouldObserveSpotlightAttributesForContainer:(const struct TFENode *)arg1;
- (_Bool)shouldCalculateFolderSizesForContainer:(const struct TFENode *)arg1;
- (struct CGSize)viewScrollersSize;
- (struct CGSize)idealViewSize;
- (struct CGSize)minimumViewSize;
- (_Bool)shouldSaveAndRestoreScrollDistanceFromTop;
- (void)saveScrollPosition;
- (void)updateScrollPosition;
- (void)commonPostMouseDown:(id)arg1;
- (void)sidebarDidChangeVisibility:(_Bool)arg1;
- (_Bool)inBrowseMode;
- (void)nodeBrowserReceivingDrag;
- (const struct TFENodeVector *)nodesBeingDragged;
- (void)selectionChangedByUserAction:(_Bool)arg1;
- (_Bool)handleUnicodeTextInput:(id)arg1 atTime:(double)arg2;
- (_Bool)nodeIsSelected:(const struct TFENode *)arg1;
- (void)getVisibleNodes:(struct TFENodeVector *)arg1;
- (void)setSelectionChangedAnimationsEnabled:(_Bool)arg1;
- (void)selectNodesNowOrLater:(const struct TFENodeVector *)arg1;
- (unsigned long long)getSelectedNodes:(struct TFENodeVector *)arg1 forContainer:(const struct TFENode *)arg2 upTo:(unsigned long long)arg3;
- (void)selectionChanged;
- (_Bool)canHaveRedundantReplicaNodes;
- (struct TString)pathPrettyStringForNode:(struct TFENode)arg1;
- (struct TString)titleForICloudContainer:(const struct TFENode *)arg1;
- (struct TFENode)cloudLibrariesContainer;
- (struct TFENode)mapToUserVisibleCloudLocation:(const struct TFENode *)arg1;
- (int)cloudFolderTypeForNode:(const struct TFENode *)arg1;
- (_Bool)nodeIsAnICloudRoot:(const struct TFENode *)arg1;
- (_Bool)iCloudNodeIsUserVisible:(const struct TFENode *)arg1;
- (_Bool)nodeIsInICloud:(const struct TFENode *)arg1 allowQueryHits:(_Bool)arg2;
- (struct TFENode)cloudDocsNodeForNode:(struct TFENode)arg1;
- (struct TFENode)parentNodeToOpen:(const struct TFENode *)arg1;
- (struct TFENode)theICloudNode;
- (_Bool)isTheICloudNode:(const struct TFENode *)arg1;
- (id)originatingWindowController;
- (id)browserWindowController;
- (void)windowDidChangeOcclusionState:(id)arg1;
- (void)windowDidBecomeMain:(id)arg1;
- (void)syncOnActivateIfRemoteTarget;
- (_Bool)isTimeMachineBrowser;
@property(readonly, nonatomic) _Bool isBackupBrowser;
@property(readonly, nonatomic) _Bool isSnapshotImageBrowser;
- (void)moveMaxResultsCountWithReset:(_Bool)arg1;
- (_Bool)targetIsSearch;
- (_Bool)trimPath:(const struct TFENodeVector *)arg1 forNode:(const struct TFENode *)arg2;
- (void)setTargetPath:(const struct TFENodeVector *)arg1;
- (struct TFENode)settingsNode;
- (const struct TFENodeVector *)resolvedTargetPath;
- (const struct TFENodeVector *)targetPath;
- (const struct TFENode *)browserRoot;
- (const struct TFENode *)target;
@property(retain, nonatomic) NSString *sortBy;
- (unsigned int)viewStyle;
- (_Bool)makeBrowserViewFirstResponder;
- (id)baseView;
@property(retain, nonatomic) TBrowserViewDataSource *dataSource;
- (struct TString)searchString;
- (void)restoreBrowserViewState:(id)arg1;
- (id)browserViewState;
- (void)didFinishViewCreation;
- (id)postProcessOperationOfKind:(int)arg1 forContainer:(const struct TFENode *)arg2;
- (id)nibName;
- (void)aboutToDestroyBrowserView;
- (_Bool)isTearingDown;
- (void)aboutToTearDown;
- (void)finalize;
- (void)dealloc;
- (void)finishViewInitialization;
- (id)initWithDataSource:(id)arg1 andViewSettings:(id)arg2 targetPath:(const struct TFENodeVector *)arg3 containerController:(id)arg4;
- (void)commonViewInitWithDataSource:(id)arg1 targetPath:(const struct TFENodeVector *)arg2;
- (void)initCommon;
- (void)restoreTransientViewState;
- (void)saveTransientViewState;
- (_Bool)retargetedInternally:(const struct TFENodeVector *)arg1;
- (void)computeTargetPathsFor:(const struct TFENodeVector *)arg1;
- (_Bool)resultCountIsPartial;
- (_Bool)isValidTargetForSnapshot:(const struct TFENode *)arg1;
- (_Bool)validateShare:(id)arg1;
- (const struct TFENode *)snapshotNode;
- (struct TGroupManager *)groupManager:(const struct TFENode *)arg1;
- (struct TBaseNodeComparator *)createComparator:(const struct TFENode *)arg1;
- (_Bool)sortInIncreasingOrderForProperty:(const struct TString *)arg1;
- (struct TString)sortProperty;
- (_Bool)sortGroupsInAscendingOrder:(const struct TFENode *)arg1;
- (void)sortAllChildrenForNode:(const struct TFENode *)arg1 reload:(_Bool)arg2 maintainSelection:(_Bool)arg3;
- (void)sortAllChildrenForNode:(const struct TFENode *)arg1 collator:(struct SortCollator *)arg2 reload:(_Bool)arg3 maintainSelection:(_Bool)arg4;
- (void)sortDataSourceAsynchronously:(_Bool)arg1 revealSelection:(_Bool)arg2;
- (void)dataSourceDidSortAsynchronously:(_Bool)arg1;
- (void)dataSourceWillSortAsynchronously;
- (_Bool)isContainerOpen:(const struct TFENode *)arg1;
- (void)adjustObserverOptions;
- (_Bool)isOpenedResolvedICloudContainer:(const struct TFENode *)arg1;
- (_Bool)closeResolvedICloudContainer:(const struct TFENode *)arg1;
- (_Bool)openResolvedICloudContainer:(const struct TFENode *)arg1;
- (_Bool)closeContainer:(const struct TFENode *)arg1;
- (_Bool)openContainer:(const struct TFENode *)arg1;
- (void)closeTarget;
- (void)openTarget;
- (void)groupChangedForNodes:(const struct TFENodeVector *)arg1 inContainerNode:(const struct TFENode *)arg2;
- (void)noticeGroupChanges:(const struct TGroupChanges *)arg1 firstPopulation:(_Bool)arg2;
- (void)updatePropertiesForNodes:(const vector_614ab7ad *)arg1 inContainerNode:(const struct TFENode *)arg2;
- (void)spotlightAttrSyncComplete:(const struct TGroupedNodes *)arg1 forContainer:(const struct TFENode *)arg2 withOperation:(id)arg3;
- (_Bool)updateNodesGroup:(const struct TGroupedNodes *)arg1 forContainer:(const struct TFENode *)arg2 groupChanges:(struct TGroupChanges *)arg3;
- (void)sortContainerAndRevealSelection:(id)arg1;
- (void)sortAndReloadContainer:(id)arg1;
- (_Bool)mayResortChildrenAfterNameChange;
- (int)updateNeededForNode:(const struct TFENode *)arg1 property:(unsigned long long)arg2;
- (void)reloadNodes:(const struct TFENodeVector *)arg1 forNode:(const struct TFENode *)arg2;
- (void)updateNodes:(const struct TFENodeVector *)arg1 forNode:(const struct TFENode *)arg2;
- (void)showAllExtensionsPrefChanged:(id)arg1;
- (void)syncAllContainers;
- (_Bool)removeItems:(const struct TFENodeVector *)arg1 forNode:(const struct TFENode *)arg2;
- (void)removeAllNodesInContainer:(const struct TFENode *)arg1;
- (_Bool)addItems:(const struct TFENodeVector *)arg1 forNode:(const struct TFENode *)arg2 withOperation:(id)arg3;
- (void)folderContentChanged:(const struct FolderContentChangeDescriptor *)arg1;
- (void)syncWithNodeEvents;
- (void)flushNodeEvents;
- (void)endNodeEventTransaction;
- (void)beginNodeEventTransaction;
- (_Bool)removeItems:(const struct TFENodeVector *)arg1 forContainer:(const struct TFENode *)arg2 groupChanges:(struct TGroupChanges *)arg3;
- (_Bool)addItems:(const struct TGroupedNodes *)arg1 forContainer:(const struct TFENode *)arg2 removeAll:(_Bool)arg3 groupChanges:(struct TGroupChanges *)arg4 withOperation:(id)arg5;
- (_Bool)nodeShouldBePresentedAsGroup:(const struct TFENode *)arg1;
- (_Bool)shouldCloseContainerOnTargetMove:(const struct TFENode *)arg1;
- (void)reloadDataForContainerNode:(const struct TFENode *)arg1;
- (void)reloadData;
- (void)didPerformFirstReload;
- (void)getNodes:(struct TFENodeVector *)arg1 fromIndexSet:(id)arg2 upTo:(unsigned long long)arg3;
- (void)getNodes:(struct TFENodeVector *)arg1 fromArray:(id)arg2 upTo:(unsigned long long)arg3;
- (_Bool)containsNode:(const struct TFENode *)arg1;
- (unsigned long long)indexForNode:(const struct TFENode *)arg1;
- (struct TFENode)nodeAtIndex:(unsigned long long)arg1;
- (_Bool)showingDelayedPopulation;
- (void)configureForDelayedPopulation:(_Bool)arg1;
- (unsigned long long)itemCountForDelayedPopulation;
- (id)viewToCoverForDelayedPopulation;
- (void)configureForNoDocuments:(_Bool)arg1;
- (void)refreshNoDocumentsView;
- (_Bool)showingNoDocumentsUI;
- (_Bool)isShowingICloudDriveContent;
- (void)refreshNodeSettings:(_Bool)arg1;
- (id)viewSettings;
- (void)unbindViewSettings;
- (void)bindViewSettings;
- (void)privateBindSettings;
- (void)performTargetSpecificInitialization;
- (_Bool)startEditingNodeNowOrLater:(const struct TFENode *)arg1 renameOp:(id)arg2;
- (void)handleMagnify:(double)arg1;
- (void)swipeWithEvent:(id)arg1;
- (_Bool)handleKeyDown:(id)arg1 currentKey:(unsigned short *)arg2;
- (_Bool)validateDeleteBackupSnapshot:(id)arg1;
- (_Bool)validateDeleteAllBackups:(id)arg1;
- (_Bool)validateRestoreTo:(id)arg1;
- (void)cmdDeleteBackupSnapshot:(id)arg1;
- (void)cmdDeleteAllBackups:(id)arg1;
- (void)cmdRestoreTo:(id)arg1;
- (void)editTagsForNodes:(const struct TFENodeVector *)arg1 withPopoverBelowView:(id)arg2 verticalInset:(double)arg3;
- (_Bool)validateDeleteTag:(id)arg1;
- (void)cmdDeleteTag:(id)arg1;
- (_Bool)validateToolbarEditTags:(id)arg1;
- (void)cmdToolbarEditTags:(id)arg1;
- (void)cmdEditTags:(id)arg1;
- (_Bool)validateEditTags:(id)arg1;
- (void)cmdRemoveTag:(id)arg1;
- (_Bool)validateRemoveTag:(id)arg1;
- (struct TString)tagNameForNode:(struct TFENode *)arg1;
- (_Bool)validateCleanUpByLabel:(id)arg1;
- (_Bool)validateCleanUpByKind:(id)arg1;
- (_Bool)validateCleanUpByPhysicalSize:(id)arg1;
- (_Bool)validateCleanUpByDateAdded:(id)arg1;
- (_Bool)validateCleanUpByCreationDate:(id)arg1;
- (_Bool)validateCleanUpByModDate:(id)arg1;
- (_Bool)validateCleanUpByLastOpenDate:(id)arg1;
- (_Bool)validateCleanUpByDate:(id)arg1;
- (void)cmdAddToSidebar:(id)arg1;
- (void)cmdGroupAsFolder:(id)arg1;
- (_Bool)validateGroupAsFolder:(id)arg1;
- (_Bool)shouldGroupAsFolderOpenInNewWindow:(const struct TFENode *)arg1;
- (void)openNodes:(const struct TFENodeVector *)arg1 windowOptions:(id)arg2 searchString:(const struct TString *)arg3 openFlags:(struct OpenFlags)arg4;
- (_Bool)validateOpenParentCommon:(id)arg1;
- (_Bool)handleValidateOpen:(const struct TFENodeVector *)arg1;
- (_Bool)validateMoveItemsHere:(id)arg1;
- (_Bool)commonValidatePaste:(SEL)arg1 itemCount:(unsigned long long *)arg2;
- (_Bool)validateCut:(id)arg1;
- (_Bool)validateKeepArrangedBy:(id)arg1;
- (_Bool)validateDeselectAll:(id)arg1;
- (_Bool)validateSelectAll:(id)arg1;
- (void)finderActionCompleted:(id)arg1;
- (BOOL)validateToolbarItem:(id)arg1;
- (_Bool)quickLookShouldShowOpenButtonForNode:(const struct TFENode *)arg1;
- (id)zoomImageForNode:(const struct TFENode *)arg1 contentRect:(struct CGRect *)arg2;
- (void)ensureCGSurfaceUpdateOnDraw:(_Bool)arg1;
- (_Bool)checkForInvalidDropItems:(struct TFENodeVector *)arg1;
- (id)draggedFolderIsAcceptable:(const struct TFENode *)arg1;
- (_Bool)canAllNodesBeOpened:(const struct TFENodeVector *)arg1;
- (void)springNowWithNoSpringController;
- (void)reloadDataAfterGrouping;
- (_Bool)performDrop;
- (void)getOriginalGroupsDraggedFrom:(const struct TFENodeVector *)arg1 groupNodes:(struct TFENodeVector *)arg2;
- (_Bool)performDropAndGetAction:(TRef_9e01da98 *)arg1;
- (_Bool)allowsDraggingToMoveFilesOut;
- (id)dragFlockingImageComponentsForNode:(const struct TFENode *)arg1 dropTargetView:(id)arg2;
- (struct CGSize)dragFlockingFrameSizeForDropTargetView:(id)arg1;
- (id)dragFlockIconImageForNode:(const struct TFENode *)arg1 inView:(id)arg2;
- (id)dragFlockIconImageForNode:(const struct TFENode *)arg1 atIconSize:(double)arg2;
- (id)dragFlockSelectionImageForNode:(const struct TFENode *)arg1 inFrame:(struct CGRect *)arg2;
- (id)dragFlockLabelImageForNode:(const struct TFENode *)arg1 inFrame:(struct CGRect *)arg2;
- (id)dragFlockLabelImageForNode:(const struct TFENode *)arg1 inFrame:(struct CGRect *)arg2 inView:(id)arg3;
- (id)beginDraggingNodes:(const struct TFENodeVector *)arg1 mouseDownEvent:(id)arg2;
- (long long)initialFlockingFormation;
- (double)iconSize;
- (void)dragImage:(id)arg1 offset:(struct CGSize)arg2 event:(id)arg3 pasteboard:(id)arg4 source:(id)arg5;
- (void)getGlobalDragItemBounds:(map_7cee3aba *)arg1 forNodes:(const struct TFENodeVector *)arg2;
- (void)unregisterContainerWithNodeKeyCache:(const struct TFENode *)arg1;
- (void)registerContainerWithNodeKeyCache:(const struct TFENode *)arg1;

// Remaining properties
@property(readonly, nonatomic) unsigned long long itemCount; // @dynamic itemCount;

@end

