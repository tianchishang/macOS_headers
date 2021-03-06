//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSColor, NSFont, NSLayoutManager, NSMutableArray, NSString, NSTextContainer, NSTextStorage, NSTrackingArea;
@protocol DFLinkLabelDelegate;

@interface DFLinkLabel : NSView
{
    NSFont *_font;
    NSColor *_textColor;
    NSTextStorage *_text;
    NSTextContainer *_textContainer;
    NSLayoutManager *_textLayoutManager;
    NSTrackingArea *_trackingArea;
    NSMutableArray *_linkRanges;
    NSMutableArray *_linkRectArrays;
    BOOL _isCursorSet;
    NSString *_stringValue;
    id <DFLinkLabelDelegate> _delegate;
}

@property(nonatomic) id <DFLinkLabelDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
- (unsigned long long)hitTestLinkAtPoint:(struct CGPoint)arg1;
- (void)resetCursorRects;
- (void)updateTrackingAreas;
- (void)mouseUp:(id)arg1;
- (struct CGPoint)locationFromEvent:(id)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)appendTextWithPart:(id)arg1 attributes:(id)arg2;
- (BOOL)isFlipped;
- (void)dealloc;
- (id)initWithTextField:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

