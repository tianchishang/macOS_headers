//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "OCXReadState.h"

@class NSMutableDictionary, NSMutableSet, OAXDrawingState, OCPPackagePart;

@interface OAVReadState : OCXReadState
{
    Class mClient;
    OAXDrawingState *mOAXState;
    OCPPackagePart *mPackagePart;
    NSMutableDictionary *mShapeTypes;
    NSMutableDictionary *mShapeIdMap;
    NSMutableSet *mDualDrawables;
}

- (void).cxx_destruct;
- (id)blipRefForURL:(id)arg1;
- (unsigned int)officeArtShapeIdWithVmlShapeId:(id)arg1;
- (BOOL)isDualDrawable:(id)arg1;
- (void)addDualDrawable:(id)arg1;
- (void)setDrawable:(id)arg1 forVmlShapeId:(id)arg2;
- (id)drawableForVmlShapeId:(id)arg1;
- (void)setShapeType:(unsigned short)arg1 forId:(id)arg2;
- (unsigned short)shapeTypeForId:(id)arg1;
- (void)setPackagePart:(id)arg1;
- (id)packagePart;
- (void)setOAXState:(id)arg1;
- (id)oaxState;
- (Class)client;
- (void)resetForNewDrawing;
- (id)initWithClient:(Class)arg1 packagePart:(id)arg2;

@end

