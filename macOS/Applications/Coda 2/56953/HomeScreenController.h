//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "SidebarViewController.h"

#import "CollectionViewDelegateAdditions-Protocol.h"

@class HomeScreenCollectionView, NSButton, PCGradientView, PCShadowedTextField;

__attribute__((visibility("hidden")))
@interface HomeScreenController : SidebarViewController <CollectionViewDelegateAdditions>
{
    HomeScreenCollectionView *iHomeScreenCollectionView;
    NSButton *iEditButton;
    PCGradientView *iCustomizeDockView;
    PCShadowedTextField *iCustomizeDockViewPrompt;
    BOOL iCustomizing;
}

@property(getter=isCustomizing) BOOL customizing; // @synthesize customizing=iCustomizing;
- (BOOL)validateMenuItem:(id)arg1;
- (void)updateWiggleAnimationForCustomization;
- (void)viewAnimationCompleted:(id)arg1 wasCanceled:(BOOL)arg2;
- (void)setPromptViewVisible:(BOOL)arg1;
- (void)customizeSidebarDock:(id)arg1;
- (void)addOrRemoveSidebarItemButtonAction:(id)arg1;
- (void)addOrRemoveSidebarItem:(id)arg1;
- (void)gotoSidebarView:(id)arg1;
- (id)displayName;
- (id)sidebarIdentifier;
- (id)maskImageName;
- (id)initialFirstResponder;
- (id)lastKeyView;
- (id)firstKeyView;
- (BOOL)collectionView:(id)arg1 writeItemsAtIndexes:(id)arg2 toPasteboard:(id)arg3;
- (void)collectionView:(id)arg1 createdCollectionViewItem:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)unloadView;
- (void)loadView;

@end

