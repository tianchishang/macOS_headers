//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CalendarUI/CalUIResizingTextField.h>

@class EKViewController;

@interface EKUIResizingTextField : CalUIResizingTextField
{
    BOOL _consumeEnterPress;
    EKViewController *_viewController;
}

@property __weak EKViewController *viewController; // @synthesize viewController=_viewController;
@property BOOL consumeEnterPress; // @synthesize consumeEnterPress=_consumeEnterPress;
- (void).cxx_destruct;
- (BOOL)allowsVibrancy;
- (void)configureText;
- (void)setPlaceholderText:(id)arg1;
- (id)textAttributes;
- (id)initWithViewController:(id)arg1;

@end

