//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreData/NSPersistentHistoryChange.h>

#import <CoreData/NSSecureCoding-Protocol.h>

@class NSData, NSDictionary, NSManagedObjectID, NSPersistentHistoryTransaction, NSSQLEntity;

__attribute__((visibility("hidden")))
@interface _NSPersistentHistoryChange : NSPersistentHistoryChange <NSSecureCoding>
{
    long long _changeID;
    NSManagedObjectID *_changedObjectID;
    long long _changeType;
    NSDictionary *_tombstone;
    NSPersistentHistoryTransaction *_transaction;
    NSData *_columns;
    NSSQLEntity *_sqlEntity;
}

+ (id)_tombstonesForSubEntitiesOf:(id)arg1;
+ (id)_tombstonesForEntity:(id)arg1;
+ (id)_updatedPropertiesForEntity:(id)arg1 andData:(id)arg2;
+ (id)_mergeOldMask:(id)arg1 andNewMask:(id)arg2;
+ (id)_dataMaskForEntity:(id)arg1 andDeltaMask:(struct __CFBitVector *)arg2;
+ (id)_propertyDataForEntity:(id)arg1 withSetOfPropertyNames:(id)arg2;
+ (BOOL)supportsSecureCoding;
- (id)updatedProperties;
- (long long)changeID;
- (id)transaction;
- (long long)changeType;
- (id)changedObjectID;
- (id)tombstone;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithChangeID:(long long)arg1 transaction:(id)arg2 objectID:(id)arg3 type:(long long)arg4 tombstone:(id)arg5 columns:(id)arg6 entity:(id)arg7;

@end

