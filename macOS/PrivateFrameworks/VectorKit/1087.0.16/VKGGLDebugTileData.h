//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VKGGLDebugTileData : NSObject
{
    struct unique_ptr<ggl::Debug::BaseMesh, std::__1::default_delete<ggl::Debug::BaseMesh>> _namedLineMesh;
    struct unique_ptr<ggl::Debug::BaseMesh, std::__1::default_delete<ggl::Debug::BaseMesh>> _unnamedLineMesh;
    struct unique_ptr<ggl::Debug::BaseMesh, std::__1::default_delete<ggl::Debug::BaseMesh>> _polygonLineMesh;
    struct unique_ptr<ggl::Debug::BaseMesh, std::__1::default_delete<ggl::Debug::BaseMesh>> _coastLineMesh;
    struct unique_ptr<ggl::DebugPoints::BaseMesh, std::__1::default_delete<ggl::DebugPoints::BaseMesh>> _poiPointsMesh;
    struct unique_ptr<ggl::DebugPoints::BaseMesh, std::__1::default_delete<ggl::DebugPoints::BaseMesh>> _verticesPointsMesh;
    struct unique_ptr<ggl::DebugPoints::BaseMesh, std::__1::default_delete<ggl::DebugPoints::BaseMesh>> _junctionsPointsMesh;
    struct unique_ptr<ggl::DebugPoints::BaseMesh, std::__1::default_delete<ggl::DebugPoints::BaseMesh>> _overpassPointsMesh;
    unsigned long long _namedLineCount;
    unsigned long long _namedLineVertCount;
    unsigned long long _unnamedLineCount;
    unsigned long long _unnamedLineVertCount;
    unsigned long long _polygonCount;
    unsigned long long _polygonVertCount;
    unsigned long long _poiCount;
    unsigned long long _vertexCount;
    unsigned long long _junctionCount;
    unsigned long long _overpassCount;
    unsigned long long _coastLineCount;
    unsigned long long _coastLineVertCount;
}

@property(readonly, nonatomic) unsigned long long coastLineVertCount; // @synthesize coastLineVertCount=_coastLineVertCount;
@property(readonly, nonatomic) unsigned long long coastLineCount; // @synthesize coastLineCount=_coastLineCount;
@property(readonly, nonatomic) unsigned long long overpassCount; // @synthesize overpassCount=_overpassCount;
@property(readonly, nonatomic) unsigned long long junctionCount; // @synthesize junctionCount=_junctionCount;
@property(readonly, nonatomic) unsigned long long vertexCount; // @synthesize vertexCount=_vertexCount;
@property(readonly, nonatomic) unsigned long long poiCount; // @synthesize poiCount=_poiCount;
@property(readonly, nonatomic) unsigned long long polygonVertCount; // @synthesize polygonVertCount=_polygonVertCount;
@property(readonly, nonatomic) unsigned long long polygonCount; // @synthesize polygonCount=_polygonCount;
@property(readonly, nonatomic) unsigned long long unnamedLineVertCount; // @synthesize unnamedLineVertCount=_unnamedLineVertCount;
@property(readonly, nonatomic) unsigned long long unnamedLineCount; // @synthesize unnamedLineCount=_unnamedLineCount;
@property(readonly, nonatomic) unsigned long long namedLineVertCount; // @synthesize namedLineVertCount=_namedLineVertCount;
@property(readonly, nonatomic) unsigned long long namedLineCount; // @synthesize namedLineCount=_namedLineCount;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_fillInDebugData:(id)arg1;
@property(readonly, nonatomic) struct BaseMesh *overpassPointsMesh;
@property(readonly, nonatomic) struct BaseMesh *junctionsPointsMesh;
@property(readonly, nonatomic) struct BaseMesh *verticesPointsMesh;
@property(readonly, nonatomic) struct BaseMesh *poiPointsMesh;
@property(readonly, nonatomic) struct BaseMesh *coastLineMesh;
@property(readonly, nonatomic) struct BaseMesh *polygonLineMesh;
@property(readonly, nonatomic) struct BaseMesh *unnamedLineMesh;
@property(readonly, nonatomic) struct BaseMesh *namedLineMesh;
- (id)initWithTile:(id)arg1;

@end

