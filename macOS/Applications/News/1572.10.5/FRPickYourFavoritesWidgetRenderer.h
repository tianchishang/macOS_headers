//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FRFeedHeadlineViewRendererType-Protocol.h"

@class NFLFontCache;

@interface FRPickYourFavoritesWidgetRenderer : NSObject <FRFeedHeadlineViewRendererType>
{
    NFLFontCache *_fontCache;
}

@property(readonly, nonatomic) NFLFontCache *fontCache; // @synthesize fontCache=_fontCache;
- (void).cxx_destruct;
- (void)resetView:(id)arg1;
- (void)renderView:(id)arg1 withTileInfo:(id)arg2 layoutAttributes:(id)arg3;

@end

