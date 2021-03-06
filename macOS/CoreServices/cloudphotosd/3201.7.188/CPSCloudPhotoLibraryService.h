//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "ICPAgentServiceBase.h"

#import "CPSCloudPhotoLibraryService-Protocol.h"
#import "CSLibraryManagerDelegate-Protocol.h"
#import "LiDiskDelegate-Protocol.h"
#import "NSUserNotificationCenterDelegate-Protocol.h"

@class CPSCloudPhotoLibraryCanonicalLibraryInfo, CSLibraryManager, LiDiskArbitrationListener, NSError, NSMapTable, NSMutableSet, NSObject, NSString, PFDispatchQueue;
@protocol OS_dispatch_queue, PFDispatchQueueRunBlock;

@interface CPSCloudPhotoLibraryService : ICPAgentServiceBase <CSLibraryManagerDelegate, NSUserNotificationCenterDelegate, LiDiskDelegate, CPSCloudPhotoLibraryService>
{
    BOOL _purgingEnabled;
    NSMutableSet *_foregroundConnections;
    NSMutableSet *_significantWorkConnections;
    BOOL _showedUnderDiskPressureAlert;
    BOOL _showedQuotaAlert;
    BOOL _isInDarkWake;
    BOOL _hasSignificantWork;
    long long _initialSyncState;
    BOOL _cplExitNotificationXpcActivityInstalled;
    unsigned int _powerAssertionID;
    CSLibraryManager *_libraryManager;
    NSError *_libraryManagerError;
    PFDispatchQueue *_replyQueue;
    PFDispatchQueue<PFDispatchQueueRunBlock> *_libraryManagerDelegateQueue;
    id _libraryForKeyObserver;
    NSMapTable *_disableTerminationActivities;
    NSObject<OS_dispatch_queue> *_diskListenerQueue;
    LiDiskArbitrationListener *_diskListener;
    CPSCloudPhotoLibraryCanonicalLibraryInfo *_canonicalLibraryInfo;
}

+ (id)localizedStringForKey:(id)arg1;
@property(nonatomic) unsigned int powerAssertionID; // @synthesize powerAssertionID=_powerAssertionID;
@property(retain, nonatomic) CPSCloudPhotoLibraryCanonicalLibraryInfo *canonicalLibraryInfo; // @synthesize canonicalLibraryInfo=_canonicalLibraryInfo;
@property(retain, nonatomic) LiDiskArbitrationListener *diskListener; // @synthesize diskListener=_diskListener;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *diskListenerQueue; // @synthesize diskListenerQueue=_diskListenerQueue;
@property BOOL cplExitNotificationXpcActivityInstalled; // @synthesize cplExitNotificationXpcActivityInstalled=_cplExitNotificationXpcActivityInstalled;
@property(retain) NSMapTable *disableTerminationActivities; // @synthesize disableTerminationActivities=_disableTerminationActivities;
@property(retain) id libraryForKeyObserver; // @synthesize libraryForKeyObserver=_libraryForKeyObserver;
@property(readonly) PFDispatchQueue<PFDispatchQueueRunBlock> *libraryManagerDelegateQueue; // @synthesize libraryManagerDelegateQueue=_libraryManagerDelegateQueue;
@property(readonly) PFDispatchQueue *replyQueue; // @synthesize replyQueue=_replyQueue;
@property(retain) NSError *libraryManagerError; // @synthesize libraryManagerError=_libraryManagerError;
@property(retain) CSLibraryManager *libraryManager; // @synthesize libraryManager=_libraryManager;
- (void).cxx_destruct;
- (void)libraryManager:(id)arg1 requestsConnectedClientsWithCompletionHandler:(CDUnknownBlockType)arg2;
- (void)libraryManager:(id)arg1 notifyMemoryNotificationUpdates:(id)arg2;
- (void)libraryManagerNeedsToShutdown:(id)arg1;
- (void)libraryManager:(id)arg1 inMemoryDownloadDidFinishForConnectionIdentifier:(id)arg2 taskIdentifier:(id)arg3 data:(id)arg4 error:(id)arg5;
- (void)libraryManager:(id)arg1 downloadDidProgress:(id)arg2 forResourceWithModelId:(id)arg3 inDatabaseWithUuid:(id)arg4;
- (void)libraryManager:(id)arg1 versionsNeedPreviewsRegenerated:(id)arg2 changeType:(int)arg3 inDatabaseWithUuid:(id)arg4;
- (void)libraryManager:(id)arg1 statusInformationChanged:(id)arg2;
- (void)libraryManager:(id)arg1 endedActivity:(id)arg2;
- (void)libraryManager:(id)arg1 beginningActivity:(id)arg2;
- (void)userNotificationCenter:(id)arg1 didActivateNotification:(id)arg2;
- (void)_openPhotosAppToPreferences;
- (void)_openiCloudSystemPreferencesToManageStorage;
- (void)_openiCloudSystemPreferencesToUpgradeStorage;
- (void)_openiCloudPreferencesPanelWithArguments:(id)arg1;
- (void)_showErrorOpeningiCloudPreferences;
- (id)_XMLStringFromDictionary:(id)arg1;
- (void)_showQuotaAlert;
- (void)_showUnderDiskPressureAlert;
- (void)_updateCPLExitNotificationXpcActivityIfNecessary:(id)arg1;
- (long long)_daysRemainingForCPLDeletion:(id)arg1;
- (void)_unregisterCPLExitNotificationXpcActivity;
- (void)_registerCPLExitNotificationXpcActivity:(long long)arg1;
- (void)_didReceiveCPLExitNotificationXpcActivityEvent:(long long)arg1;
- (void)_checkCPLExitNotificationXpcActivity;
- (id)cacheDeletePurge:(id)arg1 urgency:(int)arg2;
- (id)cacheDeletePurgeable:(id)arg1 urgency:(int)arg2;
- (void)setupCacheDeleteCallbacks;
- (id)_disableCloudPhotoLibraryService;
- (void)pingForLibraryKey:(id)arg1;
- (id)_openCanonicalLibraryWithError:(id *)arg1 forDumping:(BOOL)arg2;
- (id)_libraryManagerWithError:(id *)arg1;
- (BOOL)shouldDisableSyncingWithDatabase:(id)arg1;
- (void)checkHasBackgroundDownloadOperationsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)addStatusChangesForRecordsWithIdentifiers:(id)arg1 persist:(BOOL)arg2;
- (void)getChangedStatusesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getStatusForRecordsWithIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)unblockEngineElementOnce:(id)arg1;
- (void)unblockEngineElement:(id)arg1;
- (void)blockEngineElement:(id)arg1;
- (void)rampingRequestForResourceType:(unsigned long long)arg1 numRequested:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)getLibraryLocationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)addInfoToLog:(id)arg1;
- (void)setShouldOverrideSystemBudgetsForSyncSession:(BOOL)arg1;
- (void)getSystemBudgetsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)enableSynchronizationWithReason:(id)arg1;
- (void)disableSynchronizationWithReason:(id)arg1;
- (void)noteClientIsEndingSignificantWork;
- (void)noteClientIsBeginningSignificantWork;
- (void)onQueueNoteClientWithConnectionIdentifier:(id)arg1 isBeginningSignificantWork:(BOOL)arg2;
- (void)noteClientIsInBackground;
- (void)noteClientIsInForeground;
- (void)onQueueNoteClientWithConnectionIdentifier:(id)arg1 isForeground:(BOOL)arg2;
- (void)resetCacheWithOption:(unsigned long long)arg1 reason:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)getIdentifiersForFinalIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getFinalIdentifiersForIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getResourcesForItemWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)cloudCacheGetDescriptionForRecordWithIdentifier:(id)arg1 related:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)cloudCacheGetDescriptionForRecordWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getStatusArrayForComponents:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getStatusForComponents:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getListOfComponentsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)startSyncSession;
- (void)libraryIdentifierWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)convertIdentifierIfNeeded:(id)arg1;
- (void)requestCancellationOfInMemoryDownloadWithTaskIdentifier:(id)arg1;
- (void)requestInMemoryDownloadOfCloudResource:(unsigned long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)requestPermissionToDownloadFaceResourcesOfCount:(unsigned long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)requestPublishOfCloudResource:(unsigned long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)requestHighPriorityResources:(id)arg1 withPriority:(unsigned long long)arg2;
- (void)requestResetOfDownloadabilityForResources:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)getStatusInformation:(CDUnknownBlockType)arg1;
- (void)photoLibraryDump:(CDUnknownBlockType)arg1;
- (void)attemptValidateContentsOfCloudResourceId:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)attemptValidationStatusOfLibrary:(CDUnknownBlockType)arg1;
- (void)attemptStopValidationOfLibrary:(CDUnknownBlockType)arg1;
- (void)attemptValidationOfLibrary:(BOOL)arg1 reply:(CDUnknownBlockType)arg2;
- (void)attemptPurgeResources:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)attemptPurgeSizeInBytes:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)attemptDumpStatisticsForTimePeriod:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)attemptResumeOfCloudLibrary:(CDUnknownBlockType)arg1;
- (void)attemptPauseOfCloudLibrary:(CDUnknownBlockType)arg1;
- (void)attemptDisableCloudLibrary:(CDUnknownBlockType)arg1;
- (void)attemptEnableCloudLibrary:(CDUnknownBlockType)arg1;
- (void)releasePowerAssertion;
- (BOOL)isHoldingPowerAssertion;
- (void)takePowerAssertion;
- (void)systemDidDarkWake;
- (void)systemDidWake;
- (void)systemDidSleep;
- (void)openLibraryManager;
- (void)startServiceWithPersonId:(id)arg1;
- (void)updatePurgingEnabled:(BOOL)arg1;
- (void)configurationClient:(id)arg1 didChangePreferencesForServiceIdentifiers:(id)arg2;
- (void)applyServiceStateConfiguration;
- (void)handlePushNotification:(id)arg1;
- (void)disablePushNotifications;
- (void)enablePushNotifications;
- (void)resetWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)stopForReset:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)shutdownWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)clientDidDisconnect:(id)arg1 withConnectionIdentifier:(id)arg2;
- (void)clientDidConnect:(id)arg1 withConnectionIdentifier:(id)arg2;
- (BOOL)errorIsNoValueForLibraryKeyError:(id)arg1;
- (id)noEngineError;
- (id)noLibraryManagerError;
- (id)notRunningError;
- (void)setInitialSyncState:(long long)arg1;
- (id)serviceIdentifier;
- (id)clientProtocolForConnection:(id)arg1;
- (id)serviceProtocolForConnection:(id)arg1;
- (void)beginListeningForDiskWithUserInfo:(id)arg1;
- (void)diskAppeared:(id)arg1;
- (id)diskDelegateQueue;
- (void)terminateDiskListener;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

