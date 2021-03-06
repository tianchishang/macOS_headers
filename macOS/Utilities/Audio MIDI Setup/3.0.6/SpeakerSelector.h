//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSButton, NSPopUpButton, NSView;

@interface SpeakerSelector : NSObject
{
    NSView *mOwningView;
    NSButton *mSpeakerButton;
    NSPopUpButton *mSpeakerSelector;
    struct CGPoint mLocation;
    unsigned int mChannelLabel;
}

+ (id)channelNameForLabel:(unsigned int)arg1;
- (id).cxx_construct;
- (void)setTestFeatureEnabled:(BOOL)arg1;
- (void)setToPopUpIndex:(unsigned int)arg1;
- (void)clearChannel;
- (BOOL)setToChannel:(unsigned int)arg1;
- (unsigned int)representsChannelLabel;
- (unsigned int)mapsToDeviceChannel;
- (void)setAvailableChannels:(id)arg1;
- (void)dealloc;
- (id)initAtPoint:(struct CGPoint)arg1 withChannelLabel:(unsigned int)arg2 withIcon:(BOOL)arg3 inView:(id)arg4;
- (id)init;
- (void)privSpeakerChannelChanged:(id)arg1;
- (void)privTestSpeakerButtonPressed:(id)arg1;

@end

