//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

@class UIButton, UIImageView, UILabel, ZCWScrollNumView;

@interface WCRedEnvelopesGreetingSendView : MMUIView
{
    id <WCRedEnvelopesGreetingSendViewDelegate> m_delegate;
    UIImageView *m_backgroundView;
    UIButton *openRedEnvelopesButton;
    UIImageView *openAnimationImageView;
    ZCWScrollNumView *numView;
    _Bool m_bScrollNum;
    UILabel *m_descTitleLable;
    _Bool m_bEndAnmation;
}

- (void).cxx_destruct;
- (void)removeView;
- (void)showGreeting;
- (void)showNumAnimation;
- (void)endAnimation;
- (void)showAnimation;
- (void)OnSendHBDone;
- (void)OnCancelButtonDone;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2 ScrollNum:(_Bool)arg3;

@end
