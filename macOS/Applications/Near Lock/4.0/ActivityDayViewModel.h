//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableArray;

@interface ActivityDayViewModel : NSObject
{
    NSDate *_date;
    NSMutableArray *_sessionArray;
    long long _totalSecondsLoggedIn;
}

@property(nonatomic) long long totalSecondsLoggedIn; // @synthesize totalSecondsLoggedIn=_totalSecondsLoggedIn;
@property(retain, nonatomic) NSMutableArray *sessionArray; // @synthesize sessionArray=_sessionArray;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
- (void).cxx_destruct;
- (id)init;

@end

