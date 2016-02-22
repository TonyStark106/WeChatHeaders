//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

#import "ILinkEventExt.h"

@class NSString, RichTextView, UIButton, UILabel, WCBaseKeyboardToolBar, WCPayPayUSecureCtrlItem;

@interface WCPayConfirmOptViewController : WCPayBaseViewController <ILinkEventExt>
{
    UIButton *m_footerButton;
    WCPayPayUSecureCtrlItem *m_textFieldItem;
    UIButton *m_sendVerifyCodeBtn;
    UILabel *m_sendVerifyCodeLabel;
    long long m_iCountDown;
    NSString *m_nsHeaderTip;
    NSString *m_nsHeaderTipForCustom;
    RichTextView *richTextView;
    WCBaseKeyboardToolBar *m_keyboardBar;
    id <WCPayConfirmOptViewControllerDelegate> m_delegate;
}

- (void).cxx_destruct;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)showNotSMSTipBtn;
- (void)setHeaderTipForCustom:(id)arg1;
- (void)setFooterBtnTitle:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)initNavigationBar;
- (void)updateSendVerifyCodeButton;
- (void)initSendVerifyCodeButton;
- (void)willDisappear;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)onNext;
- (void)onSendVerifyCodeClicked:(id)arg1;
- (void)startTimer;
- (void)stopTimer;
- (void)initFooterView;
- (void)makeInfoCell:(id)arg1;
- (void)reloadTableView;
- (void)setHeaderTip:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

