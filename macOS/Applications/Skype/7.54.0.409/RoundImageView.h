//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "EnhancedImageView.h"

@class NSColor;

@interface RoundImageView : EnhancedImageView
{
    NSColor *_protectionColor;
}

+ (struct CGSize)drawingInset;
@property(copy) NSColor *protectionColor; // @synthesize protectionColor=_protectionColor;
- (void).cxx_destruct;
- (BOOL)acceptsFirstResponder;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawFocusRingMask;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)commonInit;

@end

