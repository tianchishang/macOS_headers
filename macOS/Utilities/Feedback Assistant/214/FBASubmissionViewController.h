//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "FBADraftPage-Protocol.h"

@class NSImage, NSString, NSView;

@interface FBASubmissionViewController : NSViewController <FBADraftPage>
{
    int _status;
    long long _bytesUploaded;
    long long _bytesToUpload;
    long long _submissionType;
    NSView *_completionView;
}

+ (id)keyPathsForValuesAffectingUploadProgressString;
+ (id)keyPathsForValuesAffectingUploadProgress;
+ (id)keyPathsForValuesAffectingShouldDisplayProgress;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
@property __weak NSView *completionView; // @synthesize completionView=_completionView;
@property long long submissionType; // @synthesize submissionType=_submissionType;
@property long long bytesToUpload; // @synthesize bytesToUpload=_bytesToUpload;
@property long long bytesUploaded; // @synthesize bytesUploaded=_bytesUploaded;
@property int status; // @synthesize status=_status;
- (void).cxx_destruct;
@property(readonly) NSString *submissionStatusString;
@property(readonly) NSString *uploadProgressString;
@property(readonly) double uploadProgress;
@property(readonly) BOOL shouldDisplayProgress;
@property(readonly) NSString *completionSubtitle;
@property(readonly) NSString *completionTitle;
@property(readonly) NSImage *completionImage;
@property(readonly) BOOL shouldDisplayCompletion;
- (id)firstKeyView;
- (void)loadView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

