//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSSearchField.h>

#import "IPXSearchFieldEditorDelegate-Protocol.h"

@class NSString;
@protocol IPXSearchFieldDelegate;

@interface IPXSearchField : NSSearchField <IPXSearchFieldEditorDelegate>
{
    struct {
        char becameFocused;
        char resignedFocused;
        char stringHasChanged;
        char selectPreviousResult;
        char selectCurrentResult;
        char selectNextResult;
        char allowEmptySelection;
        char cancelSearch;
        char isActive;
        char isInactive;
        char accessibilitySharedFocusElements;
        char targetCollapsedWidth;
    } _delegateRespondsTo;
    BOOL _selectsAllTextOnBecomingFirstResponder;
    BOOL _sendsTextHasChangedForMarkedText;
}

+ (Class)cellClass;
@property BOOL sendsTextHasChangedForMarkedText; // @synthesize sendsTextHasChangedForMarkedText=_sendsTextHasChangedForMarkedText;
@property BOOL selectsAllTextOnBecomingFirstResponder; // @synthesize selectsAllTextOnBecomingFirstResponder=_selectsAllTextOnBecomingFirstResponder;
- (id)accessibilitySharedFocusElements;
- (void)textViewDidResignFirstResponder:(id)arg1;
- (void)textViewDidBecomeFirstResponder:(id)arg1;
- (struct CGRect)rectForSearchTextWhenCentered:(BOOL)arg1;
- (BOOL)textView:(id)arg1 doCommandBySelector:(SEL)arg2;
- (void)textViewDidChangeSelection:(id)arg1;
- (void)textDidEndEditing:(id)arg1;
- (void)textDidChange:(id)arg1;
- (BOOL)textView:(id)arg1 shouldChangeTextInRanges:(id)arg2 replacementStrings:(id)arg3;
- (void)mouseDown:(id)arg1;
- (BOOL)becomeFirstResponder;
@property BOOL toolbarMode;
- (void)viewDidMoveToSuperview;
@property __weak id <IPXSearchFieldDelegate> delegate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

