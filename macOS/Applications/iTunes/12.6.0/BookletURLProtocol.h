//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSURLProtocol.h>

@interface BookletURLProtocol : NSURLProtocol
{
}

+ (id)canonicalRequestForRequest:(id)arg1;
+ (BOOL)canInitWithRequest:(id)arg1;
- (void)stopLoading;
- (void)startLoading;
- (_Bool)sendDataToClient:(id)arg1 fromBookletPath:(struct JRFileSpec *)arg2 orDaapURL:(struct __CFString *)arg3;

@end

