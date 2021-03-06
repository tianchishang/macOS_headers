//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "BaseViewController.h"

@class Device, DeviceUser, NSImageView, NSTextField;
@protocol ConfigureViewControllerDelegate;

@interface ConfigureViewController : BaseViewController
{
    id <ConfigureViewControllerDelegate> _delegate;
    Device *_device;
    DeviceUser *_deviceUser;
    NSTextField *_textLabel;
    NSTextField *_timeTextField;
    NSTextField *_smallTextLabel;
    NSTextField *_deviceNameLabel;
    NSTextField *_inputLoginInformationLabel;
    NSTextField *_userNameTextField;
    NSTextField *_passwordTextField;
    NSTextField *_connectTextField;
    NSImageView *_frameImageView;
}

@property(retain, nonatomic) NSImageView *frameImageView; // @synthesize frameImageView=_frameImageView;
@property(retain, nonatomic) NSTextField *connectTextField; // @synthesize connectTextField=_connectTextField;
@property(retain, nonatomic) NSTextField *passwordTextField; // @synthesize passwordTextField=_passwordTextField;
@property(retain, nonatomic) NSTextField *userNameTextField; // @synthesize userNameTextField=_userNameTextField;
@property(retain, nonatomic) NSTextField *inputLoginInformationLabel; // @synthesize inputLoginInformationLabel=_inputLoginInformationLabel;
@property(retain, nonatomic) NSTextField *deviceNameLabel; // @synthesize deviceNameLabel=_deviceNameLabel;
@property(retain, nonatomic) NSTextField *smallTextLabel; // @synthesize smallTextLabel=_smallTextLabel;
@property(retain, nonatomic) NSTextField *timeTextField; // @synthesize timeTextField=_timeTextField;
@property(retain, nonatomic) NSTextField *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) DeviceUser *deviceUser; // @synthesize deviceUser=_deviceUser;
@property(retain, nonatomic) Device *device; // @synthesize device=_device;
@property(nonatomic) __weak id <ConfigureViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)backToggled:(id)arg1;
- (void)updateView;
- (void)updateStrings;
- (void)loadView;

@end

