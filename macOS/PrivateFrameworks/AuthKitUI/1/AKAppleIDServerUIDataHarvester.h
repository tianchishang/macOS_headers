//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary;

@interface AKAppleIDServerUIDataHarvester : NSObject
{
    NSMutableDictionary *_harvestedData;
}

@property(readonly, nonatomic) NSDictionary *harvestedData; // @synthesize harvestedData=_harvestedData;
- (void).cxx_destruct;
- (void)_harvestIDMSRecoveryHeadersInfo:(id)arg1;
- (void)harvestDataFromServerHTTPResponse:(id)arg1;
- (id)init;

@end

