//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class NSString;
@protocol CABackdropLayerDelegate><CALayerDelegate;

@interface CABackdropLayer : CALayer
{
}

+ (BOOL)CA_automaticallyNotifiesObservers:(Class)arg1;
+ (BOOL)_hasRenderLayerSubclass;
+ (id)defaultValueForKey:(id)arg1;
+ (id)CA_attributes;
+ (void)initialize;
@property BOOL ignoresOffscreenGroups;
@property BOOL disablesOccludedBackdropBlurs;
@property BOOL windowServerAware;
@property double bleedAmount;
@property double statisticsInterval;
@property(copy) NSString *statisticsType;
@property BOOL allowsInPlaceFiltering;
@property BOOL captureOnly;
@property double marginWidth;
@property struct CGRect backdropRect;
@property double scale;
@property BOOL usesGlobalGroupNamespace;
@property(copy) NSString *groupName;
@property(getter=isEnabled) BOOL enabled;
- (unsigned int)_renderLayerPropertyAnimationFlags:(unsigned int)arg1;
- (_Bool)_renderLayerDefinesProperty:(unsigned int)arg1;
- (struct Layer *)_copyRenderLayer:(struct Transaction *)arg1 layerFlags:(unsigned int)arg2 commitFlags:(unsigned int *)arg3;
- (void)didChangeValueForKey:(id)arg1;
- (id)statisticsValues;
- (void)layerDidBecomeVisible:(BOOL)arg1;

// Remaining properties
@property __weak id <CABackdropLayerDelegate><CALayerDelegate> delegate; // @dynamic delegate;

@end

