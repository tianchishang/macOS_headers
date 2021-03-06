//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitHostAppServices/UHAProcessInfoInterface-Protocol.h>

@class NSArray, NSBundle, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface UHASClientProcessInfo : NSObject <UHAProcessInfoInterface>
{
    int _processIdentifier;
    NSArray *_arguments;
    NSDictionary *_environment;
    NSString *_globallyUniqueString;
    NSString *_processName;
    NSBundle *_mainBundle;
}

@property(retain, nonatomic) NSBundle *mainBundle; // @synthesize mainBundle=_mainBundle;
@property(retain, nonatomic) NSString *processName; // @synthesize processName=_processName;
@property(nonatomic) int processIdentifier; // @synthesize processIdentifier=_processIdentifier;
@property(retain, nonatomic) NSString *globallyUniqueString; // @synthesize globallyUniqueString=_globallyUniqueString;
@property(retain, nonatomic) NSDictionary *environment; // @synthesize environment=_environment;
@property(retain, nonatomic) NSArray *arguments; // @synthesize arguments=_arguments;
- (void).cxx_destruct;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

