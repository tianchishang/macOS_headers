//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SearchFoundation/SFCard.h>

#import <CoreParsec/NSSecureCoding-Protocol.h>

@class NSURL, NSXPCListenerEndpoint, PARSessionConfiguration;

@interface PARAsyncCard : SFCard <NSSecureCoding>
{
    NSXPCListenerEndpoint *_endpoint;
    PARSessionConfiguration *_configuration;
    double _scale;
    NSURL *_cardURL;
    long long _queryId;
    unsigned long long _clientQueryId;
}

+ (BOOL)supportsSecureCoding;
+ (id)cardWithTitle:(id)arg1 url:(id)arg2 session:(id)arg3 scale:(double)arg4 queryId:(long long)arg5 clientQueryId:(unsigned long long)arg6;
+ (id)cardWithTitle:(id)arg1 url:(id)arg2 session:(id)arg3 scale:(double)arg4 queryId:(long long)arg5;
@property(readonly, nonatomic) unsigned long long clientQueryId; // @synthesize clientQueryId=_clientQueryId;
@property(readonly, nonatomic) long long queryId; // @synthesize queryId=_queryId;
@property(copy, nonatomic) NSURL *cardURL; // @synthesize cardURL=_cardURL;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(retain, nonatomic) PARSessionConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) NSXPCListenerEndpoint *endpoint; // @synthesize endpoint=_endpoint;
- (void).cxx_destruct;
- (void)loadCardSectionsWithCompletionAndErrorHandler:(CDUnknownBlockType)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

