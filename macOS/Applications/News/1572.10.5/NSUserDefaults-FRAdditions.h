//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSUserDefaults.h>

@interface NSUserDefaults (FRAdditions)
- (id)numberOfTimesUserHasConfirmedMute;
- (void)setNumberOfTimesUserHasConfirmedMute:(id)arg1;
- (BOOL)shouldShowHUDInsteadOfMuteConfirmation;
- (void)setShouldShowHUDInsteadOfMuteConfirmation:(BOOL)arg1;
- (BOOL)hasReachedMaxNumberOfTimesUserHasConfirmedMute;
- (void)incrementNumberOfTimesUserHasConfirmedMute;
@end

