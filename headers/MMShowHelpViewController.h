//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "UIAlertViewDelegate.h"

@class NSString, UIScrollView;

@interface MMShowHelpViewController : MMUIViewController <UIAlertViewDelegate>
{
    UIScrollView *mScrollView;
}

@property(retain, nonatomic) UIScrollView *mScrollView; // @synthesize mScrollView;
- (void).cxx_destruct;
- (void)OnXXX;
- (void)OnDataChange;
- (void)viewDidLoad;
- (void)initView;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onHardwareDebug;
- (void)onJsDebug;
- (void)onUploadData;
- (void)onRecoverData;
- (void)onUpLoadLog;
- (void)onRecoverDB;
- (void)initData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

