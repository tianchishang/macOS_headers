//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreChineseEngine/NSObject-Protocol.h>

@class _IMKCandidateController;

@protocol _IMKCandidateDelegate <NSObject>
- (struct CGPoint)candidateController:(_IMKCandidateController *)arg1 topLeftPointOfWindowFrame:(struct CGRect)arg2 candidateTextOffset:(double)arg3 windowMaxHeight:(double)arg4;
- (void)candidateController:(_IMKCandidateController *)arg1 didChangeSortStyle:(long long)arg2;
- (void)candidateController:(_IMKCandidateController *)arg1 didSelectCandidate:(long long)arg2 confirm:(BOOL)arg3;
@end

