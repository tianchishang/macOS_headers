//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ParsecUI/PRSColumnsSliceView.h>

@class NSTextField;

@interface PRSTwoColumnsSliceView : PRSColumnsSliceView
{
    NSTextField *_columnOneTextField;
    NSTextField *_columnTwoTextField;
}

@property NSTextField *columnTwoTextField; // @synthesize columnTwoTextField=_columnTwoTextField;
@property NSTextField *columnOneTextField; // @synthesize columnOneTextField=_columnOneTextField;
- (id)columnTextFieldAtIndex:(unsigned long long)arg1;
- (unsigned long long)columnCount;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

