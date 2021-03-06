//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class NSError, NSString, TTSSpeechRequest, TTSSpeechRequestOwner;

@protocol TTSSpeechConnectionDelegate
- (void)connection:(TTSSpeechRequestOwner *)arg1 speechRequest:(TTSSpeechRequest *)arg2 willSpeakMark:(long long)arg3 inRange:(struct _NSRange)arg4;
- (void)connection:(TTSSpeechRequestOwner *)arg1 speechRequest:(TTSSpeechRequest *)arg2 didStopAtEnd:(BOOL)arg3 phonemesSpoken:(NSString *)arg4 error:(NSError *)arg5;
- (void)connection:(TTSSpeechRequestOwner *)arg1 speechRequestDidContinue:(TTSSpeechRequest *)arg2;
- (void)connection:(TTSSpeechRequestOwner *)arg1 speechRequestDidPause:(TTSSpeechRequest *)arg2;
- (void)connection:(TTSSpeechRequestOwner *)arg1 speechRequestDidStart:(TTSSpeechRequest *)arg2;
@end

