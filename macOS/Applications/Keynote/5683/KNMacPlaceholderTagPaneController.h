//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TMAInspectorPaneController.h"

#import "KNPlaceholderTagHelperDelegate-Protocol.h"
#import "TSKChangeSourceObserver-Protocol.h"

@class KNMasterSlide, KNPlaceholderTagHelper, NSButton, NSString, NSTextField, TSDDrawableEditor, TSDDrawableInfo, TSDEditorController;

@interface KNMacPlaceholderTagPaneController : TMAInspectorPaneController <TSKChangeSourceObserver, KNPlaceholderTagHelperDelegate>
{
    TSDDrawableEditor *_drawableEditor;
    KNPlaceholderTagHelper *_placeholderTagHelper;
    NSString *_tagForSelectedInfo;
    BOOL _tagIsDefinedForPlaceholder;
    BOOL _shouldEnableControls;
    NSTextField *_tagLabel;
    NSTextField *_tagTextbox;
    NSButton *_tagCheckbox;
}

+ (id)keyPathsForValuesAffectingTagCheckboxToolTip;
+ (id)nibName;
@property(retain, nonatomic) NSButton *tagCheckbox; // @synthesize tagCheckbox=_tagCheckbox;
@property(retain, nonatomic) NSTextField *tagTextbox; // @synthesize tagTextbox=_tagTextbox;
@property(retain, nonatomic) NSTextField *tagLabel; // @synthesize tagLabel=_tagLabel;
@property(readonly, nonatomic) BOOL shouldEnableControls; // @synthesize shouldEnableControls=_shouldEnableControls;
- (void).cxx_destruct;
- (BOOL)p_shouldEnableControlsForInfo:(id)arg1;
- (BOOL)p_shouldEnableControlsForCanvasSelection:(id)arg1;
@property(readonly, nonatomic) TSDDrawableInfo *p_selectedDrawableInfo;
@property(readonly, nonatomic) KNMasterSlide *p_currentMasterSlide;
- (id)editorControllerForPlaceholderTagHelper:(id)arg1;
@property(readonly, nonatomic) TSDEditorController *p_editorController;
@property(readonly, nonatomic) NSString *tagCheckboxToolTip;
- (void)setTagIsDefinedForPlaceholder:(BOOL)arg1;
- (BOOL)tagIsDefinedForPlaceholder;
- (void)processChanges:(id)arg1 forChangeSource:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)p_presentTagConflictAlertForTag:(id)arg1;
- (void)controlTextDidEndEditing:(id)arg1;
- (id)p_titleForInfo:(id)arg1;
- (void)p_setInputsHidden:(BOOL)arg1;
- (void)p_updateCheckboxTitle;
- (void)p_updateTagTextboxAndLabel;
- (void)p_updateUI;
- (void)setRepresentedObject:(id)arg1;
- (void)dealloc;
- (void)loadView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

