//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CollectorViewControllerDelegate-Protocol.h"
#import "DelegateViewDelegate-Protocol.h"
#import "IXKeyViewLoopDelegate-Protocol.h"
#import "PageViewControllerProtocol-Protocol.h"
#import "QuickLookPanelDelegate-Protocol.h"
#import "SourceObserver-Protocol.h"
#import "SummaryViewControllerDelegate-Protocol.h"
#import "TreePieViewControllerDelegate-Protocol.h"
#import "UserInputBlockerProtocol-Protocol.h"

@class CanBeCollectedItemVisitor, CanPreviewItemVisitor, ClickItemVisitor, CollectorViewController, DirectoryItem, IXButton, NSArray, NSMenuItem, NSMutableArray, NSString, NSView, NormalColorScheme, PathItemVisitor, ReportToolbarHostedViewItem, ScopeBarViewController, SelectionController, SourceController, SummaryViewController, ToolbarHostedViewItem, TreePieViewController;
@protocol ColorSchemeProtocol;

@interface ReportPageController : NSObject <TreePieViewControllerDelegate, SummaryViewControllerDelegate, CollectorViewControllerDelegate, PageViewControllerProtocol, QuickLookPanelDelegate, UserInputBlockerProtocol, IXKeyViewLoopDelegate, SourceObserver, DelegateViewDelegate>
{
    SelectionController *_selectionController;
    PathItemVisitor *_pathItemVisitor;
    CanPreviewItemVisitor *_canPreviewItemVisitor;
    CanBeCollectedItemVisitor *_canBeCollectedItemVisitor;
    ClickItemVisitor *_clickItemVisitor;
    NSMutableArray *_expandedPackages;
    struct CGSize _prevSize;
    IXButton *_pathButton;
    IXButton *_historyButton;
    ReportToolbarHostedViewItem *_titlebarItem;
    BOOL _isContextMenuOnSummaryTitle;
    unsigned long long _blockUserInputCount;
    id <ColorSchemeProtocol> _colorScheme;
    NormalColorScheme *_normalColorScheme;
    BOOL _isEnabled;
    BOOL _waitingMouseMoveAfterTab;
    BOOL _isTopmostDirAvailable;
    SourceController *_sourceController;
    NSView *_reportPageView;
    TreePieViewController *_treePieViewController;
    SummaryViewController *_summaryViewController;
    CollectorViewController *_collectorViewController;
    ScopeBarViewController *_scopeBarViewController;
    NSView *_backgroundView;
    unsigned long long _draggingItemsMode;
    long long _draggingCollectableStatus;
    NSArray *_expandedPackagesToBeCollapsed;
    NSMenuItem *_summaryDebugMenu;
}

+ (id)singleton;
@property(nonatomic) __weak NSMenuItem *summaryDebugMenu; // @synthesize summaryDebugMenu=_summaryDebugMenu;
@property(readonly, nonatomic) IXButton *historyButton; // @synthesize historyButton=_historyButton;
@property(readonly, nonatomic) IXButton *pathButton; // @synthesize pathButton=_pathButton;
@property(retain, nonatomic) NSArray *expandedPackagesToBeCollapsed; // @synthesize expandedPackagesToBeCollapsed=_expandedPackagesToBeCollapsed;
@property(nonatomic) long long draggingCollectableStatus; // @synthesize draggingCollectableStatus=_draggingCollectableStatus;
@property(nonatomic) unsigned long long draggingItemsMode; // @synthesize draggingItemsMode=_draggingItemsMode;
@property(nonatomic, setter=setTopmostDirAvailable:) BOOL isTopmostDirAvailable; // @synthesize isTopmostDirAvailable=_isTopmostDirAvailable;
@property(nonatomic) BOOL waitingMouseMoveAfterTab; // @synthesize waitingMouseMoveAfterTab=_waitingMouseMoveAfterTab;
@property(nonatomic) __weak NSView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) ScopeBarViewController *scopeBarViewController; // @synthesize scopeBarViewController=_scopeBarViewController;
@property(retain, nonatomic) CollectorViewController *collectorViewController; // @synthesize collectorViewController=_collectorViewController;
@property(retain, nonatomic) SummaryViewController *summaryViewController; // @synthesize summaryViewController=_summaryViewController;
@property(retain, nonatomic) TreePieViewController *treePieViewController; // @synthesize treePieViewController=_treePieViewController;
@property(retain, nonatomic) NSView *reportPageView; // @synthesize reportPageView=_reportPageView;
@property(nonatomic, setter=setEnabled:) BOOL isEnabled; // @synthesize isEnabled=_isEnabled;
@property(retain, nonatomic) SourceController *sourceController; // @synthesize sourceController=_sourceController;
@property(readonly, nonatomic) ToolbarHostedViewItem *titlebarItem; // @synthesize titlebarItem=_titlebarItem;
- (void).cxx_destruct;
- (void)profileManipulationAnimation:(id)arg1;
- (void)makeScreenshot:(id)arg1;
- (void)rescanCurrentFolder:(id)arg1;
- (void)rescanSourceAsAdmin:(id)arg1;
- (void)openHelpForReservedSpace:(id)arg1;
- (void)openHelpForPurgeableSpace:(id)arg1;
- (void)openHelpForHiddenSpace:(id)arg1;
- (void)openMigrationInfoForPurgeable:(id)arg1;
- (void)openMigrationInfoForRestricted:(id)arg1;
- (void)openMigrationInfoForHiddenSpace:(id)arg1;
- (void)showMoreInfoForItem:(id)arg1;
- (id)specialItemButtonDescriptionForButtonAction:(unsigned long long)arg1 itemDisplayName:(id)arg2 sidebarOrContextMenu:(BOOL)arg3 outButtonStyles:(id *)arg4;
- (id)specialItemContextMenuButtonCommandForItem:(id)arg1;
- (void)collapseSmallerItems:(id)arg1;
- (void)expandItemDependingOnType:(id)arg1 sender:(id)arg2;
- (void)emulateCollectorClick;
- (BOOL)collectorViewControllerWantsIsViewHidden:(id)arg1;
- (BOOL)collectorViewController:(id)arg1 wantsIsDragging:(BOOL)arg2;
- (BOOL)collectorViewController:(id)arg1 userDidRequestToCollectItemWithDraggingInfo:(id)arg2;
- (void)collectorViewControllerUserDidRequestToUncollectItem:(id)arg1;
- (void)collectorViewControllerUserDidClickStopDeletionButton:(id)arg1;
- (void)collectorViewControllerUserDidClickStopCountdownButton:(id)arg1;
- (void)collectorViewControllerUserDidClickMigrateButton:(id)arg1;
- (void)collectorViewControllerUserDidClickStartCountdownButton:(id)arg1;
- (void)collectorViewControllerDrawerWillExpand:(id)arg1;
- (void)collectorViewControllerDrawerWillCollapse:(id)arg1;
- (id)summaryViewControllerWantsButtonDescription:(id)arg1 buttonAction:(unsigned long long)arg2 outButtonStyles:(id *)arg3;
- (id)summaryViewControllerWantsCurrentDirectory:(id)arg1;
- (BOOL)summaryViewControllerWantsIsDragging:(id)arg1;
- (id)summaryViewControllerWantsSelectedItem:(id)arg1;
- (id)summaryViewControllerWantsCurrentTitleItem:(id)arg1;
- (void)summaryViewController:(id)arg1 userWillRequestContextMenuOnTitle:(BOOL)arg2;
- (void)treePieViewControllerDidRequestToResetExpandedPackages:(id)arg1;
- (void)treePieViewControllerNavigationDidComplete:(id)arg1;
- (void)reportViewControllerWantsUnblockUserInput:(id)arg1;
- (void)reportViewControllerWantsBlockUserInput:(id)arg1;
- (void)reportViewControllerWantsToRefreshMouse:(id)arg1;
- (void)reportViewControllerMouseDidMove:(id)arg1;
- (void)reportViewController:(id)arg1 userDidStartDraggingItem:(id)arg2 initialWindowLocation:(struct CGPoint)arg3 event:(id)arg4;
- (void)reportViewController:(id)arg1 userDidUncheckItem:(id)arg2;
- (void)reportViewController:(id)arg1 userDidCheckItem:(id)arg2;
- (void)reportViewController:(id)arg1 userDidClickItem:(id)arg2;
- (void)reportViewController:(id)arg1 userDidCommandClickItem:(id)arg2;
- (void)reportViewControllerUserWillRequestContextMenu:(id)arg1;
- (void)reportViewControllerUserDidResetSelection:(id)arg1;
- (void)reportViewController:(id)arg1 userDidSelectItem:(id)arg2;
- (void)windowDidResignMain;
- (void)windowDidBecomeMain;
- (void)deletionIncompleteInTableDidDismiss;
- (void)deletionProgressDidUpdate:(id)arg1 progress:(double)arg2 progressPhase:(unsigned char)arg3;
- (void)deletionDidFinish:(id)arg1;
- (void)stopDeletion:(id)arg1;
- (void)countdownDidTick:(id)arg1;
- (void)countdownDidStop:(id)arg1;
- (void)countdownDidStart:(id)arg1;
- (void)stopCountdown:(id)arg1;
- (void)startCountdown:(id)arg1;
@property(readonly, nonatomic) BOOL isUserInputBlocked;
- (void)unblockUserInput;
- (void)blockUserInput;
- (void)volumeSourceSliceDidChange:(id)arg1;
- (void)volumeSourceSpaceSummaryDidChange:(id)arg1;
- (void)directorySourceIsParentVolumeSourceUnmountedDidChange:(id)arg1;
- (void)directorySourceIsDirectoryLockedDidChange:(id)arg1;
- (void)directorySourceIsFullyRestrictedDidChange:(id)arg1;
- (void)directorySourceIsRestrictedDidChange:(id)arg1;
- (void)sourceIsUnmountedDidChange:(id)arg1;
- (void)sourcePathDidChange:(id)arg1 iconDidChange:(BOOL)arg2 displayNameDidChange:(BOOL)arg3;
- (void)sourceIsStarredDidChange:(id)arg1;
- (void)sourceDisplayNameDidChange:(id)arg1;
- (void)sourceTopmostDirectoryDidChange:(id)arg1;
- (void)sourceDidUnmount;
- (void)sourceDidMount;
- (id)animationItemsForSlideAnimationOffOrOn:(BOOL)arg1 isAlreadySliding:(BOOL)arg2;
- (void)didSlide:(BOOL)arg1;
- (void)willSlide:(BOOL)arg1;
- (void)resetSourceControllerIsReplacing:(BOOL)arg1;
- (void)redrawView;
- (void)updateLayoutWithResizeAxis:(unsigned long long)arg1 forceUpdate:(BOOL)arg2;
- (struct CGSize)calculateRecommendedViewSizeForSize:(struct CGSize)arg1 minSize:(struct CGSize)arg2 maxSize:(struct CGSize)arg3 resizeAxis:(unsigned long long)arg4 isFullScreen:(BOOL)arg5;
@property(readonly, nonatomic) NSView *firstResponderView;
- (id)window;
@property(nonatomic) struct CGRect viewFrame;
@property(readonly, nonatomic) NSView *view;
@property(nonatomic, setter=setViewHidden:) BOOL isViewHidden;
- (void)deleteCollected:(id)arg1;
- (void)moveAllToCollector:(id)arg1;
- (void)removeAllFromCollector:(id)arg1;
- (void)removeFromCollector:(id)arg1;
- (void)removeItemFromCollector:(id)arg1;
- (void)moveToCollector:(id)arg1;
- (void)moveItemToCollector:(id)arg1 viewController:(id)arg2;
- (BOOL)isDraggingItemsToUncollect;
- (BOOL)isDraggingItemsToCollect;
- (void)dragSortedItems:(id)arg1 fromSender:(id)arg2 initialWindowLocation:(struct CGPoint)arg3 event:(id)arg4;
- (void)updateSummaryViewOnManipulationOfItems:(id)arg1;
- (void)slideItems:(id)arg1 fromScreenLocation:(struct CGPoint)arg2 toScreenLocation:(struct CGPoint)arg3;
- (void)draggedImage:(id)arg1 endedAt:(struct CGPoint)arg2 operation:(unsigned long long)arg3;
- (void)draggedImage:(id)arg1 movedTo:(struct CGPoint)arg2;
- (void)draggedImage:(id)arg1 beganAt:(struct CGPoint)arg2;
- (id)dragImageProviderForItem:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (BOOL)isMenuItemFromSummaryContextMenu:(id)arg1;
- (BOOL)isMenuItemFromContextMenu:(id)arg1;
- (id)getSelectedItemForMenuItem:(id)arg1 includingCollector:(BOOL)arg2;
- (void)printAllHardLinks:(id)arg1;
- (void)printCountOfObjects:(id)arg1;
- (void)showPackageContents:(id)arg1;
- (void)resetExpandedPackages;
- (void)addExpandedPackages:(id)arg1;
- (id)findAnimatedPackagesToBeCollapsed:(id)arg1;
- (id)calculatePackagesToBeExpandedForItem:(id)arg1;
- (id)calculateExpandedPackagesToBeCollapsed;
- (void)selectAll:(id)arg1;
- (void)showInFinder:(id)arg1;
- (void)expandItem:(id)arg1;
- (void)goUp:(id)arg1;
- (void)goForward:(id)arg1;
- (void)goBack:(id)arg1;
- (void)navigateByPath:(id)arg1;
- (void)view:(id)arg1 swipeWithEvent:(id)arg2;
- (void)view:(id)arg1 magnifyWithEvent:(id)arg2;
- (void)view:(id)arg1 scrollWheel:(id)arg2;
- (void)mouseDownDidArrive:(id)arg1;
- (void)mouseDidMove;
- (void)refreshMouse;
- (void)flushMouseEvents;
- (BOOL)view:(id)arg1 keyDown:(id)arg2;
- (BOOL)keyViewLoopShouldProcessSpaceKey:(id)arg1;
- (void)keyViewLoopTabKeyDidPress:(id)arg1;
- (void)keyViewLoopMouseDidMove:(id)arg1;
- (void)quickLookPanelWillClose:(id)arg1;
- (struct CGRect)quickLookPanelWantsSourceFrame:(id)arg1;
- (void)previewPointedItem:(id)arg1;
- (BOOL)spaceKeyWillPreview;
@property(retain, nonatomic) DirectoryItem *currentDirectory;
- (void)doSetCurrentDirectory;
- (void)hideErrorScopeBar;
- (void)showErrorScopeBarMessage:(id)arg1 buttonDescription:(id)arg2;
- (long long)checkItemAvailable:(id)arg1;
- (void)refreshItemViews;
- (void)stopRefreshingItemViews;
- (void)updateDeleteButton;
- (BOOL)shouldDeleteButtonBeDisabled;
- (void)updatePathControl;
- (void)updateNavigationHistoryButtons;
- (id)navigationHistory;
- (void)setNormalColorScheme;
- (void)setColorScheme:(id)arg1;
- (void)setCheckingItemsEnabled:(BOOL)arg1;
- (BOOL)isCheckingItemsEnabled;
- (void)awakeFromNib;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

