//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface IPXAudioArtist : NSObject
{
    NSString *_artist;
    NSMutableArray *_albums;
}

@property(retain) NSMutableArray *albums; // @synthesize albums=_albums;
@property(retain) NSString *artist; // @synthesize artist=_artist;
- (void).cxx_destruct;
- (id)album;
- (id)name;

@end

