//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GRMustacheExpressionVisitor-Protocol.h"

@class GRMustacheContext, GRMustacheExpression, NSString;

@interface GRMustacheExpressionInvocation : NSObject <GRMustacheExpressionVisitor>
{
    GRMustacheContext *_context;
    GRMustacheExpression *_expression;
    id _value;
    BOOL _valueIsProtected;
}

@property(readonly, nonatomic) BOOL valueIsProtected; // @synthesize valueIsProtected=_valueIsProtected;
@property(readonly, nonatomic) id value; // @synthesize value=_value;
@property(nonatomic) GRMustacheExpression *expression; // @synthesize expression=_expression;
@property(nonatomic) GRMustacheContext *context; // @synthesize context=_context;
- (BOOL)visitImplicitIteratorExpression:(id)arg1 error:(id *)arg2;
- (BOOL)visitScopedExpression:(id)arg1 error:(id *)arg2;
- (BOOL)visitIdentifierExpression:(id)arg1 error:(id *)arg2;
- (BOOL)visitFilteredExpression:(id)arg1 error:(id *)arg2;
- (BOOL)invokeReturningError:(id *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

