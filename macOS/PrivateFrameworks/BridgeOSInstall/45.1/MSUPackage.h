//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString, NSURL, PKPackageInfo, PKPackageReference;

@interface MSUPackage : NSObject
{
    BOOL _shouldDownload;
    NSURL *_URL;
    NSNumber *_size;
    NSString *_identifier;
    NSString *_version;
    NSString *_digest;
    NSURL *_metadataURL;
    PKPackageInfo *_packageInfo;
}

+ (void)setShouldUseContentLocator:(BOOL)arg1;
+ (CDUnknownFunctionPointerType)_contentLocatorFunction;
+ (void)_setContentLocatorFunction:(CDUnknownFunctionPointerType)arg1;
+ (BOOL)shouldUseContentLocator;
@property BOOL shouldDownload; // @synthesize shouldDownload=_shouldDownload;
@property(retain) PKPackageInfo *packageInfo; // @synthesize packageInfo=_packageInfo;
@property(retain) NSURL *metadataURL; // @synthesize metadataURL=_metadataURL;
@property(retain) NSString *digest; // @synthesize digest=_digest;
@property(retain) NSString *version; // @synthesize version=_version;
@property(retain) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain) NSNumber *size; // @synthesize size=_size;
@property(retain) NSURL *URL; // @synthesize URL=_URL;
- (void).cxx_destruct;
@property(readonly) PKPackageReference *packageReference;
@property(readonly) PKPackageReference *unmodifiedPackageReference;

@end

