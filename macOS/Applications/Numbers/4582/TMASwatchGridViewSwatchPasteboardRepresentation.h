//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSPasteboardReading-Protocol.h"
#import "NSPasteboardWriting-Protocol.h"

@class NSString;

@interface TMASwatchGridViewSwatchPasteboardRepresentation : NSObject <NSPasteboardWriting, NSPasteboardReading>
{
    unsigned long long mSwatchIndex;
}

+ (unsigned long long)readingOptionsForType:(id)arg1 pasteboard:(id)arg2;
+ (id)readableTypesForPasteboard:(id)arg1;
+ (id)representationWithSwatchIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long swatchIndex; // @synthesize swatchIndex=mSwatchIndex;
- (id)initWithPasteboardPropertyList:(id)arg1 ofType:(id)arg2;
- (id)pasteboardPropertyListForType:(id)arg1;
- (id)writableTypesForPasteboard:(id)arg1;
- (id)initWithSwatchIndex:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

