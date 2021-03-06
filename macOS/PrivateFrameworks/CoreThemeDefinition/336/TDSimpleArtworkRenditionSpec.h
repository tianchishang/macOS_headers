//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreThemeDefinition/TDRenditionSpec.h>

@class NSOrderedSet, NSString, TDPNGAsset, TDThemeCompressionType;

@interface TDSimpleArtworkRenditionSpec : TDRenditionSpec
{
    struct CGRect _alignmentRect;
    BOOL _allowsMultiPassEncoding;
    BOOL _allowsOptimalRowbytesPacking;
    BOOL _allowsCompactCompression;
}

+ (void)initialize;
@property(nonatomic) BOOL allowsCompactCompression; // @synthesize allowsCompactCompression=_allowsCompactCompression;
@property(nonatomic) BOOL allowsOptimalRowbytesPacking; // @synthesize allowsOptimalRowbytesPacking=_allowsOptimalRowbytesPacking;
@property(nonatomic) BOOL allowsMultiPassEncoding; // @synthesize allowsMultiPassEncoding=_allowsMultiPassEncoding;
- (void)drawPackableRenditionInContext:(struct CGContext *)arg1 withDocument:(id)arg2;
- (BOOL)updatePackingPropertiesWithDocument:(id)arg1;
- (id)createCSIRepresentationWithCompression:(BOOL)arg1 colorSpaceID:(unsigned long long)arg2 document:(id)arg3;
- (struct CGImage *)_createImageRefWithURL:(id)arg1 andDocument:(id)arg2 format:(unsigned int *)arg3 vectorBased:(char *)arg4;
- (int)_rawPixelFormatOfCGImage:(struct CGImage *)arg1;
- (BOOL)canBePackedWithDocument:(id)arg1;
- (CDStruct_1ba92a5e)_edgeMetricsForAlignmentRect:(struct CGRect)arg1 originalRenditionSize:(CDStruct_1ef3fb1f)arg2 newRenditionSize:(CDStruct_1ef3fb1f)arg3;
- (id)_sliceRectanglesForRenditionSize:(CDStruct_1ef3fb1f)arg1 unadjustedSliceRectangles:(id *)arg2 imageSlicesNeedAdjustment:(char *)arg3 newRenditionSize:(CDStruct_1ef3fb1f *)arg4;
- (id)_slicesToUseForCSI;
- (void)_logExtra:(id)arg1;
- (void)_logWarning:(id)arg1;
- (void)_logError:(id)arg1;
- (id)associatedFileModificationDateWithDocument:(id)arg1;
- (void)copyAttributesInto:(id)arg1;
- (void)awakeFromFetch;
@property(nonatomic) struct CGRect alignmentRect; // @dynamic alignmentRect;
@property(nonatomic) struct CGRect primitiveAlignmentRect;
- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

// Remaining properties
@property(retain, nonatomic) NSString *alignmentRectString; // @dynamic alignmentRectString;
@property(retain, nonatomic) TDPNGAsset *asset; // @dynamic asset;
@property(retain, nonatomic) TDThemeCompressionType *compressionType; // @dynamic compressionType;
@property(nonatomic) BOOL isTintable; // @dynamic isTintable;
@property(retain, nonatomic) NSString *nonAlphaImageAreaString; // @dynamic nonAlphaImageAreaString;
@property(retain, nonatomic) NSString *originalImageSizeString; // @dynamic originalImageSizeString;
@property(retain, nonatomic) NSOrderedSet *slices; // @dynamic slices;

@end

