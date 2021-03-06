//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface GRMustacheToken : NSObject
{
    long long _type;
    NSString *_templateString;
    id _templateID;
    unsigned long long _line;
    struct _NSRange _range;
    struct _NSRange _tagInnerRange;
}

+ (id)tokenWithType:(long long)arg1 templateString:(id)arg2 templateID:(id)arg3 line:(unsigned long long)arg4 range:(struct _NSRange)arg5;
@property(nonatomic) struct _NSRange tagInnerRange; // @synthesize tagInnerRange=_tagInnerRange;
@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
@property(nonatomic) unsigned long long line; // @synthesize line=_line;
@property(retain, nonatomic) id templateID; // @synthesize templateID=_templateID;
@property(retain, nonatomic) NSString *templateString; // @synthesize templateString=_templateString;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSString *tagInnerContent;
@property(readonly, nonatomic) NSString *templateSubstring;
- (void)dealloc;

@end

