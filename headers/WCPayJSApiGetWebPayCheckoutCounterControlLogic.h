//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayControlLogic.h"

#import "IWCPayControlLogicExt.h"
#import "WCPayAvaliablePayCardListViewDelegate.h"
#import "WCPayOrderPayConfirmViewDelegate.h"
#import "WCPayVerifyPayCardViewControllerDelegate.h"

@class JSEvent, NSString;

@interface WCPayJSApiGetWebPayCheckoutCounterControlLogic : WCPayControlLogic <WCPayVerifyPayCardViewControllerDelegate, WCPayOrderPayConfirmViewDelegate, WCPayAvaliablePayCardListViewDelegate, IWCPayControlLogicExt>
{
    JSEvent *m_jsEvent;
    int m_enWCPayCheckAuthorityScene;
    NSString *m_nsAppToken;
    NSString *m_nsResultToken;
    NSString *m_nsRelationKey;
    int m_getOrderScene;
}

- (void).cxx_destruct;
- (void)OnFinishedWCPayLogic:(id)arg1 CompleteStatus:(int)arg2;
- (void)OnGetCheckPayPwdVerifyCodeByToken:(id)arg1 Error:(id)arg2;
- (void)OnGetCheckPayPwdByToken:(id)arg1 Error:(id)arg2;
- (void)OnGetWebPayOrderDetailInfo:(id)arg1 BindQueryInfo:(id)arg2 Error:(id)arg3;
- (void)OnCheckWCPayJsApiRequest:(id)arg1 Error:(id)arg2;
- (void)VerifyPayCardAgain:(id)arg1;
- (void)VerifyPayCardNext:(id)arg1;
- (void)VerifyPayCardBack;
- (void)OnWCPayAvaliablePayCardListViewAddPayCard;
- (void)OnWCPayAvaliablePayCardListViewNext:(id)arg1;
- (void)OnWCPayAvaliablePayCardListViewBack;
- (void)OnWCPayAvaliablePayCardListViewCancel;
- (void)onOrderPayConfirmViewPerformTouchID;
- (void)onOrderPayConfirmViewGotoPasswordAuth;
- (void)onOrderPayConfirmViewGotoTouchIDAuth;
- (void)OnOrderPayChangeConpons;
- (void)onOrderPayConfirmViewCancel;
- (void)onOrderPayChangeCard;
- (void)doAuthenticationPayWithPwd:(id)arg1 isTouchIDAuth:(_Bool)arg2;
- (void)onOrderPayConfirmViewPay:(id)arg1;
- (void)checkStopLogic;
- (void)stopLogic;
- (void)dealloc;
- (void)startLogic;
- (void)stopForceRotationToPortrait;
- (void)startForceRotationToPortrait;
- (id)initWithJSEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

