//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Mondrian/MOMediaViewSupplementary.h>

@class CAShapeLayer, IPXHighlightTextField, NSTextField;

@interface IPXImportSectionHeaderView : MOMediaViewSupplementary
{
    CAShapeLayer *_shapeLayer;
    BOOL _alreadyImportedSection;
    NSTextField *_sectionTitleLabel;
    IPXHighlightTextField *_showAllAssetsLabel;
}

+ (double)height;
@property __weak IPXHighlightTextField *showAllAssetsLabel; // @synthesize showAllAssetsLabel=_showAllAssetsLabel;
@property __weak NSTextField *sectionTitleLabel; // @synthesize sectionTitleLabel=_sectionTitleLabel;
- (void).cxx_destruct;
- (void)configureForMediaSection:(id)arg1 forMediaView:(id)arg2;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;
- (void)awakeFromNib;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layout;
- (void)_performIPXImportSectionHeaderViewCommonInit;

@end

