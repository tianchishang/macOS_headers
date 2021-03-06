//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Cocoa/NSView.h>

@class NSImageView, NSMutableDictionary, NSTextField;

@interface TMAFirstLaunchFeatureItemView : NSView
{
    NSImageView *_imageView;
    NSTextField *_headingTextField;
    NSTextField *_captionTextField;
    NSMutableDictionary *_headingStringAttributes;
    NSMutableDictionary *_captionStringAttributes;
    double _captionFontSize;
    double _headingTextFieldHeight;
    double _captionTextFieldHeight;
    BOOL _needsUpdateSubviews;
}

@property(nonatomic) double captionFontSize;
- (void)setCaptionString:(id)arg1;
- (void)setHeadingString:(id)arg1;
- (void)setImage:(id)arg1;
- (id)captionStringAttributes;
- (id)headingStringAttributes;
- (double)labelWidth;
- (double)labelOffsetX;
- (void)setNeedsUpdateSubviews;
- (void)updateSubviewsIfNeeded;
- (void)viewWillDraw;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

