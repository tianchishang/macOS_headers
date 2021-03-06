//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MailDimmingWindowDelegate-Protocol.h"
#import "NSAnimationDelegate-Protocol.h"

@class CALayer, MailWindowShadowLayer, MessageViewer, ModalDimmingWindow, NSString, NSWindow;

@interface FullScreenWindowController : NSObject <NSAnimationDelegate, MailDimmingWindowDelegate>
{
    MessageViewer *_messageViewer;
    struct CGImage *_mainWindowNonFullScreenSnapshot;
    struct CGImage *_modalWindowNonFullScreenSnapshot;
    long long _activeAnimationType;
    ModalDimmingWindow *_modalDimmingWindow;
    NSWindow *_coverExitAnimationWindow;
    CALayer *_mainWindowAnimationLayer;
    CALayer *_modalWindowAnimationLayer;
    MailWindowShadowLayer *_mainShadowLayer;
    MailWindowShadowLayer *_modalShadowLayer;
    struct CGRect _nonFullScreenWindowFrame;
}

+ (void)waitForFullScreenSpaceSwitchIfNeeded;
+ (BOOL)isFrontmostMessageViewerInFullScreen;
+ (BOOL)preventCreationOfViewerOfClass:(Class)arg1;
@property(nonatomic) struct CGRect nonFullScreenWindowFrame; // @synthesize nonFullScreenWindowFrame=_nonFullScreenWindowFrame;
@property(retain, nonatomic) MailWindowShadowLayer *modalShadowLayer; // @synthesize modalShadowLayer=_modalShadowLayer;
@property(retain, nonatomic) MailWindowShadowLayer *mainShadowLayer; // @synthesize mainShadowLayer=_mainShadowLayer;
@property(retain, nonatomic) CALayer *modalWindowAnimationLayer; // @synthesize modalWindowAnimationLayer=_modalWindowAnimationLayer;
@property(retain, nonatomic) CALayer *mainWindowAnimationLayer; // @synthesize mainWindowAnimationLayer=_mainWindowAnimationLayer;
@property(retain, nonatomic) NSWindow *coverExitAnimationWindow; // @synthesize coverExitAnimationWindow=_coverExitAnimationWindow;
@property(retain, nonatomic) ModalDimmingWindow *modalDimmingWindow; // @synthesize modalDimmingWindow=_modalDimmingWindow;
@property(nonatomic) long long activeAnimationType; // @synthesize activeAnimationType=_activeAnimationType;
- (void).cxx_destruct;
- (void)dimmingWindowClicked;
- (void)_exitAnimationFinished:(id)arg1;
- (void)startExitAnimationWithDuration:(double)arg1;
- (void)_animateModalWindow:(id)arg1;
- (void)_animateMainWindow;
- (id)prepareExitAnimation;
- (struct CGImage *)_newModalWindowSnapshot:(id)arg1;
- (void)_animateModalWindow:(id)arg1 minimized:(BOOL)arg2;
- (void)resizeModalWindowForFullScreenSplit:(id)arg1;
- (void)restoreMinimizedModalWindow:(id)arg1;
- (void)minimizeModalWindow:(id)arg1;
- (id)appearanceTimingFunction;
- (void)_animateModalWindowSend:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_animateModalWindowClose:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_animateModalWindowOpen:(id)arg1;
- (void)windowWillExitFullScreen;
- (void)windowWillEnterFullScreen;
- (void)_setupDimmingWindow;
- (void)_cleanUpAfterModalWindowClose;
- (void)_closeModalWindow:(id)arg1;
- (void)_modalWindowWillClose:(id)arg1;
- (struct CGRect)modalWindowRectWithParentWindow:(id)arg1;
- (void)_prepareModalWindowForNonFullScreen:(id)arg1;
- (double)_titleBarHeight;
- (void)prepareWindowForFullScreen:(id)arg1;
- (void)presentModalWindow:(id)arg1;
- (void)closeModalWindow:(id)arg1 forcibly:(BOOL)arg2 animate:(BOOL)arg3 animationType:(long long)arg4 completion:(CDUnknownBlockType)arg5;
- (BOOL)_isFullScreen;
- (id)_parentWindow;
@property(nonatomic) __weak MessageViewer *messageViewer;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

