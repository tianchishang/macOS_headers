//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSAlert.h>

@class NSObject;
@protocol OS_xpc_object;

@interface NSAlert (CSUIAdditions)
+ (void)load;
@property(retain, getter=csui_XPCObject, setter=csui_setXPCObject:) NSObject<OS_xpc_object> *XPCObject; // @dynamic XPCObject;
@end

