//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSColor, NSDictionary, NSFont, NSString, _TtC13GIPHY_CAPTURE23GGTimedCaptionAnimation;

@interface GIPHY_CAPTURE.GGTimedCaption : NSObject
{
    // Error parsing type: , name: videoDimensions
    // Error parsing type: , name: videoDuration
    // Error parsing type: , name: text
    // Error parsing type: , name: animation
    // Error parsing type: , name: startTime
    // Error parsing type: , name: endTime
    // Error parsing type: , name: fontName
    // Error parsing type: , name: color
    // Error parsing type: , name: size
    // Error parsing type: , name: centerPosition
    // Error parsing type: , name: selected
}

- (CDUnknownBlockType).cxx_destruct;
- (BOOL)isEqualToCaption:(id)arg1;
- (id)initWithVideoDimensions:(struct CGSize)arg1 videoDuration:(CDStruct_1b6d18a9)arg2 text:(id)arg3 startTime:(CDStruct_1b6d18a9)arg4 endTime:(CDStruct_1b6d18a9)arg5;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
@property(nonatomic, readonly) NSDictionary *stringAttributes;
@property(nonatomic, readonly) NSFont *font;
@property(nonatomic, readonly) struct CGSize dimensions;
@property(nonatomic) BOOL selected; // @synthesize selected;
@property(nonatomic) struct CGPoint centerPosition; // @synthesize centerPosition;
@property(nonatomic) long long size; // @synthesize size;
@property(nonatomic, retain) NSColor *color; // @synthesize color;
@property(nonatomic, copy) NSString *fontName; // @synthesize fontName;
@property(nonatomic) CDStruct_1b6d18a9 endTime; // @synthesize endTime;
@property(nonatomic) CDStruct_1b6d18a9 startTime; // @synthesize startTime;
@property(nonatomic, retain) _TtC13GIPHY_CAPTURE23GGTimedCaptionAnimation *animation; // @synthesize animation;
@property(nonatomic, copy) NSString *text; // @synthesize text;
@property(nonatomic) CDStruct_1b6d18a9 videoDuration; // @synthesize videoDuration;
@property(nonatomic) struct CGSize videoDimensions; // @synthesize videoDimensions;

@end

