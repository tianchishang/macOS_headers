//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSButton.h>

@class NSTrackingArea, NSUUID;

@interface ICTableColumnRowButton : NSButton
{
    BOOL _isColumn;
    BOOL _isLTR;
    NSUUID *_columnOrRowIdentifier;
    NSButton *_disclosureButton;
    NSTrackingArea *_mouseTrackingArea;
}

@property(retain, nonatomic) NSTrackingArea *mouseTrackingArea; // @synthesize mouseTrackingArea=_mouseTrackingArea;
@property(readonly, nonatomic) NSButton *disclosureButton; // @synthesize disclosureButton=_disclosureButton;
@property(readonly, nonatomic) BOOL isLTR; // @synthesize isLTR=_isLTR;
@property(readonly, nonatomic) BOOL isColumn; // @synthesize isColumn=_isColumn;
@property(retain, nonatomic) NSUUID *columnOrRowIdentifier; // @synthesize columnOrRowIdentifier=_columnOrRowIdentifier;
- (void).cxx_destruct;
- (BOOL)accessibilityPerformPress;
- (id)menuForEvent:(id)arg1;
- (void)cursorUpdate:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)updateTrackingAreas;
- (struct CGRect)hitRect;
- (id)hitTest:(struct CGPoint)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)setState:(long long)arg1;
- (void)layout;
- (id)initAsColumn:(BOOL)arg1 isLeftToRight:(BOOL)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

