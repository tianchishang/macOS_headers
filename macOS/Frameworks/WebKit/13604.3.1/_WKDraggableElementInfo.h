//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKit/NSCopying-Protocol.h>

@interface _WKDraggableElementInfo : NSObject <NSCopying>
{
    BOOL _link;
    BOOL _attachment;
    BOOL _image;
    BOOL _selected;
    struct CGPoint _point;
}

@property(nonatomic, getter=isSelected) BOOL selected; // @synthesize selected=_selected;
@property(nonatomic, getter=isImage) BOOL image; // @synthesize image=_image;
@property(nonatomic, getter=isAttachment) BOOL attachment; // @synthesize attachment=_attachment;
@property(nonatomic, getter=isLink) BOOL link; // @synthesize link=_link;
@property(nonatomic) struct CGPoint point; // @synthesize point=_point;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

