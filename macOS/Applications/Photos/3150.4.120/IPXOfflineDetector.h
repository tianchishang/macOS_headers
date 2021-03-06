//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PFAsyncDispatchMulticaster;
@protocol IPXOfflineDetectorMulticaster;

@interface IPXOfflineDetector : NSObject
{
    struct __SCNetworkReachability *_reachabilityRef;
    BOOL _isOnline;
    struct PFAsyncDispatchMulticaster *_multicaster;
}

+ (id)sharedInstance;
@property(readonly) PFAsyncDispatchMulticaster<IPXOfflineDetectorMulticaster> *multicaster; // @synthesize multicaster=_multicaster;
@property BOOL isOnline; // @synthesize isOnline=_isOnline;
- (void).cxx_destruct;
- (void)_detectedChangeInFlags:(unsigned int)arg1;
- (void)_stopOfflineDetection;
- (void)_startOfflineDetection;
- (BOOL)_isOnlineWithFlags:(unsigned int)arg1;
- (void)removeChangeReceiver:(id)arg1;
- (void)addWeakChangeReceiver:(id)arg1;
- (void)addChangeReceiver:(id)arg1;
- (id)_init;

@end

