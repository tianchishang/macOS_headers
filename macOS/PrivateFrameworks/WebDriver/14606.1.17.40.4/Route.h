//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSRegularExpression;

@interface Route : NSObject
{
    NSRegularExpression *regex;
    CDUnknownBlockType handler;
    id target;
    SEL selector;
    NSArray *keys;
}

@property(retain, nonatomic) NSArray *keys; // @synthesize keys;
@property(nonatomic) SEL selector; // @synthesize selector;
@property(nonatomic) __weak id target; // @synthesize target;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler;
@property(retain, nonatomic) NSRegularExpression *regex; // @synthesize regex;
- (void).cxx_destruct;

@end

