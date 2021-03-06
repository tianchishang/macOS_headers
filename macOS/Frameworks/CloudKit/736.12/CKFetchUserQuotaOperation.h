//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CloudKit/CKDatabaseOperation.h>

@interface CKFetchUserQuotaOperation : CKDatabaseOperation
{
    CDUnknownBlockType _fetchUserQuotaCompletionBlock;
    unsigned long long _quotaAvailable;
}

@property(nonatomic) unsigned long long quotaAvailable; // @synthesize quotaAvailable=_quotaAvailable;
- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleCompletionCallback:(id)arg1;
- (void)performCKOperation;
- (BOOL)hasCKOperationCallbacksSet;
- (Class)operationInfoClass;
- (id)activityCreate;
@property(copy, nonatomic) CDUnknownBlockType fetchUserQuotaCompletionBlock; // @synthesize fetchUserQuotaCompletionBlock=_fetchUserQuotaCompletionBlock;
- (id)init;

@end

