//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

#import "WCBaseInfoItemDelegate.h"

@class NSString, UIButton, UIImageView, WCPayPayUCVVCtrlItem;

@interface WCPayPayUCVVConfirmView : MMUIView <WCBaseInfoItemDelegate>
{
    UIImageView *m_backgroundView;
    UIButton *m_payButton;
    NSString *m_nsContent;
    NSString *m_nsConfirmButtonName;
    WCPayPayUCVVCtrlItem *m_textFieldItemPwd;
    id <WCPayPayUCVVConfirmViewDelegate> m_delegate;
    unsigned int m_uiTotalNum;
}

- (void).cxx_destruct;
- (_Bool)shouldPreventedAutorotateToInterfaceOrientation;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)onCancelBtnClick;
- (void)onPayBtnClick;
- (void)closeView;
- (void)setConfirmButtonName:(id)arg1;
- (void)setContent:(id)arg1;
- (void)endAnimation;
- (void)showAnimation;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 andData:(id)arg2 CVVTotalNum:(unsigned int)arg3 delegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

