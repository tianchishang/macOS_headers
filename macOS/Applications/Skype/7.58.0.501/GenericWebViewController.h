//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "WebFrameLoadDelegate-Protocol.h"
#import "WebPolicyDelegate-Protocol.h"
#import "WebResourceLoadDelegate-Protocol.h"
#import "WebUIDelegate-Protocol.h"

@class BAExternal, GenericWebErrorViewController, GenericWebView, NSString, NSURL;

@interface GenericWebViewController : NSViewController <WebFrameLoadDelegate, WebResourceLoadDelegate, WebPolicyDelegate, WebUIDelegate>
{
    BOOL _ownsWindowTitle;
    BOOL _runsInOwnWindow;
    BOOL _loading;
    BOOL _stopped;
    BOOL _canReload;
    GenericWebView *_webView;
    BAExternal *_browserAPIExternal;
    NSURL *_initialRequestURL;
    NSURL *_finishURL;
    GenericWebErrorViewController *_errorViewController;
    unsigned long long _resourceCount;
}

+ (void)initialize;
@property(nonatomic) unsigned long long resourceCount; // @synthesize resourceCount=_resourceCount;
@property(retain) GenericWebErrorViewController *errorViewController; // @synthesize errorViewController=_errorViewController;
@property(retain) NSURL *finishURL; // @synthesize finishURL=_finishURL;
@property(retain, nonatomic) NSURL *initialRequestURL; // @synthesize initialRequestURL=_initialRequestURL;
@property(retain) BAExternal *browserAPIExternal; // @synthesize browserAPIExternal=_browserAPIExternal;
@property BOOL canReload; // @synthesize canReload=_canReload;
@property(getter=isStopped) BOOL stopped; // @synthesize stopped=_stopped;
@property(getter=isLoading) BOOL loading; // @synthesize loading=_loading;
@property BOOL runsInOwnWindow; // @synthesize runsInOwnWindow=_runsInOwnWindow;
@property BOOL ownsWindowTitle; // @synthesize ownsWindowTitle=_ownsWindowTitle;
@property(retain, nonatomic) GenericWebView *webView; // @synthesize webView=_webView;
- (void).cxx_destruct;
- (void)webView:(id)arg1 addMessageToConsole:(id)arg2;
- (id)webView:(id)arg1 createWebViewWithRequest:(id)arg2;
- (BOOL)webView:(id)arg1 runJavaScriptConfirmPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3;
- (void)webView:(id)arg1 runJavaScriptAlertPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3;
- (id)webView:(id)arg1 contextMenuItemsForElement:(id)arg2 defaultMenuItems:(id)arg3;
- (unsigned long long)webView:(id)arg1 dragDestinationActionMaskForDraggingInfo:(id)arg2;
- (void)webView:(id)arg1 unableToImplementPolicyWithError:(id)arg2 frame:(id)arg3;
- (BOOL)isURLWhiteListed:(id)arg1;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;
- (void)webView:(id)arg1 decidePolicyForNewWindowAction:(id)arg2 request:(id)arg3 newFrameName:(id)arg4 decisionListener:(id)arg5;
- (BOOL)isCriticalResourceURL:(id)arg1;
- (void)webView:(id)arg1 resource:(id)arg2 didFailLoadingWithError:(id)arg3 fromDataSource:(id)arg4;
- (id)webView:(id)arg1 identifierForInitialRequest:(id)arg2 fromDataSource:(id)arg3;
- (void)delayedRedirectionToURLRequest:(id)arg1;
- (void)delayedStopLoading:(id)arg1;
- (id)JSAPIRedirectionURLRequestWithRequest:(id)arg1;
- (id)webView:(id)arg1 resource:(id)arg2 willSendRequest:(id)arg3 redirectResponse:(id)arg4 fromDataSource:(id)arg5;
- (void)webView:(id)arg1 willPerformClientRedirectToURL:(id)arg2 delay:(double)arg3 fireDate:(id)arg4 forFrame:(id)arg5;
- (void)scheduleDelayedJSAPIRedirectionWithRequest:(id)arg1;
- (void)webView:(id)arg1 didReceiveServerRedirectForProvisionalLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 didClearWindowObject:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 didFailProvisionalLoadWithError:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didReceiveTitle:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didStartProvisionalLoadForFrame:(id)arg2;
- (void)handleJavascriptError;
- (void)copyURLCmd:(id)arg1;
- (void)closeWebView;
- (void)delayedHandleNetworkError:(id)arg1;
- (void)resourceLoadingFailedWithError:(id)arg1 url:(id)arg2;
- (void)frameLoadingFailedWithError:(id)arg1 url:(id)arg2;
@property(retain, nonatomic) NSString *errorViewDebugInfo;
- (void)hideErrorView;
- (void)showErrorViewWithDebugInfo:(id)arg1;
- (void)handleFinishURL:(id)arg1;
- (BOOL)isFinishURL:(id)arg1;
- (void)showInspector:(id)arg1;
@property(readonly, nonatomic) NSString *sourceURLString;
@property(readonly, nonatomic) NSString *sourceHTML;
- (BOOL)isImageURL:(id)arg1;
- (void)stopLoading;
- (void)loadURL:(id)arg1;
- (void)loadString:(id)arg1 basePath:(id)arg2;
- (void)loadRequest:(id)arg1;
- (void)attachBrowserAPIToWindowScript:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (void)loadView;
- (void)disconnectDelegates;
- (void)setupErrorView;
- (void)setupWebView;
- (Class)errorViewControllerClass;
- (Class)webViewClass;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

