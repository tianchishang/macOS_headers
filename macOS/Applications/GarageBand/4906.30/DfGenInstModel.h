//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class DfDocument;

@interface DfGenInstModel : NSObject
{
    DfDocument *_document;
}

+ (id)_cstOrPatchFullPathForCharacterDefaultPatchOrCSTName:(id)arg1 inputMethodKey:(id)arg2;
+ (id)defaultValueForParam:(id)arg1 ofGenre:(id)arg2 andCharacter:(id)arg3;
+ (id)drummerCharactersWithFilter:(BOOL)arg1;
+ (void)setClaveAnalysisUsesMetroResult:(_Bool)arg1;
- (id)defaultParametersToKeepForType:(id)arg1;
- (void)updateClipGenreAndCharacterToRootTrack:(id)arg1;
- (void)selectedGenre:(id *)arg1 andCharacter:(id *)arg2 onTrackWithID:(CDStruct_3d4e291e)arg3;
- (void)selectedGenre:(id *)arg1 andCharacter:(id *)arg2 onTrack:(id)arg3;
- (void)setGenre:(id)arg1 andCharacter:(id)arg2 onAllTracksWithInstID:(int)arg3 makeUndo:(BOOL)arg4;
- (void)setGenre:(id)arg1 andCharacter:(id)arg2 onAllTracksWithInstID:(int)arg3 loadDefaultCST:(BOOL)arg4 adjustSongTempoIfAllowed:(BOOL)arg5 parameterKeysToKeep:(id)arg6 makeUndo:(BOOL)arg7;
- (void)setGenre:(id)arg1 andCharacter:(id)arg2 onAllTracksWithInstID:(int)arg3 loadDefaultCST:(BOOL)arg4 adjustSongTempoIfAllowed:(BOOL)arg5 makeUndo:(BOOL)arg6;
- (void)setGenre:(id)arg1 andCharacter:(id)arg2 onTrackWithID:(CDStruct_3d4e291e)arg3;
- (void)forceUIModelUpdate;
- (void)regenerateRegionsWithSameSeedsOnTrackWithID:(CDStruct_3d4e291e)arg1 regions:(id)arg2;
- (void)regenerateRegionsWithSameSeedsOnTrackWithID:(CDStruct_3d4e291e)arg1;
- (void)regenerateRegionsWithNewSeedsOnTrackWithID:(CDStruct_3d4e291e)arg1;
- (void)prepareGenerateToSpeedUpFirstPlayOnTrack:(CDStruct_3d4e291e)arg1;
- (void)handleUndoRedoCharacterChange:(id)arg1;
- (void)handleGeneratorJobFinished:(id)arg1;
- (void)removeNotifications;
- (void)addNotifications;
- (void)purgeUnneededTrackModels;
- (void)cancelAllGenerateJobs;
- (BOOL)hasRunningGenerateJobs;
- (void)convertTrackAndItsRegionsToMidi:(CDStruct_3d4e291e)arg1;
- (void)convertSelectedRegionsToMidiRegionsMakeUndo:(BOOL)arg1;
- (void)convertSelectedRegionsToDrummerRegionsMakeUndo:(BOOL)arg1;
- (void)setGenInstStateFromTrackWithID:(CDStruct_3d4e291e)arg1 toTrackWithID:(CDStruct_3d4e291e)arg2;
- (id)noteTypeProviderForRegion:(id)arg1;
- (id)selectedCharacterDictForPicker;
- (id)claveCandidateTracks;
- (id)modelUICoordinator_ReferenceRegion;
- (id)modelUICoordinator_ReferenceTrack;
- (id)collectDrummerTrackModelsForGInstID:(int)arg1;
- (id)genInstDrummerTrackModelForTrackWithID:(CDStruct_3d4e291e)arg1;
- (id)genInstDrummerTrackModelForTrack:(id)arg1;
- (id)genInstDrummerTrackModel;
- (id)modelUICoordinatorPrivate;
- (id)modelUICoordinator;
- (struct CVirtualTrack)virtualTrackForTrackID:(CDStruct_3d4e291e)arg1;
- (struct CSong *)song;
- (void)initializeRegion:(id)arg1 withGenInstRegionDict:(id)arg2 generate:(BOOL)arg3;
- (struct CRegion *)cRegionFromDfRegion:(id)arg1 seqID:(int *)arg2;
- (id)genInstRegionDictForRegion:(id)arg1;
- (id)genInstRegionDictForRegionConst:(id)arg1;
- (void)initializeRegion:(id)arg1;
- (void)initializeTrackWithID:(CDStruct_3d4e291e)arg1 withGenreID:(id)arg2 andCharacterID:(id)arg3;
- (void)initializeTrack:(id)arg1 withGenreID:(id)arg2 andCharacterID:(id)arg3;
- (void)dealloc;
- (id)initWithDocument:(id)arg1;
- (id)init;

@end

