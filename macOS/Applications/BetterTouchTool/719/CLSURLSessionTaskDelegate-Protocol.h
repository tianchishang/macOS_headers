//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CLSURLSessionTask, NSError, NSHTTPURLResponse, NSURLRequest;

@protocol CLSURLSessionTaskDelegate <NSObject>
- (void)task:(CLSURLSessionTask *)arg1 didCompleteWithError:(NSError *)arg2;
- (NSURLRequest *)task:(CLSURLSessionTask *)arg1 willPerformHTTPRedirection:(NSHTTPURLResponse *)arg2 newRequest:(NSURLRequest *)arg3;
@end

