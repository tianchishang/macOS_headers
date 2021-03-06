//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AddressBook/ABAccountComponentValidationHelper-Protocol.h>

@class ABAccountComponents, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface ABTargetedAccountComponentValidationHelper : NSObject <ABAccountComponentValidationHelper>
{
    ABAccountComponents *_components;
    NSDictionary *_config;
}

- (void).cxx_destruct;
- (id)accountName;
- (id)className;
- (void)loadConfig;
- (BOOL)isAccountComponentsValid;
- (id)initWithAccountComponents:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

