//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "KNAnimationEffect.h"

#import "KNAnimationPluginObsoleteNames-Protocol.h"
#import "KNTransitionCAAnimator-Protocol.h"
#import "KNTransitionMetalAnimator-Protocol.h"
#import "KNTransitionOpenGLAnimator-Protocol.h"

@class KNMotionBlurAnimationPluginWrapper, NSString;

@interface KNTransitionFadeThruColor : KNAnimationEffect <KNTransitionCAAnimator, KNAnimationPluginObsoleteNames, KNTransitionOpenGLAnimator, KNTransitionMetalAnimator>
{
    KNMotionBlurAnimationPluginWrapper *_motionBlurWrapper;
}

+ (void)downgradeAttributes:(id *)arg1 animationName:(id *)arg2 warning:(id *)arg3 type:(long long)arg4 isToClassic:(BOOL)arg5 version:(unsigned long long)arg6;
+ (void)upgradeAttributes:(id *)arg1 animationName:(id)arg2 warning:(id *)arg3 type:(long long)arg4 isFromClassic:(BOOL)arg5 version:(unsigned long long)arg6;
+ (long long)rendererTypeForAnimationContext:(id)arg1;
+ (id)thumbnailImageNameForType:(long long)arg1;
+ (id)defaultAttributes;
+ (void)fillLocalizedDirectionMenu:(id)arg1 forType:(long long)arg2;
+ (unsigned long long)directionType;
+ (id)localizedMenuString:(long long)arg1;
+ (id)obsoleteAnimationNames;
+ (id)supportedTypes;
+ (id)animationFilter;
+ (long long)animationCategory;
+ (id)animationName;
- (void).cxx_destruct;
- (void)animationDidEndWithContext:(id)arg1;
- (void)renderFrameWithContext:(id)arg1;
- (void)animationWillBeginWithContext:(id)arg1;
- (void)addAnimationsTo:(id)arg1 context:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

