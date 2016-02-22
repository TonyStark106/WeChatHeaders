//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

@class MMUILabel, NSTimer, UIImageView;

@interface VideoVoipNetStatusView : MMUIView
{
    id <VideoVoipNetStatusViewDelegate> _delegate;
    UIImageView *_wifiImgView;
    MMUILabel *_statusLabel;
    NSTimer *_timer;
}

@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) MMUILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(retain, nonatomic) UIImageView *wifiImgView; // @synthesize wifiImgView=_wifiImgView;
@property(nonatomic) __weak id <VideoVoipNetStatusViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)animateHide;
- (void)updateViewFrame;
- (void)updateStatusViewWithNetLevel:(int)arg1 isVideoMode:(_Bool)arg2;
- (void)showStatusViewWithNetLevel:(int)arg1 isVideoMode:(_Bool)arg2;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

