//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSArray, NSDate, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CKDModifyRecordZonesURLRequest : CKDURLRequest
{
    BOOL _markZonesAsUserPurged;
    NSDate *_lastMissingManateeIdentityErrorDate;
    CDUnknownBlockType _recordZoneModifiedBlock;
    NSArray *_recordZonesToSave;
    NSArray *_recordZoneIDsToDelete;
    NSMutableDictionary *_recordZoneIDByRequestID;
}

@property(retain, nonatomic) NSMutableDictionary *recordZoneIDByRequestID; // @synthesize recordZoneIDByRequestID=_recordZoneIDByRequestID;
@property(retain, nonatomic) NSArray *recordZoneIDsToDelete; // @synthesize recordZoneIDsToDelete=_recordZoneIDsToDelete;
@property(retain, nonatomic) NSArray *recordZonesToSave; // @synthesize recordZonesToSave=_recordZonesToSave;
@property(copy, nonatomic) CDUnknownBlockType recordZoneModifiedBlock; // @synthesize recordZoneModifiedBlock=_recordZoneModifiedBlock;
@property(retain, nonatomic) NSDate *lastMissingManateeIdentityErrorDate; // @synthesize lastMissingManateeIdentityErrorDate=_lastMissingManateeIdentityErrorDate;
@property(nonatomic) BOOL markZonesAsUserPurged; // @synthesize markZonesAsUserPurged=_markZonesAsUserPurged;
- (void).cxx_destruct;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)generateRequestOperations;
- (id)requestOperationClasses;
- (id)zoneIDsToLock;
- (int)operationType;
- (id)initWithRecordZonesToSave:(id)arg1 recordZoneIDsToDelete:(id)arg2;

@end

