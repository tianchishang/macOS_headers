//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreWiFi/CoreWiFiIE.h>

@class NSString;

@interface CoreWiFiAppleSWAPIE : CoreWiFiIE
{
    BOOL internetConnectionSharingEnabled;
    NSString *macModelIdentifier;
}

@property(retain, nonatomic) NSString *macModelIdentifier; // @synthesize macModelIdentifier;
@property(nonatomic) BOOL internetConnectionSharingEnabled; // @synthesize internetConnectionSharingEnabled;
- (BOOL)generateIE:(id *)arg1;
- (BOOL)parseIE:(id *)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithIE:(id)arg1;
- (id)init;

@end

